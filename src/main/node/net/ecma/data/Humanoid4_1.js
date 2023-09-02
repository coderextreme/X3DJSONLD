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
var component = require('./x3d.js');
var SFInt32 = require('./x3d.js');
var MFNode = require('./x3d.js');
var meta = require('./x3d.js');
var Scene = require('./x3d.js');
var Transform = require('./x3d.js');
var Shape = require('./x3d.js');
var IndexedLineSet = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var SFBool = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var Color = require('./x3d.js');
var MFColor = require('./x3d.js');
var Group = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Sphere = require('./x3d.js');
var SFFloat = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var SFColor = require('./x3d.js');
var LineSet = require('./x3d.js');
var ColorRGBA = require('./x3d.js');
var MFColorRGBA = require('./x3d.js');
var IndexedFaceSet = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var HAnimHumanoid = require('./x3d.js');
var MFString = require('./x3d.js');
var HAnimJoint = require('./x3d.js');
var MFFloat = require('./x3d.js');
var HAnimSegment = require('./x3d.js');
var HAnimSite = require('./x3d.js');
var TouchSensor = require('./x3d.js');
var SFRotation = require('./x3d.js');
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
              content : new SFString("Humanoid4_1.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("An attempt at a standard LOA-4 skeleton")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("h2.pl")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("14 Jan 2023")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("John Carlson")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("9 November 2020")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Transform({
              /*DEF for markerfor XYZ axes*/
              children : new MFNode([
                new Shape({
                  DEF : new SFString("AxisLinesShape"),
                  /*RGB lines showing XYZ axes*/
                  geometry : new SFNode(
                    new IndexedLineSet({
                      colorIndex : new MFInt32([0,1,2]),
                      colorPerVertex : new SFBool(false),
                      coordIndex : new MFInt32([0,1,-1,0,2,-1,0,3,-1]),
                      coord : new SFNode(
                        new Coordinate({
                          point : new MFVec3f([0,0,0,0.1,0,0,0,0.1,0,0,0,0.1])})),
                      color : new SFNode(
                        new Color({
                          color : new MFColor([1,0,0,0,0.6,0,0,0,1])}))}))})])}),

            new Group({
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([0,2,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimRootShape"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.02)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAnimRootMaterial"),
                                  diffuseColor : new SFColor([0.8,0,0]),
                                  transparency : new SFFloat(0.3)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimJointShape"),
                          geometry : new SFNode(
                            new Sphere({
                              radius : new SFFloat(0.02)})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  DEF : new SFString("HAnimJointMaterial"),
                                  diffuseColor : new SFColor([0,0,0.8]),
                                  transparency : new SFFloat(0.3)}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.05,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimSegmentLine"),
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([-0.05,0,0,0.05,0,0])}))}))})])}),

                    new Transform({
                      translation : new SFVec3f([0,2.1,0]),
                      children : new MFNode([
                        new Shape({
                          DEF : new SFString("HAnimSiteShape"),
                          geometry : new SFNode(
                            new IndexedFaceSet({
                              DEF : new SFString("DiamondIFS"),
                              creaseAngle : new SFFloat(0.5),
                              solid : new SFBool(false),
                              coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSiteColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1,1,1,0,1,1,1,0,0.1])})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([1,1,0]),
                                  transparency : new SFFloat(0.3)}))}))})])})])})])}),

            new NavigationInfo({
              speed : new SFFloat(1.5)}),

            new Viewpoint({
              description : new SFString("default")}),

            new HAnimHumanoid({
              name : new SFString("HAnim"),
              DEF : new SFString("hanim_HAnim"),
              info : new MFString(["humanoidVersion=2.0"]),
              version : new SFString("2.0"),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
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
                            new Transform({
                              /*Empty Transform*/
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})])})])}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0,0.9149,0.0016])})),
                              /*from humanoid_root to sacroiliac vertices 2*/
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                        new HAnimSite({
                          name : new SFString("buttocks_standing_wall_contact_point_pt"),
                          DEF : new SFString("hanim_buttocks_standing_wall_contact_point_pt"),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite buttocks_standing_wall_contact_point_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("crotch_pt"),
                          DEF : new SFString("hanim_crotch_pt"),
                          translation : new SFVec3f([0.0034,0.8266,0.0257]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite crotch_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("l_asis_pt"),
                          DEF : new SFString("hanim_l_asis_pt"),
                          translation : new SFVec3f([0.0925,0.9983,0.1052]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite l_asis_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("l_iliocristale_pt"),
                          DEF : new SFString("hanim_l_iliocristale_pt"),
                          translation : new SFVec3f([0.1612,1.0537,0.0008]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite l_iliocristale_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("l_psis_pt"),
                          DEF : new SFString("hanim_l_psis_pt"),
                          translation : new SFVec3f([0.0774,1.019,-0.1151]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite l_psis_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("l_trochanterion_pt"),
                          DEF : new SFString("hanim_l_trochanterion_pt"),
                          translation : new SFVec3f([0.1677,0.8336,0.0303]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite l_trochanterion_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("r_asis_pt"),
                          DEF : new SFString("hanim_r_asis_pt"),
                          translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite r_asis_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("r_iliocristale_pt"),
                          DEF : new SFString("hanim_r_iliocristale_pt"),
                          translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite r_iliocristale_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("r_psis_pt"),
                          DEF : new SFString("hanim_r_psis_pt"),
                          translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite r_psis_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("r_trochanterion_pt"),
                          DEF : new SFString("hanim_r_trochanterion_pt"),
                          translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite r_trochanterion_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776])})),
                              /*from humanoid_root to vl5 vertices 2*/
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                        new HAnimSite({
                          name : new SFString("navel_pt"),
                          DEF : new SFString("hanim_navel_pt"),
                          translation : new SFVec3f([0.0069,1.0966,0.1017]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite navel_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("waist_preferred_anterior_pt"),
                          DEF : new SFString("hanim_waist_preferred_anterior_pt"),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite waist_preferred_anterior_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])}),

                        new HAnimSite({
                          name : new SFString("waist_preferred_posterior_pt"),
                          DEF : new SFString("hanim_waist_preferred_posterior_pt"),
                          translation : new SFVec3f([0.29,1.0915,-0.1091]),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimSite waist_preferred_posterior_pt")}),

                            new Shape({
                              USE : new SFString("HAnimSiteShape")})])})])}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
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
                                new Transform({
                                  /*Empty Transform*/
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])})])}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001])})),
                                  /*from sacroiliac to l_hip vertices 2*/
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("l_femoral_lateral_epicondyles_pt"),
                              DEF : new SFString("hanim_l_femoral_lateral_epicondyles_pt"),
                              translation : new SFVec3f([0.1598,0.4967,0.0297]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_femoral_lateral_epicondyles_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_femoral_medial_epicondyles_pt"),
                              DEF : new SFString("hanim_l_femoral_medial_epicondyles_pt"),
                              translation : new SFVec3f([0.0398,0.4946,0.0303]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_femoral_medial_epicondyles_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_knee_crease_pt"),
                              DEF : new SFString("hanim_l_knee_crease_pt"),
                              translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_knee_crease_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_suprapatella_pt"),
                              DEF : new SFString("hanim_l_suprapatella_pt"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_suprapatella_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.095,0.9171,0.0029])})),
                                  /*from sacroiliac to r_hip vertices 2*/
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("r_femoral_lateral_epicondyles_pt"),
                              DEF : new SFString("hanim_r_femoral_lateral_epicondyles_pt"),
                              translation : new SFVec3f([-0.1421,0.4992,0.031]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_femoral_lateral_epicondyles_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_femoral_medial_epicondyles_pt"),
                              DEF : new SFString("hanim_r_femoral_medial_epicondyles_pt"),
                              translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_femoral_medial_epicondyles_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_knee_crease_pt"),
                              DEF : new SFString("hanim_r_knee_crease_pt"),
                              translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_knee_crease_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_suprapatella_pt"),
                              DEF : new SFString("hanim_r_suprapatella_pt"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_suprapatella_pt")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
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
                                    new Transform({
                                      /*Empty Transform*/
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])})),
                                      /*from l_hip to l_knee vertices 2*/
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("l_lateral_malleolus_pt"),
                                  DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                  translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_lateral_malleolus_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_medial_malleolus_pt"),
                                  DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                  translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_medial_malleolus_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_tibiale_pt"),
                                  DEF : new SFString("hanim_l_tibiale_pt"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_tibiale_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
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
                                        new Transform({
                                          /*Empty Transform*/
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])})])}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])})),
                                          /*from l_knee to l_talocrural vertices 2*/
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                    new HAnimSite({
                                      name : new SFString("l_calcaneus_posterior_pt"),
                                      DEF : new SFString("hanim_l_calcaneus_posterior_pt"),
                                      translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite l_calcaneus_posterior_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])}),

                                    new HAnimSite({
                                      name : new SFString("l_sphyrion_pt"),
                                      DEF : new SFString("hanim_l_sphyrion_pt"),
                                      translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite l_sphyrion_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_talocrural"),
                                  DEF : new SFString("hanim_l_talocrural"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_talus"),
                                      DEF : new SFString("hanim_l_talus"),
                                      children : new MFNode([
                                        new Transform({
                                          scale : new SFVec3f([0.15,0.15,0.15]),
                                          translation : new SFVec3f([0.08,0.06,-0.025]),
                                          rotation : new SFRotation([1,0,0,-1.57]),
                                          /*Transform left foot*/
                                          children : new MFNode([
                                            new Transform({
                                              /*Empty Transform left foot*/
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736])})),
                                              /*from l_talocrural to l_talocalcaneonavicular vertices 2*/
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1101,0.0656,-0.0736])})),
                                              /*from l_talocrural to l_calcaneocuboid vertices 2*/
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_l_talocalcaneonavicular"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_navicular"),
                                          DEF : new SFString("hanim_l_navicular"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                              children : new MFNode([
                                                new Transform({
                                                  /*Empty Transform*/
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                  /*from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_1"),
                                          DEF : new SFString("hanim_l_cuneonavicular_1"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_1"),
                                              DEF : new SFString("hanim_l_cuneiform_1"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                      /*from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_1"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_1"),
                                                  DEF : new SFString("hanim_l_metatarsal_1"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                          /*from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_phalanx_1_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_phalanx_1_pt"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_metatarsal_phalanx_1_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_1"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_1"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_1"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                              /*from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("l_tarsal_distal_phalanx_1_tip"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_phalanx_1_tip"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite l_tarsal_distal_phalanx_1_tip")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_l_tarsal_interphalangeal_1"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_2"),
                                          DEF : new SFString("hanim_l_cuneonavicular_2"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_2"),
                                              DEF : new SFString("hanim_l_cuneiform_2"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                      /*from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_2"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_2"),
                                                  DEF : new SFString("hanim_l_metatarsal_2"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                          /*from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_2"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_2"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                              /*from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_2"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_2"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_2"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                                  /*from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("l_tarsal_distal_phalanx_2_tip"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_2_tip"),
                                                              translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_tarsal_distal_phalanx_2_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_2"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_cuneonavicular_3"),
                                          DEF : new SFString("hanim_l_cuneonavicular_3"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuneiform_3"),
                                              DEF : new SFString("hanim_l_cuneiform_3"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                      /*from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_3"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_3"),
                                                  DEF : new SFString("hanim_l_metatarsal_3"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                          /*from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_3"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_3"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_3"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                              /*from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_3"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_3"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_3"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                                  /*from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("l_tarsal_distal_phalanx_3_tip"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_3_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_tarsal_distal_phalanx_3_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_3"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_calcaneocuboid"),
                                      DEF : new SFString("hanim_l_calcaneocuboid"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_calcaneus"),
                                          DEF : new SFString("hanim_l_calcaneus"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                              children : new MFNode([
                                                new Transform({
                                                  /*Empty Transform*/
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                  /*from l_calcaneocuboid to l_transversetarsal vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_transversetarsal"),
                                          DEF : new SFString("hanim_l_transversetarsal"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_cuboid"),
                                              DEF : new SFString("hanim_l_cuboid"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                      /*from l_transversetarsal to l_tarsometatarsal_4 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                      /*from l_transversetarsal to l_tarsometatarsal_5 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_4"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_4"),
                                                  DEF : new SFString("hanim_l_metatarsal_4"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                          /*from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_4"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_4"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_4"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                              /*from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_4"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_4"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_4"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                                  /*from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("l_tarsal_distal_phalanx_4_tip"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_4_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_tarsal_distal_phalanx_4_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_4"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_l_tarsometatarsal_5"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_metatarsal_5"),
                                                  DEF : new SFString("hanim_l_metatarsal_5"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                          /*from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_phalanx_5_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_phalanx_5_pt"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_metatarsal_phalanx_5_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_l_metatarsophalangeal_5"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("l_tarsal_proximal_phalanx_5"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_phalanx_5"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                              /*from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_l_tarsal_proximal_interphalangeal_5"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("l_tarsal_middle_phalanx_5"),
                                                          DEF : new SFString("hanim_l_tarsal_middle_phalanx_5"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.1101,0.0656,-0.0736])})),
                                                                  /*from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("l_tarsal_distal_phalanx_5_tip"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_5_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_tarsal_distal_phalanx_5_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_l_tarsal_distal_interphalangeal_5"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.095,0.9171,0.0029]),
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
                                    new Transform({
                                      /*Empty Transform*/
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.095,0.9171,0.0029,-0.0867,0.4913,0.0318])})),
                                      /*from r_hip to r_knee vertices 2*/
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("r_lateral_malleolus_pt"),
                                  DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                  translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_lateral_malleolus_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_medial_malleolus_pt"),
                                  DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                  translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_medial_malleolus_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_tibiale_pt"),
                                  DEF : new SFString("hanim_r_tibiale_pt"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_tibiale_pt")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.0867,0.4913,0.0318]),
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
                                        new Transform({
                                          /*Empty Transform*/
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])})])}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.0867,0.4913,0.0318,-0.0801,0.0712,-0.0766])})),
                                          /*from r_knee to r_talocrural vertices 2*/
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                    new HAnimSite({
                                      name : new SFString("r_calcaneus_posterior_pt"),
                                      DEF : new SFString("hanim_r_calcaneus_posterior_pt"),
                                      translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite r_calcaneus_posterior_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])}),

                                    new HAnimSite({
                                      name : new SFString("r_sphyrion_pt"),
                                      DEF : new SFString("hanim_r_sphyrion_pt"),
                                      translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite r_sphyrion_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_talocrural"),
                                  DEF : new SFString("hanim_r_talocrural"),
                                  center : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_talus"),
                                      DEF : new SFString("hanim_r_talus"),
                                      children : new MFNode([
                                        new Transform({
                                          scale : new SFVec3f([0.15,0.15,0.15]),
                                          translation : new SFVec3f([-0.05,0.06,-0.025]),
                                          rotation : new SFRotation([1,0,0,-1.57]),
                                          /*Transform right foot*/
                                          children : new MFNode([
                                            new Transform({
                                              /*Empty Transform right foot*/
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766])})),
                                              /*from r_talocrural to r_talocalcaneonavicular vertices 2*/
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766,-0.0801,0.0712,-0.0766])})),
                                              /*from r_talocrural to r_calcaneocuboid vertices 2*/
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_talocalcaneonavicular"),
                                      DEF : new SFString("hanim_r_talocalcaneonavicular"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_navicular"),
                                          DEF : new SFString("hanim_r_navicular"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                              children : new MFNode([
                                                new Transform({
                                                  /*Empty Transform*/
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                  /*from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_1"),
                                          DEF : new SFString("hanim_r_cuneonavicular_1"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_1"),
                                              DEF : new SFString("hanim_r_cuneiform_1"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                      /*from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_1"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_1"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_1"),
                                                  DEF : new SFString("hanim_r_metatarsal_1"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                          /*from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_phalanx_1_pt"),
                                                      DEF : new SFString("hanim_r_metatarsal_phalanx_1_pt"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_metatarsal_phalanx_1_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_1"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_1"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_1"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_1"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                              /*from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("r_tarsal_distal_phalanx_1_tip"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_phalanx_1_tip"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite r_tarsal_distal_phalanx_1_tip")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_interphalangeal_1"),
                                                      DEF : new SFString("hanim_r_tarsal_interphalangeal_1"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_2"),
                                          DEF : new SFString("hanim_r_cuneonavicular_2"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_2"),
                                              DEF : new SFString("hanim_r_cuneiform_2"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                      /*from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_2"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_2"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_2"),
                                                  DEF : new SFString("hanim_r_metatarsal_2"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                          /*from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_2"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_2"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_2"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                              /*from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_2"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_2"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_2"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_2"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                                  /*from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_tarsal_distal_phalanx_2_tip"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_2_tip"),
                                                              translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_tarsal_distal_phalanx_2_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_2"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_2"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_cuneonavicular_3"),
                                          DEF : new SFString("hanim_r_cuneonavicular_3"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuneiform_3"),
                                              DEF : new SFString("hanim_r_cuneiform_3"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                      /*from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_3"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_3"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_3"),
                                                  DEF : new SFString("hanim_r_metatarsal_3"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                          /*from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_3"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_3"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_3"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_3"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                              /*from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_3"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_3"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_3"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_3"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                                  /*from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_tarsal_distal_phalanx_3_tip"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_3_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_tarsal_distal_phalanx_3_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_3"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_3"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_calcaneocuboid"),
                                      DEF : new SFString("hanim_r_calcaneocuboid"),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_calcaneus"),
                                          DEF : new SFString("hanim_r_calcaneus"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                              children : new MFNode([
                                                new Transform({
                                                  /*Empty Transform*/
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                  /*from r_calcaneocuboid to r_transversetarsal vertices 1*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_transversetarsal"),
                                          DEF : new SFString("hanim_r_transversetarsal"),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_cuboid"),
                                              DEF : new SFString("hanim_r_cuboid"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                  children : new MFNode([
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                      /*from r_transversetarsal to r_tarsometatarsal_4 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                      /*from r_transversetarsal to r_tarsometatarsal_5 vertices 1*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_4"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_4"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_4"),
                                                  DEF : new SFString("hanim_r_metatarsal_4"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                          /*from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_4"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_4"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_4"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_4"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                              /*from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_4"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_4"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_4"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_4"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                                  /*from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_tarsal_distal_phalanx_4_tip"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_4_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_tarsal_distal_phalanx_4_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_4"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_4"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_tarsometatarsal_5"),
                                              DEF : new SFString("hanim_r_tarsometatarsal_5"),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_metatarsal_5"),
                                                  DEF : new SFString("hanim_r_metatarsal_5"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                      children : new MFNode([
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                          /*from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 1*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_phalanx_5_pt"),
                                                      DEF : new SFString("hanim_r_metatarsal_phalanx_5_pt"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_metatarsal_phalanx_5_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_metatarsophalangeal_5"),
                                                  DEF : new SFString("hanim_r_metatarsophalangeal_5"),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("r_tarsal_proximal_phalanx_5"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_phalanx_5"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                          children : new MFNode([
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                              /*from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 1*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_tarsal_proximal_interphalangeal_5"),
                                                      DEF : new SFString("hanim_r_tarsal_proximal_interphalangeal_5"),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("r_tarsal_middle_phalanx_5"),
                                                          DEF : new SFString("hanim_r_tarsal_middle_phalanx_5"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0801,0.0712,-0.0766]),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([-0.0801,0.0712,-0.0766])})),
                                                                  /*from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 1*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_tarsal_distal_phalanx_5_tip"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_5_tip"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_tarsal_distal_phalanx_5_tip")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_distal_interphalangeal_5"),
                                                          DEF : new SFString("hanim_r_tarsal_distal_interphalangeal_5"),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
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
                                new Transform({
                                  /*Empty Transform*/
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])})])}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])})),
                                  /*from vl5 to vl4 vertices 2*/
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                    new Transform({
                                      /*Empty Transform*/
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])})),
                                      /*from vl4 to vl3 vertices 2*/
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                        new Transform({
                                          /*Empty Transform*/
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])})])}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])})),
                                          /*from vl3 to vl2 vertices 2*/
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                    new HAnimSite({
                                      name : new SFString("l_rib10_pt"),
                                      DEF : new SFString("hanim_l_rib10_pt"),
                                      translation : new SFVec3f([0.0871,1.1925,0.0992]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite l_rib10_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])}),

                                    new HAnimSite({
                                      name : new SFString("r_rib10_pt"),
                                      DEF : new SFString("hanim_r_rib10_pt"),
                                      translation : new SFVec3f([-0.0711,1.1941,0.1016]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite r_rib10_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])}),

                                    new HAnimSite({
                                      name : new SFString("spine_2_middle_back_pt"),
                                      DEF : new SFString("hanim_spine_2_middle_back_pt"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimSite spine_2_middle_back_pt")}),

                                        new Shape({
                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
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
                                            new Transform({
                                              /*Empty Transform*/
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])})),
                                              /*from vl2 to vl1 vertices 2*/
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                new Transform({
                                                  /*Empty Transform*/
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])})),
                                                  /*from vl1 to vt12 vertices 2*/
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                    new Transform({
                                                      /*Empty Transform*/
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])})),
                                                      /*from vt12 to vt11 vertices 2*/
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                        new Transform({
                                                          /*Empty Transform*/
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])})),
                                                          /*from vt11 to vt10 vertices 2*/
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("substernale_pt"),
                                                      DEF : new SFString("hanim_substernale_pt"),
                                                      translation : new SFVec3f([0.0085,1.2995,0.1147]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite substernale_pt")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
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
                                                            new Transform({
                                                              /*Empty Transform*/
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])})),
                                                              /*from vt10 to vt9 vertices 2*/
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("l_thelion_pt"),
                                                          DEF : new SFString("hanim_l_thelion_pt"),
                                                          translation : new SFVec3f([0.0918,1.3382,0.1192]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite l_thelion_pt")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                        new HAnimSite({
                                                          name : new SFString("r_thelion_pt"),
                                                          DEF : new SFString("hanim_r_thelion_pt"),
                                                          translation : new SFVec3f([-0.0736,1.3385,0.1217]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite r_thelion_pt")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
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
                                                                new Transform({
                                                                  /*Empty Transform*/
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])})),
                                                                  /*from vt9 to vt8 vertices 2*/
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                    new Transform({
                                                                      /*Empty Transform*/
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])})),
                                                                      /*from vt8 to vt7 vertices 2*/
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                        new Transform({
                                                                          /*Empty Transform*/
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new LineSet({
                                                                          vertexCount : new MFInt32([2]),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])})),
                                                                          /*from vt7 to vt6 vertices 2*/
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("l_chest_midsagittal_plane_pt"),
                                                                      DEF : new SFString("hanim_l_chest_midsagittal_plane_pt"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimSite l_chest_midsagittal_plane_pt")}),

                                                                        new Shape({
                                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                                    new HAnimSite({
                                                                      name : new SFString("mesosternale_pt"),
                                                                      DEF : new SFString("hanim_mesosternale_pt"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimSite mesosternale_pt")}),

                                                                        new Shape({
                                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                                    new HAnimSite({
                                                                      name : new SFString("r_chest_midsagittal_plane_pt"),
                                                                      DEF : new SFString("hanim_r_chest_midsagittal_plane_pt"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimSite r_chest_midsagittal_plane_pt")}),

                                                                        new Shape({
                                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                                    new HAnimSite({
                                                                      name : new SFString("rear_center_midsagittal_plane_pt"),
                                                                      DEF : new SFString("hanim_rear_center_midsagittal_plane_pt"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimSite rear_center_midsagittal_plane_pt")}),

                                                                        new Shape({
                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

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
                                                                            new Transform({
                                                                              /*Empty Transform*/
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new LineSet({
                                                                              vertexCount : new MFInt32([2]),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])})),
                                                                              /*from vt6 to vt5 vertices 2*/
                                                                              color : new SFNode(
                                                                                new ColorRGBA({
                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("spine_1_middle_back_pt"),
                                                                          DEF : new SFString("hanim_spine_1_middle_back_pt"),
                                                                          children : new MFNode([
                                                                            new TouchSensor({
                                                                              description : new SFString("HAnimSite spine_1_middle_back_pt")}),

                                                                            new Shape({
                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

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
                                                                                new Transform({
                                                                                  /*Empty Transform*/
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new LineSet({
                                                                                  vertexCount : new MFInt32([2]),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])})),
                                                                                  /*from vt5 to vt4 vertices 2*/
                                                                                  color : new SFNode(
                                                                                    new ColorRGBA({
                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
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
                                                                                    new Transform({
                                                                                      /*Empty Transform*/
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new LineSet({
                                                                                      vertexCount : new MFInt32([2]),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])})),
                                                                                      /*from vt4 to vt3 vertices 2*/
                                                                                      color : new SFNode(
                                                                                        new ColorRGBA({
                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                        new Transform({
                                                                                          /*Empty Transform*/
                                                                                          children : new MFNode([
                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new LineSet({
                                                                                          vertexCount : new MFInt32([2]),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])})),
                                                                                          /*from vt3 to vt2 vertices 2*/
                                                                                          color : new SFNode(
                                                                                            new ColorRGBA({
                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                            new Transform({
                                                                                              /*Empty Transform*/
                                                                                              children : new MFNode([
                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new LineSet({
                                                                                              vertexCount : new MFInt32([2]),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])})),
                                                                                              /*from vt2 to vt1 vertices 2*/
                                                                                              color : new SFNode(
                                                                                                new ColorRGBA({
                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                        new HAnimSite({
                                                                                          name : new SFString("cervicale_pt"),
                                                                                          DEF : new SFString("hanim_cervicale_pt"),
                                                                                          translation : new SFVec3f([0.0064,1.52,-0.0815]),
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("HAnimSite cervicale_pt")}),

                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                        new HAnimSite({
                                                                                          name : new SFString("suprasternale_pt"),
                                                                                          DEF : new SFString("hanim_suprasternale_pt"),
                                                                                          translation : new SFVec3f([0.0084,1.4714,0.0551]),
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("HAnimSite suprasternale_pt")}),

                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
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
                                                                                                new Transform({
                                                                                                  /*Empty Transform*/
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])})),
                                                                                                  /*from vt1 to vc7 vertices 2*/
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_neck_base_pt"),
                                                                                              DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                              translation : new SFVec3f([0.0646,1.5141,-0.038]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_neck_base_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_neck_base_pt"),
                                                                                              DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                              translation : new SFVec3f([-0.0419,1.5149,-0.022]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_neck_base_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])})),
                                                                                                  /*from vt1 to l_sternoclavicular vertices 2*/
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_acromion_pt"),
                                                                                              DEF : new SFString("hanim_l_acromion_pt"),
                                                                                              translation : new SFVec3f([0.2032,1.476,-0.049]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_acromion_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_axilla_distal_pt"),
                                                                                              DEF : new SFString("hanim_l_axilla_distal_pt"),
                                                                                              translation : new SFVec3f([0.1706,1.4072,-0.0875]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_axilla_distal_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_axilla_posterior_folds_pt"),
                                                                                              DEF : new SFString("hanim_l_axilla_posterior_folds_pt"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_axilla_posterior_folds_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_axilla_proximal_pt"),
                                                                                              DEF : new SFString("hanim_l_axilla_proximal_pt"),
                                                                                              translation : new SFVec3f([0.1777,1.4065,-0.0075]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_axilla_proximal_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("l_clavicale_pt"),
                                                                                              DEF : new SFString("hanim_l_clavicale_pt"),
                                                                                              translation : new SFVec3f([0.0271,1.4943,0.0394]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite l_clavicale_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,-0.0694,1.46,-0.033])})),
                                                                                                  /*from vt1 to r_sternoclavicular vertices 2*/
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_acromion_pt"),
                                                                                              DEF : new SFString("hanim_r_acromion_pt"),
                                                                                              translation : new SFVec3f([-0.1905,1.4791,-0.0431]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_acromion_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_axilla_distal_pt"),
                                                                                              DEF : new SFString("hanim_r_axilla_distal_pt"),
                                                                                              translation : new SFVec3f([-0.1603,1.4098,-0.0826]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_axilla_distal_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_axilla_posterior_folds_pt"),
                                                                                              DEF : new SFString("hanim_r_axilla_posterior_folds_pt"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_axilla_posterior_folds_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_axilla_proximal_pt"),
                                                                                              DEF : new SFString("hanim_r_axilla_proximal_pt"),
                                                                                              translation : new SFVec3f([-0.1626,1.4072,-0.0031]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_axilla_proximal_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("r_clavicale_pt"),
                                                                                              DEF : new SFString("hanim_r_clavicale_pt"),
                                                                                              translation : new SFVec3f([-0.0115,1.4943,0.04]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite r_clavicale_pt")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
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
                                                                                                    new Transform({
                                                                                                      /*Empty Transform*/
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])})),
                                                                                                      /*from vc7 to vc6 vertices 2*/
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                                      translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          /*Empty Transform*/
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])})),
                                                                                                          /*from vc6 to vc5 vertices 2*/
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                                            new Transform({
                                                                                                              /*Empty Transform*/
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])})),
                                                                                                              /*from vc5 to vc4 vertices 2*/
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                                                new Transform({
                                                                                                                  /*Empty Transform*/
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])})),
                                                                                                                  /*from vc4 to vc3 vertices 2*/
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                                                    new Transform({
                                                                                                                      /*Empty Transform*/
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])})),
                                                                                                                      /*from vc3 to vc2 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("adams_apple_pt"),
                                                                                                                  DEF : new SFString("hanim_adams_apple_pt"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite adams_apple_pt")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

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
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])})),
                                                                                                                          /*from vc2 to vc1 vertices 2*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

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
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])})),
                                                                                                                              /*from vc1 to skullbase vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("glabella_pt"),
                                                                                                                          DEF : new SFString("hanim_glabella_pt"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite glabella_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_ectocanthus_pt"),
                                                                                                                          DEF : new SFString("hanim_l_ectocanthus_pt"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite l_ectocanthus_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_infraorbitale_pt"),
                                                                                                                          DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                          translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite l_infraorbitale_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("l_tragion_pt"),
                                                                                                                          DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                          translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite l_tragion_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("nuchale_pt"),
                                                                                                                          DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                          translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite nuchale_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("opisthocranion_pt"),
                                                                                                                          DEF : new SFString("hanim_opisthocranion_pt"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite opisthocranion_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("r_ectocanthus_pt"),
                                                                                                                          DEF : new SFString("hanim_r_ectocanthus_pt"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite r_ectocanthus_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("r_infraorbitale_pt"),
                                                                                                                          DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                          translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite r_infraorbitale_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("r_tragion_pt"),
                                                                                                                          DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                          translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite r_tragion_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("sellion_pt"),
                                                                                                                          DEF : new SFString("hanim_sellion_pt"),
                                                                                                                          translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite sellion_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("skull_vertex_pt"),
                                                                                                                          DEF : new SFString("hanim_skull_vertex_pt"),
                                                                                                                          translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimSite skull_vertex_pt")}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
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
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to l_eyelid_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to r_eyelid_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to l_eyeball_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to r_eyeball_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to l_eyebrow_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to r_eyebrow_joint vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0044,1.6209,0.0236])})),
                                                                                                                                  /*from skullbase to temporomandibular vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_gonion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("menton_pt"),
                                                                                                                              DEF : new SFString("hanim_menton_pt"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite menton_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_gonion_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("supramenton_pt"),
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite supramenton_pt")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
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
                                                                                                    new Transform({
                                                                                                      /*Empty Transform*/
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])})),
                                                                                                      /*from l_sternoclavicular to l_acromioclavicular vertices 2*/
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
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
                                                                                                        new Transform({
                                                                                                          /*Empty Transform*/
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])})),
                                                                                                          /*from l_acromioclavicular to l_shoulder vertices 2*/
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_bideltoid_pt"),
                                                                                                      DEF : new SFString("hanim_l_bideltoid_pt"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite l_bideltoid_pt")}),

                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("l_humeral_lateral_epicondyles_pt"),
                                                                                                      DEF : new SFString("hanim_l_humeral_lateral_epicondyles_pt"),
                                                                                                      translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite l_humeral_lateral_epicondyles_pt")}),

                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
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
                                                                                                            new Transform({
                                                                                                              /*Empty Transform*/
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])})),
                                                                                                              /*from l_shoulder to l_elbow vertices 2*/
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_medial_epicondyles_pt"),
                                                                                                          DEF : new SFString("hanim_l_humeral_medial_epicondyles_pt"),
                                                                                                          translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_humeral_medial_epicondyles_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_olecranon_pt"),
                                                                                                          DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                          translation : new SFVec3f([-0.1962,1.1375,-0.1123]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_olecranon_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_radial_styloid_pt"),
                                                                                                          DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                          translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_radial_styloid_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_radiale_pt"),
                                                                                                          DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                          translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_radiale_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
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
                                                                                                                new Transform({
                                                                                                                  /*Empty Transform*/
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])})),
                                                                                                                  /*from l_elbow to l_radiocarpal vertices 2*/
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_ulnar_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.2142,0.8529,-0.0648]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_ulnar_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_l_radiocarpal"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_carpal"),
                                                                                                              DEF : new SFString("hanim_l_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  scale : new SFVec3f([0.2,0.2,0.2]),
                                                                                                                  translation : new SFVec3f([0.2,0.85,-0.05]),
                                                                                                                  rotation : new SFRotation([0,0,1,-3.14]),
                                                                                                                  /*Transform left hand*/
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      rotation : new SFRotation([0,1,0,-1.57]),
                                                                                                                      /*Transform left hand*/
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583])})),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_1 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583])})),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_2 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583])})),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_3 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1984,0.8663,-0.0583])})),
                                                                                                                      /*from l_radiocarpal to l_midcarpal_4_5 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_1"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_trapezium"),
                                                                                                                  DEF : new SFString("hanim_l_trapezium"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1924,0.8472,-0.0534])})),
                                                                                                                          /*from l_midcarpal_1 to l_carpometacarpal_1 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_1"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])})),
                                                                                                                              /*from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])})),
                                                                                                                                  /*from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_carpal_distal_phalanx_1_tip"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_phalanx_1_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_carpal_distal_phalanx_1_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_2"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_trapezoid"),
                                                                                                                  DEF : new SFString("hanim_l_trapezoid"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1983,0.8024,-0.028])})),
                                                                                                                          /*from l_midcarpal_2 to l_carpometacarpal_2 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_phalanx_2_pt"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_2_pt"),
                                                                                                                      translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite l_metacarpal_phalanx_2_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])})),
                                                                                                                              /*from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])})),
                                                                                                                                  /*from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])})),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_2_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_carpal_distal_phalanx_2_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_dactylion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_3"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_capitate"),
                                                                                                                  DEF : new SFString("hanim_l_capitate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1987,0.8029,-0.053])})),
                                                                                                                          /*from l_midcarpal_3 to l_carpometacarpal_3 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_phalanx_3_pt"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_3_pt"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite l_metacarpal_phalanx_3_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_3"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_3"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])})),
                                                                                                                              /*from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_3"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])})),
                                                                                                                                  /*from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])})),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_3_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_carpal_distal_phalanx_3_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_l_midcarpal_4_5"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_hamate"),
                                                                                                                  DEF : new SFString("hanim_l_hamate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1956,0.8019,-0.0794])})),
                                                                                                                          /*from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1925,0.8066,-0.1036])})),
                                                                                                                          /*from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("l_metacarpal_phalanx_5_pt"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_phalanx_5_pt"),
                                                                                                                      translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite l_metacarpal_phalanx_5_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_4"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_4"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])})),
                                                                                                                              /*from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_4"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])})),
                                                                                                                                  /*from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])})),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_4_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_carpal_distal_phalanx_4_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpometacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_l_carpometacarpal_5"),
                                                                                                                  center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_metacarpal_5"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpal_5"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])})),
                                                                                                                              /*from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_metacarpophalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_l_metacarpophalangeal_5"),
                                                                                                                      center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_carpal_proximal_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_phalanx_5"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])})),
                                                                                                                                  /*from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_carpal_proximal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_l_carpal_proximal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_carpal_middle_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_middle_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])})),
                                                                                                                                      /*from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_5_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_carpal_distal_phalanx_5_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_distal_interphalangeal_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_distal_interphalangeal_5"),
                                                                                                                              center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.0694,1.46,-0.033]),
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
                                                                                                    new Transform({
                                                                                                      /*Empty Transform*/
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.0694,1.46,-0.033,-0.0836,1.4281,-0.0401])})),
                                                                                                      /*from r_sternoclavicular to r_acromioclavicular vertices 2*/
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0836,1.4281,-0.0401]),
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
                                                                                                        new Transform({
                                                                                                          /*Empty Transform*/
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0836,1.4281,-0.0401,-0.1907,1.4407,-0.0325])})),
                                                                                                          /*from r_acromioclavicular to r_shoulder vertices 2*/
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_bideltoid_pt"),
                                                                                                      DEF : new SFString("hanim_r_bideltoid_pt"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite r_bideltoid_pt")}),

                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("r_humeral_lateral_epicondyles_pt"),
                                                                                                      DEF : new SFString("hanim_r_humeral_lateral_epicondyles_pt"),
                                                                                                      translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimSite r_humeral_lateral_epicondyles_pt")}),

                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.1907,1.4407,-0.0325]),
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
                                                                                                            new Transform({
                                                                                                              /*Empty Transform*/
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.1907,1.4407,-0.0325,-0.1949,1.1388,-0.062])})),
                                                                                                              /*from r_shoulder to r_elbow vertices 2*/
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_medial_epicondyles_pt"),
                                                                                                          DEF : new SFString("hanim_r_humeral_medial_epicondyles_pt"),
                                                                                                          translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_humeral_medial_epicondyles_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_olecranon_pt"),
                                                                                                          DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                          translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_olecranon_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_radial_styloid_pt"),
                                                                                                          DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                          translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_radial_styloid_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_radiale_pt"),
                                                                                                          DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                          translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_radiale_pt")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.1949,1.1388,-0.062]),
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
                                                                                                                new Transform({
                                                                                                                  /*Empty Transform*/
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.1949,1.1388,-0.062,-0.1959,0.8694,-0.0521])})),
                                                                                                                  /*from r_elbow to r_radiocarpal vertices 2*/
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_ulnar_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_ulnar_styloid_pt")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_radiocarpal"),
                                                                                                          DEF : new SFString("hanim_r_radiocarpal"),
                                                                                                          center : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_carpal"),
                                                                                                              DEF : new SFString("hanim_r_carpal"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  scale : new SFVec3f([0.2,0.2,0.2]),
                                                                                                                  translation : new SFVec3f([-0.2,0.85,-0.05]),
                                                                                                                  rotation : new SFRotation([0,0,1,-3.14]),
                                                                                                                  /*Transform right hand*/
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      rotation : new SFRotation([0,1,0,1.57]),
                                                                                                                      /*Transform right hand*/
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521])})),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_1 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521])})),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_2 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521])})),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_3 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1959,0.8694,-0.0521,-0.1959,0.8694,-0.0521])})),
                                                                                                                      /*from r_radiocarpal to r_midcarpal_4_5 vertices 2*/
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_1"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_1"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_trapezium"),
                                                                                                                  DEF : new SFString("hanim_r_trapezium"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1959,0.8694,-0.0521]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1899,0.8502,-0.0473])})),
                                                                                                                          /*from r_midcarpal_1 to r_carpometacarpal_1 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_1"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_1"),
                                                                                                                  center : new SFVec3f([-0.1899,0.8502,-0.0473]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_1"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1899,0.8502,-0.0473]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1899,0.8502,-0.0473,-0.1874,0.8256,0.0306])})),
                                                                                                                              /*from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_1"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_1"),
                                                                                                                      center : new SFVec3f([-0.1874,0.8256,0.0306]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_1"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1874,0.8256,0.0306]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1874,0.8256,0.0306,-0.1864,0.819,0.0506])})),
                                                                                                                                  /*from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_carpal_distal_phalanx_1_tip"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_phalanx_1_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_carpal_distal_phalanx_1_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_interphalangeal_1"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_interphalangeal_1"),
                                                                                                                          center : new SFVec3f([-0.1864,0.819,0.0506]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_2"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_2"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_trapezoid"),
                                                                                                                  DEF : new SFString("hanim_r_trapezoid"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1864,0.819,0.0506]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1961,0.8055,-0.0218])})),
                                                                                                                          /*from r_midcarpal_2 to r_carpometacarpal_2 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_phalanx_2_pt"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_2_pt"),
                                                                                                                      translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite r_metacarpal_phalanx_2_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_2"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_2"),
                                                                                                                  center : new SFVec3f([-0.1961,0.8055,-0.0218]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_2"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1961,0.8055,-0.0218]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1961,0.8055,-0.0218,-0.1961,0.7846,-0.0218])})),
                                                                                                                              /*from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_2"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_2"),
                                                                                                                      center : new SFVec3f([-0.1961,0.7846,-0.0218]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1961,0.7846,-0.0218]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1961,0.7846,-0.0218,-0.1954,0.7393,-0.0185])})),
                                                                                                                                  /*from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_2"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_2"),
                                                                                                                          center : new SFVec3f([-0.1954,0.7393,-0.0185]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1954,0.7393,-0.0185]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1954,0.7393,-0.0185,-0.1945,0.7169,-0.0173])})),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_2_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_carpal_distal_phalanx_2_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_dactylion_pt")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_2"),
                                                                                                                              center : new SFVec3f([-0.1945,0.7169,-0.0173]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_3"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_3"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_capitate"),
                                                                                                                  DEF : new SFString("hanim_r_capitate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1945,0.7169,-0.0173]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1972,0.806,-0.0468])})),
                                                                                                                          /*from r_midcarpal_3 to r_carpometacarpal_3 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_phalanx_3_pt"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_3_pt"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite r_metacarpal_phalanx_3_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_3"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_3"),
                                                                                                                  center : new SFVec3f([-0.1972,0.806,-0.0468]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_3"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_3"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1972,0.806,-0.0468]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1972,0.806,-0.0468,-0.1972,0.7849,-0.0468])})),
                                                                                                                              /*from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_3"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_3"),
                                                                                                                      center : new SFVec3f([-0.1972,0.7849,-0.0468]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_3"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1972,0.7849,-0.0468]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1972,0.7849,-0.0468,-0.195,0.7304,-0.0441])})),
                                                                                                                                  /*from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_3"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_3"),
                                                                                                                          center : new SFVec3f([-0.195,0.7304,-0.0441]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.195,0.7304,-0.0441]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.195,0.7304,-0.0441,-0.1939,0.7042,-0.0432])})),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_3_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_carpal_distal_phalanx_3_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_3"),
                                                                                                                              center : new SFVec3f([-0.1939,0.7042,-0.0432]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_midcarpal_4_5"),
                                                                                                              DEF : new SFString("hanim_r_midcarpal_4_5"),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_hamate"),
                                                                                                                  DEF : new SFString("hanim_r_hamate"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1939,0.7042,-0.0432]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          /*Empty Transform*/
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1951,0.8049,-0.0732])})),
                                                                                                                          /*from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1926,0.8096,-0.0975])})),
                                                                                                                          /*from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 1*/
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("r_metacarpal_phalanx_5_pt"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_phalanx_5_pt"),
                                                                                                                      translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimSite r_metacarpal_phalanx_5_pt")}),

                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_4"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_4"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8049,-0.0732]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_4"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_4"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1951,0.8049,-0.0732]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1951,0.8049,-0.0732,-0.1951,0.7845,-0.0732])})),
                                                                                                                              /*from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_4"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_4"),
                                                                                                                      center : new SFVec3f([-0.1951,0.7845,-0.0732]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_4"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1951,0.7845,-0.0732]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1951,0.7845,-0.0732,-0.192,0.7318,-0.0716])})),
                                                                                                                                  /*from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_4"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_4"),
                                                                                                                          center : new SFVec3f([-0.192,0.7318,-0.0716]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.192,0.7318,-0.0716]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.192,0.7318,-0.0716,-0.1908,0.7077,-0.0706])})),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_4_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_carpal_distal_phalanx_4_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_4"),
                                                                                                                              center : new SFVec3f([-0.1908,0.7077,-0.0706]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpometacarpal_5"),
                                                                                                                  DEF : new SFString("hanim_r_carpometacarpal_5"),
                                                                                                                  center : new SFVec3f([-0.1926,0.8096,-0.0975]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_metacarpal_5"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpal_5"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1926,0.8096,-0.0975]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              /*Empty Transform*/
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1926,0.8096,-0.0975,-0.1926,0.7896,-0.0975])})),
                                                                                                                              /*from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2*/
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_metacarpophalangeal_5"),
                                                                                                                      DEF : new SFString("hanim_r_metacarpophalangeal_5"),
                                                                                                                      center : new SFVec3f([-0.1926,0.7896,-0.0975]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_carpal_proximal_phalanx_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_phalanx_5"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1926,0.7896,-0.0975]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  /*Empty Transform*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1926,0.7896,-0.0975,-0.1902,0.7483,-0.0963])})),
                                                                                                                                  /*from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2*/
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_carpal_proximal_interphalangeal_5"),
                                                                                                                          DEF : new SFString("hanim_r_carpal_proximal_interphalangeal_5"),
                                                                                                                          center : new SFVec3f([-0.1902,0.7483,-0.0963]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_carpal_middle_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_middle_phalanx_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1902,0.7483,-0.0963]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      /*Empty Transform*/
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("HAnimJointShape")})])})])}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1902,0.7483,-0.0963,-0.1908,0.754,-0.096])})),
                                                                                                                                      /*from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2*/
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_5_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_carpal_distal_phalanx_5_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_distal_interphalangeal_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_distal_interphalangeal_5"),
                                                                                                                              center : new SFVec3f([-0.1908,0.754,-0.096]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_talocalcaneonavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_cuneonavicular_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_calcaneocuboid")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_transversetarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsometatarsal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_tarsal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocrural")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_talocalcaneonavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_cuneonavicular_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_calcaneocuboid")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_transversetarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsometatarsal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_tarsal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vl1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt12")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt11")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt10")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt9")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt8")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vt1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc7")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc6")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_vc1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_temporomandibular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midcarpal_4_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_carpal_distal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_radiocarpal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_interphalangeal_1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midcarpal_4_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_4")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpometacarpal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metacarpophalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_proximal_interphalangeal_5")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_carpal_distal_interphalangeal_5")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_navicular")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuneiform_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calcaneus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_cuboid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metatarsal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_tarsal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_talus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_navicular")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_cuneiform_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_cuneiform_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_cuneiform_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calcaneus")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_cuboid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metatarsal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_tarsal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t12")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t11")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t10")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t9")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t8")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_skull")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_trapezium")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_trapezoid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_capitate")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hamate")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_metacarpal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_carpal_middle_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_trapezium")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_trapezoid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_capitate")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hamate")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_metacarpal_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_proximal_phalanx_5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_carpal_middle_phalanx_5")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_buttocks_standing_wall_contact_point_pt")})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_crotch_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_navel_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_waist_preferred_anterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_waist_preferred_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_lateral_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_medial_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_suprapatella_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_lateral_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_medial_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_suprapatella_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tibiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_calcaneus_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_phalanx_1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tarsal_distal_phalanx_5_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tibiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneus_posterior_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_phalanx_1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tarsal_distal_phalanx_5_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_spine_2_middle_back_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_substernale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_chest_midsagittal_plane_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_mesosternale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_chest_midsagittal_plane_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_rear_center_midsagittal_plane_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_spine_1_middle_back_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_cervicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_suprasternale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_distal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_posterior_folds_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_proximal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_distal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_posterior_folds_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_proximal_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_adams_apple_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_glabella_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ectocanthus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_nuchale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_opisthocranion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ectocanthus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_sellion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_skull_vertex_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_menton_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_supramenton_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_bideltoid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_lateral_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_medial_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_phalanx_3_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_carpal_distal_phalanx_5_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_bideltoid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_lateral_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_medial_epicondyles_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_1_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_phalanx_2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_2_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_phalanx_3_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_3_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_phalanx_5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_4_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_carpal_distal_phalanx_5_tip")}))})])}))});
console.log(X3D0.toXMLNode());
