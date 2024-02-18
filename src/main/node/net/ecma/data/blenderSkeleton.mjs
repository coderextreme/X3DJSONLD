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
var unit = require('./x3d.mjs');
var MFNode = require('./x3d.mjs');
var meta = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(3)})),
          unit : new SFNode(
            new unit({
              name : new SFString("METERS"),
              category : new SFString("length")})),
          meta : new MFNode([
            new meta({
              name : new SFString("filename"),
              content : new SFString("blenderSkeleton.x3d")}),

            new meta({
              name : new SFString("copyright")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3D.org")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Blender 4.0.1")}),

            new meta({
              name : new SFString("exporter"),
              content : new SFString("io_scene_x3dv")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Background({
              DEF : new SFString("WO_World"),
              groundColor : new MFColor([0.05087608844041824,0.05087608844041824,0.05087608844041824]),
              skyColor : new MFColor([0.05087608844041824,0.05087608844041824,0.05087608844041824])}),

            new Transform({
              child : new SFNode(
                new Shape({
                  DEF : new SFString("SiteShape"),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([0.05,0.05,0.05])})),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,1])}))}))}))}),

            new Transform({
              child : new SFNode(
                new Shape({
                  DEF : new SFString("JointShape"),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.06)})),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("JointAppearance"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.5,0]),
                          transparency : new SFFloat(0.5)}))}))}))}),

            new Transform({
              DEF : new SFString("Light_TRANSFORM"),
              rotation : new SFRotation([0.20594,0.33152,0.9207,1.92627]),
              translation : new SFVec3f([4.07625,1.00545,5.90386]),
              children : new MFNode([
                new PointLight({
                  DEF : new SFString("LA_Light"),
                  location : new SFVec3f([-8.940696716308594e-8,-3.5762786865234375e-7,4.6193599700927734e-7]),
                  radius : new SFFloat(40)})])}),

            new Transform({
              DEF : new SFString("Camera_TRANSFORM"),
              rotation : new SFRotation([0.77344,0.33383,0.53884,1.35072]),
              translation : new SFVec3f([7.35889,-6.92579,4.95831]),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("CA_Camera"),
                  fieldOfView : new SFFloat(0.6911112070083618),
                  orientation : new SFRotation([-3.627339850709177e-8,-0.4730778932571411,-0.8810206651687622,0]),
                  position : new SFVec3f([-3.927080456378462e-7,-2.123415470123291e-7,2.384185791015625e-7])})])}),

            new Transform({
              DEF : new SFString("Armature_TRANSFORM"),
              children : new MFNode([
                new HAnimHumanoid({
                  name : new SFString("humanoid"),
                  DEF : new SFString("hanim_humanoid"),
                  version : new SFString("2.0"),
                  joints : new MFNode([
                    new HAnimJoint({
                      name : new SFString("Armature"),
                      DEF : new SFString("hanim_Armature"),
                      ulimit : new MFFloat([0,0,0]),
                      llimit : new MFFloat([0,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("SEGMENT_FOR_Armature"),
                          DEF : new SFString("hanim_SEGMENT_FOR_Armature"),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("joint Armature segment SEGMENT_FOR_Armature")}),

                            new Transform({
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("JointShape")}))}),

                            new HAnimSite({
                              name : new SFString("SEGMENT_FOR_Armature_tip"),
                              DEF : new SFString("hanim_SEGMENT_FOR_Armature_tip"),
                              children : new MFNode([
                                new Transform({
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("SiteShape")}))})])})])}),

                        new HAnimJoint({
                          name : new SFString("sacrum"),
                          DEF : new SFString("hanim_sacrum"),
                          center : new SFVec3f([-0.0002,-0.1178,0.8174]),
                          ulimit : new MFFloat([0,0,0]),
                          llimit : new MFFloat([0,0,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("SEGMENT_FOR_sacrum"),
                              DEF : new SFString("hanim_SEGMENT_FOR_sacrum"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("joint sacrum segment SEGMENT_FOR_sacrum")}),

                                new Transform({
                                  translation : new SFVec3f([-0.0002,-0.1178,0.8174]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("JointShape")}))}),

                                new HAnimSite({
                                  name : new SFString("SEGMENT_FOR_sacrum_tip"),
                                  DEF : new SFString("hanim_SEGMENT_FOR_sacrum_tip"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-0.0002,-0.1178,0.8174]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("SiteShape")}))})])})])}),

                            new HAnimJoint({
                              name : new SFString("pelvis"),
                              DEF : new SFString("hanim_pelvis"),
                              center : new SFVec3f([-0.0002,-0.1178,0.6986]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("SEGMENT_FOR_pelvis"),
                                  DEF : new SFString("hanim_SEGMENT_FOR_pelvis"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("joint pelvis segment SEGMENT_FOR_pelvis")}),

                                    new Transform({
                                      translation : new SFVec3f([-0.0002,-0.1178,0.6986]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("JointShape")}))}),

                                    new HAnimSite({
                                      name : new SFString("SEGMENT_FOR_pelvis_tip"),
                                      DEF : new SFString("hanim_SEGMENT_FOR_pelvis_tip"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0002,-0.1178,0.6986]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("SiteShape")}))})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l_thigh"),
                                  DEF : new SFString("hanim_l_thigh"),
                                  center : new SFVec3f([0.0945,-0.1202,0.8181]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("SEGMENT_FOR_l_thigh"),
                                      DEF : new SFString("hanim_SEGMENT_FOR_l_thigh"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("joint l_thigh segment SEGMENT_FOR_l_thigh")}),

                                        new Transform({
                                          translation : new SFVec3f([0.0945,-0.1202,0.8181]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("JointShape")}))}),

                                        new HAnimSite({
                                          name : new SFString("SEGMENT_FOR_l_thigh_tip"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_l_thigh_tip"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([0.0945,-0.1202,0.8181]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("SiteShape")}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_calf"),
                                      DEF : new SFString("hanim_l_calf"),
                                      center : new SFVec3f([0.0924,-0.1213,0.4003]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("SEGMENT_FOR_l_calf"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_l_calf"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("joint l_calf segment SEGMENT_FOR_l_calf")}),

                                            new Transform({
                                              translation : new SFVec3f([0.0924,-0.1213,0.4003]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("JointShape")}))}),

                                            new HAnimSite({
                                              name : new SFString("SEGMENT_FOR_l_calf_tip"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_l_calf_tip"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([0.0924,-0.1213,0.4003]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("SiteShape")}))})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_talus"),
                                          DEF : new SFString("hanim_l_talus"),
                                          center : new SFVec3f([0.0886,-0.1123,0.0869]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("SEGMENT_FOR_l_talus"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_l_talus"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("joint l_talus segment SEGMENT_FOR_l_talus")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.0886,-0.1123,0.0869]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("JointShape")}))}),

                                                new HAnimSite({
                                                  name : new SFString("SEGMENT_FOR_l_talus_tip"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_talus_tip"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([0.0886,-0.1123,0.0869]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("SiteShape")}))})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_navicular"),
                                              DEF : new SFString("hanim_l_navicular"),
                                              center : new SFVec3f([0.0781,-0.097,0.0283]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("SEGMENT_FOR_l_navicular"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_navicular"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("joint l_navicular segment SEGMENT_FOR_l_navicular")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0781,-0.097,0.0283]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("JointShape")}))}),

                                                    new HAnimSite({
                                                      name : new SFString("SEGMENT_FOR_l_navicular_tip"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_navicular_tip"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.0781,-0.097,0.0283]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_cuneiform_1"),
                                                  DEF : new SFString("hanim_l_cuneiform_1"),
                                                  center : new SFVec3f([0.0672,-0.0835,0.0235]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_l_cuneiform_1"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_1"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint l_cuneiform_1 segment SEGMENT_FOR_l_cuneiform_1")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0672,-0.0835,0.0235]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_l_cuneiform_1_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_1_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.0672,-0.0835,0.0235]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_metatarsal_1"),
                                                      DEF : new SFString("hanim_l_metatarsal_1"),
                                                      center : new SFVec3f([0.0644,-0.0577,0.0147]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_l_metatarsal_1"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_1"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint l_metatarsal_1 segment SEGMENT_FOR_l_metatarsal_1")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.0644,-0.0577,0.0147]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_l_metatarsal_1_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_1_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.0644,-0.0577,0.0147]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_proximal_phalanx_1"),
                                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_1"),
                                                          center : new SFVec3f([0.0619,-0.0083,0.0059]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint l_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_1")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0619,-0.0083,0.0059]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_1_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0619,-0.0083,0.0059]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("l_tarsal_distal_phalanx_1"),
                                                              DEF : new SFString("hanim_l_tarsal_distal_phalanx_1"),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint l_tarsal_distal_phalanx_1 segment SEGMENT_FOR_l_tarsal_distal_phalanx_1")}),

                                                                    new Transform({
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_1_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_cuneiform_2"),
                                                  DEF : new SFString("hanim_l_cuneiform_2"),
                                                  center : new SFVec3f([0.0812,-0.0805,0.025]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_l_cuneiform_2"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_2"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint l_cuneiform_2 segment SEGMENT_FOR_l_cuneiform_2")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0812,-0.0805,0.025]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_l_cuneiform_2_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_2_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.0812,-0.0805,0.025]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_metatarsal_2"),
                                                      DEF : new SFString("hanim_l_metatarsal_2"),
                                                      center : new SFVec3f([0.08,-0.0608,0.0175]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_l_metatarsal_2"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_2"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint l_metatarsal_2 segment SEGMENT_FOR_l_metatarsal_2")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.08,-0.0608,0.0175]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_l_metatarsal_2_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_2_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.08,-0.0608,0.0175]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_proximal_phalanx_2"),
                                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_2"),
                                                          center : new SFVec3f([0.0824,-0.004,0.0064]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint l_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_2")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0824,-0.004,0.0064]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_2_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0824,-0.004,0.0064]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("l_tarsal_middle_phalanx_2"),
                                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_2"),
                                                              center : new SFVec3f([0.0841,0.0121,0.0041]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint l_tarsal_middle_phalanx_2 segment SEGMENT_FOR_l_tarsal_middle_phalanx_2")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0841,0.0121,0.0041]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_2_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0841,0.0121,0.0041]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("l_tarsal_distal_phalanx_2"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_2"),
                                                                  center : new SFVec3f([0.0841,0.0216,0.0013]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint l_tarsal_distal_phalanx_2 segment SEGMENT_FOR_l_tarsal_distal_phalanx_2")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0841,0.0216,0.0013]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_2_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.0841,0.0216,0.0013]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_cuneiform_3"),
                                                  DEF : new SFString("hanim_l_cuneiform_3"),
                                                  center : new SFVec3f([0.0928,-0.0821,0.0248]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_l_cuneiform_3"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_3"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint l_cuneiform_3 segment SEGMENT_FOR_l_cuneiform_3")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0928,-0.0821,0.0248]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_l_cuneiform_3_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_cuneiform_3_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.0928,-0.0821,0.0248]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_metatarsal_3"),
                                                      DEF : new SFString("hanim_l_metatarsal_3"),
                                                      center : new SFVec3f([0.0944,-0.0625,0.0175]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_l_metatarsal_3"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_3"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint l_metatarsal_3 segment SEGMENT_FOR_l_metatarsal_3")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.0944,-0.0625,0.0175]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_l_metatarsal_3_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_3_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.0944,-0.0625,0.0175]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_proximal_phalanx_3"),
                                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_3"),
                                                          center : new SFVec3f([0.0963,-0.0065,0.0065]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint l_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_3")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0963,-0.0065,0.0065]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_3_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0963,-0.0065,0.0065]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("l_tarsal_middle_phalanx_3"),
                                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_3"),
                                                              center : new SFVec3f([0.0987,0.0086,0.0034]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint l_tarsal_middle_phalanx_3 segment SEGMENT_FOR_l_tarsal_middle_phalanx_3")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0987,0.0086,0.0034]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_3_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0987,0.0086,0.0034]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("l_tarsal_distal_phalanx_3"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_3"),
                                                                  center : new SFVec3f([0.1002,0.0178,0.0013]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint l_tarsal_distal_phalanx_3 segment SEGMENT_FOR_l_tarsal_distal_phalanx_3")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.1002,0.0178,0.0013]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_3_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.1002,0.0178,0.0013]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_calcaneus"),
                                              DEF : new SFString("hanim_l_calcaneus"),
                                              center : new SFVec3f([0.0889,-0.1278,0.0494]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("SEGMENT_FOR_l_calcaneus"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_calcaneus"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("joint l_calcaneus segment SEGMENT_FOR_l_calcaneus")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0889,-0.1278,0.0494]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("JointShape")}))}),

                                                    new HAnimSite({
                                                      name : new SFString("SEGMENT_FOR_l_calcaneus_tip"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_calcaneus_tip"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([0.0889,-0.1278,0.0494]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("l_cuboid"),
                                                  DEF : new SFString("hanim_l_cuboid"),
                                                  center : new SFVec3f([0.1105,-0.0998,0.0267]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_l_cuboid"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_cuboid"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint l_cuboid segment SEGMENT_FOR_l_cuboid")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.1105,-0.0998,0.0267]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_l_cuboid_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_cuboid_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([0.1105,-0.0998,0.0267]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_metatarsal_4"),
                                                      DEF : new SFString("hanim_l_metatarsal_4"),
                                                      center : new SFVec3f([0.1063,-0.0634,0.016]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_l_metatarsal_4"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_4"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint l_metatarsal_4 segment SEGMENT_FOR_l_metatarsal_4")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.1063,-0.0634,0.016]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_l_metatarsal_4_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_4_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.1063,-0.0634,0.016]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_proximal_phalanx_4"),
                                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_4"),
                                                          center : new SFVec3f([0.1097,-0.0107,0.0058]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint l_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_4")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.1097,-0.0107,0.0058]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_4_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.1097,-0.0107,0.0058]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("l_tarsal_middle_phalanx_4"),
                                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_4"),
                                                              center : new SFVec3f([0.114,0.0044,0.0037]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint l_tarsal_middle_phalanx_4 segment SEGMENT_FOR_l_tarsal_middle_phalanx_4")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.114,0.0044,0.0037]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_4_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.114,0.0044,0.0037]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("l_tarsal_distal_phalanx_4"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_4"),
                                                                  center : new SFVec3f([0.1155,0.0118,0.0008]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint l_tarsal_distal_phalanx_4 segment SEGMENT_FOR_l_tarsal_distal_phalanx_4")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.1155,0.0118,0.0008]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_4_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.1155,0.0118,0.0008]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("l_metatarsal_5"),
                                                      DEF : new SFString("hanim_l_metatarsal_5"),
                                                      center : new SFVec3f([0.1206,-0.0671,0.0124]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_l_metatarsal_5"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_5"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint l_metatarsal_5 segment SEGMENT_FOR_l_metatarsal_5")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.1206,-0.0671,0.0124]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_l_metatarsal_5_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metatarsal_5_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([0.1206,-0.0671,0.0124]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("l_tarsal_proximal_phalanx_5"),
                                                          DEF : new SFString("hanim_l_tarsal_proximal_phalanx_5"),
                                                          center : new SFVec3f([0.1239,-0.0153,0.0051]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint l_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_l_tarsal_proximal_phalanx_5")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.1239,-0.0153,0.0051]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_proximal_phalanx_5_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([0.1239,-0.0153,0.0051]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("l_tarsal_middle_phalanx_5"),
                                                              DEF : new SFString("hanim_l_tarsal_middle_phalanx_5"),
                                                              center : new SFVec3f([0.1262,-0.0077,0.0023]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint l_tarsal_middle_phalanx_5 segment SEGMENT_FOR_l_tarsal_middle_phalanx_5")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.1262,-0.0077,0.0023]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_middle_phalanx_5_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([0.1262,-0.0077,0.0023]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("l_tarsal_distal_phalanx_5"),
                                                                  DEF : new SFString("hanim_l_tarsal_distal_phalanx_5"),
                                                                  center : new SFVec3f([0.1271,0,0]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint l_tarsal_distal_phalanx_5 segment SEGMENT_FOR_l_tarsal_distal_phalanx_5")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.1271,0,0]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_tarsal_distal_phalanx_5_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([0.1271,0,0]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])})])})])})])}),

                                new HAnimJoint({
                                  name : new SFString("r_thigh"),
                                  DEF : new SFString("hanim_r_thigh"),
                                  center : new SFVec3f([-0.0948,-0.1202,0.8181]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("SEGMENT_FOR_r_thigh"),
                                      DEF : new SFString("hanim_SEGMENT_FOR_r_thigh"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("joint r_thigh segment SEGMENT_FOR_r_thigh")}),

                                        new Transform({
                                          translation : new SFVec3f([-0.0948,-0.1202,0.8181]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("JointShape")}))}),

                                        new HAnimSite({
                                          name : new SFString("SEGMENT_FOR_r_thigh_tip"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_r_thigh_tip"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0948,-0.1202,0.8181]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("SiteShape")}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_calf"),
                                      DEF : new SFString("hanim_r_calf"),
                                      center : new SFVec3f([-0.0928,-0.1213,0.4003]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("SEGMENT_FOR_r_calf"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_r_calf"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("joint r_calf segment SEGMENT_FOR_r_calf")}),

                                            new Transform({
                                              translation : new SFVec3f([-0.0928,-0.1213,0.4003]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("JointShape")}))}),

                                            new HAnimSite({
                                              name : new SFString("SEGMENT_FOR_r_calf_tip"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_r_calf_tip"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0928,-0.1213,0.4003]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("SiteShape")}))})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_talus"),
                                          DEF : new SFString("hanim_r_talus"),
                                          center : new SFVec3f([-0.0886,-0.1123,0.0869]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("SEGMENT_FOR_r_talus"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_r_talus"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("joint r_talus segment SEGMENT_FOR_r_talus")}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.0886,-0.1123,0.0869]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("JointShape")}))}),

                                                new HAnimSite({
                                                  name : new SFString("SEGMENT_FOR_r_talus_tip"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_talus_tip"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0886,-0.1123,0.0869]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("SiteShape")}))})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_navicular"),
                                              DEF : new SFString("hanim_r_navicular"),
                                              center : new SFVec3f([-0.0781,-0.097,0.0283]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("SEGMENT_FOR_r_navicular"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_navicular"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("joint r_navicular segment SEGMENT_FOR_r_navicular")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.0781,-0.097,0.0283]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("JointShape")}))}),

                                                    new HAnimSite({
                                                      name : new SFString("SEGMENT_FOR_r_navicular_tip"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_navicular_tip"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0781,-0.097,0.0283]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_cuneiform_1"),
                                                  DEF : new SFString("hanim_r_cuneiform_1"),
                                                  center : new SFVec3f([-0.0672,-0.0835,0.0235]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_r_cuneiform_1"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_1"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint r_cuneiform_1 segment SEGMENT_FOR_r_cuneiform_1")}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.0672,-0.0835,0.0235]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_r_cuneiform_1_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_1_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0672,-0.0835,0.0235]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_metatarsal_1"),
                                                      DEF : new SFString("hanim_r_metatarsal_1"),
                                                      center : new SFVec3f([-0.0644,-0.0577,0.0147]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_r_metatarsal_1"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_1"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint r_metatarsal_1 segment SEGMENT_FOR_r_metatarsal_1")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.0644,-0.0577,0.0147]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_r_metatarsal_1_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_1_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0644,-0.0577,0.0147]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_proximal_phalanx_1"),
                                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_1"),
                                                          center : new SFVec3f([-0.0619,-0.0083,0.0059]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint r_tarsal_proximal_phalanx_1 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_1")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0619,-0.0083,0.0059]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_1_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0619,-0.0083,0.0059]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("r_tarsal_distal_phalanx_1"),
                                                              DEF : new SFString("hanim_r_tarsal_distal_phalanx_1"),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint r_tarsal_distal_phalanx_1 segment SEGMENT_FOR_r_tarsal_distal_phalanx_1")}),

                                                                    new Transform({
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_1_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_cuneiform_2"),
                                                  DEF : new SFString("hanim_r_cuneiform_2"),
                                                  center : new SFVec3f([-0.0812,-0.0805,0.025]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_r_cuneiform_2"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_2"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint r_cuneiform_2 segment SEGMENT_FOR_r_cuneiform_2")}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.0812,-0.0805,0.025]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_r_cuneiform_2_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_2_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0812,-0.0805,0.025]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_metatarsal_2"),
                                                      DEF : new SFString("hanim_r_metatarsal_2"),
                                                      center : new SFVec3f([-0.08,-0.0608,0.0175]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_r_metatarsal_2"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_2"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint r_metatarsal_2 segment SEGMENT_FOR_r_metatarsal_2")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.08,-0.0608,0.0175]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_r_metatarsal_2_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_2_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.08,-0.0608,0.0175]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_proximal_phalanx_2"),
                                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_2"),
                                                          center : new SFVec3f([-0.0823,-0.004,0.0064]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint r_tarsal_proximal_phalanx_2 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_2")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0823,-0.004,0.0064]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_2_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0823,-0.004,0.0064]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("r_tarsal_middle_phalanx_2"),
                                                              DEF : new SFString("hanim_r_tarsal_middle_phalanx_2"),
                                                              center : new SFVec3f([-0.0841,0.0121,0.0041]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint r_tarsal_middle_phalanx_2 segment SEGMENT_FOR_r_tarsal_middle_phalanx_2")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0841,0.0121,0.0041]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_2_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.0841,0.0121,0.0041]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("r_tarsal_distal_phalanx_2"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_2"),
                                                                  center : new SFVec3f([-0.0841,0.0216,0.0013]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint r_tarsal_distal_phalanx_2 segment SEGMENT_FOR_r_tarsal_distal_phalanx_2")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.0841,0.0216,0.0013]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_2_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.0841,0.0216,0.0013]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_cuneiform_3"),
                                                  DEF : new SFString("hanim_r_cuneiform_3"),
                                                  center : new SFVec3f([-0.0928,-0.0821,0.0248]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_r_cuneiform_3"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_3"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint r_cuneiform_3 segment SEGMENT_FOR_r_cuneiform_3")}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.0928,-0.0821,0.0248]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_r_cuneiform_3_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_cuneiform_3_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0928,-0.0821,0.0248]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_metatarsal_3"),
                                                      DEF : new SFString("hanim_r_metatarsal_3"),
                                                      center : new SFVec3f([-0.0944,-0.0625,0.0175]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_r_metatarsal_3"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_3"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint r_metatarsal_3 segment SEGMENT_FOR_r_metatarsal_3")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.0944,-0.0625,0.0175]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_r_metatarsal_3_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_3_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0944,-0.0625,0.0175]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_proximal_phalanx_3"),
                                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_3"),
                                                          center : new SFVec3f([-0.0963,-0.0065,0.0065]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint r_tarsal_proximal_phalanx_3 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_3")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0963,-0.0065,0.0065]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_3_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0963,-0.0065,0.0065]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("r_tarsal_middle_phalanx_3"),
                                                              DEF : new SFString("hanim_r_tarsal_middle_phalanx_3"),
                                                              center : new SFVec3f([-0.0987,0.0086,0.0034]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint r_tarsal_middle_phalanx_3 segment SEGMENT_FOR_r_tarsal_middle_phalanx_3")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0987,0.0086,0.0034]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_3_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.0987,0.0086,0.0034]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("r_tarsal_distal_phalanx_3"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_3"),
                                                                  center : new SFVec3f([-0.1002,0.0178,0.0013]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint r_tarsal_distal_phalanx_3 segment SEGMENT_FOR_r_tarsal_distal_phalanx_3")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.1002,0.0178,0.0013]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_3_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.1002,0.0178,0.0013]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_calcaneus"),
                                              DEF : new SFString("hanim_r_calcaneus"),
                                              center : new SFVec3f([-0.0889,-0.1278,0.0494]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("SEGMENT_FOR_r_calcaneus"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_calcaneus"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("joint r_calcaneus segment SEGMENT_FOR_r_calcaneus")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.0889,-0.1278,0.0494]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("JointShape")}))}),

                                                    new HAnimSite({
                                                      name : new SFString("SEGMENT_FOR_r_calcaneus_tip"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_calcaneus_tip"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0889,-0.1278,0.0494]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("r_cuboid"),
                                                  DEF : new SFString("hanim_r_cuboid"),
                                                  center : new SFVec3f([-0.1105,-0.0998,0.0267]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_r_cuboid"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_cuboid"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint r_cuboid segment SEGMENT_FOR_r_cuboid")}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.1105,-0.0998,0.0267]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_r_cuboid_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_cuboid_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.1105,-0.0998,0.0267]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_metatarsal_4"),
                                                      DEF : new SFString("hanim_r_metatarsal_4"),
                                                      center : new SFVec3f([-0.1063,-0.0634,0.016]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_r_metatarsal_4"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_4"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint r_metatarsal_4 segment SEGMENT_FOR_r_metatarsal_4")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.1063,-0.0634,0.016]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_r_metatarsal_4_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_4_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.1063,-0.0634,0.016]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_proximal_phalanx_4"),
                                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_4"),
                                                          center : new SFVec3f([-0.1097,-0.0107,0.0058]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint r_tarsal_proximal_phalanx_4 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_4")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.1097,-0.0107,0.0058]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_4_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.1097,-0.0107,0.0058]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("r_tarsal_middle_phalanx_4"),
                                                              DEF : new SFString("hanim_r_tarsal_middle_phalanx_4"),
                                                              center : new SFVec3f([-0.114,0.0044,0.0037]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint r_tarsal_middle_phalanx_4 segment SEGMENT_FOR_r_tarsal_middle_phalanx_4")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.114,0.0044,0.0037]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_4_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.114,0.0044,0.0037]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("r_tarsal_distal_phalanx_4"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_4"),
                                                                  center : new SFVec3f([-0.1155,0.0118,0.0008]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint r_tarsal_distal_phalanx_4 segment SEGMENT_FOR_r_tarsal_distal_phalanx_4")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.1155,0.0118,0.0008]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_4_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.1155,0.0118,0.0008]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("r_metatarsal_5"),
                                                      DEF : new SFString("hanim_r_metatarsal_5"),
                                                      center : new SFVec3f([-0.1206,-0.0671,0.0124]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_r_metatarsal_5"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_5"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint r_metatarsal_5 segment SEGMENT_FOR_r_metatarsal_5")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.1206,-0.0671,0.0124]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_r_metatarsal_5_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metatarsal_5_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.1206,-0.0671,0.0124]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("r_tarsal_proximal_phalanx_5"),
                                                          DEF : new SFString("hanim_r_tarsal_proximal_phalanx_5"),
                                                          center : new SFVec3f([-0.1239,-0.0153,0.0051]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint r_tarsal_proximal_phalanx_5 segment SEGMENT_FOR_r_tarsal_proximal_phalanx_5")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.1239,-0.0153,0.0051]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_proximal_phalanx_5_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.1239,-0.0153,0.0051]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("r_tarsal_middle_phalanx_5"),
                                                              DEF : new SFString("hanim_r_tarsal_middle_phalanx_5"),
                                                              center : new SFVec3f([-0.1262,-0.0077,0.0023]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint r_tarsal_middle_phalanx_5 segment SEGMENT_FOR_r_tarsal_middle_phalanx_5")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.1262,-0.0077,0.0023]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_middle_phalanx_5_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.1262,-0.0077,0.0023]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("r_tarsal_distal_phalanx_5"),
                                                                  DEF : new SFString("hanim_r_tarsal_distal_phalanx_5"),
                                                                  center : new SFVec3f([-0.1271,0,0]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint r_tarsal_distal_phalanx_5 segment SEGMENT_FOR_r_tarsal_distal_phalanx_5")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.1271,0,0]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_tarsal_distal_phalanx_5_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.1271,0,0]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])})])})])})])})])}),

                            new HAnimJoint({
                              name : new SFString("l5"),
                              DEF : new SFString("hanim_l5"),
                              center : new SFVec3f([-0.0002,-0.1156,0.9169]),
                              ulimit : new MFFloat([0,0,0]),
                              llimit : new MFFloat([0,0,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("SEGMENT_FOR_l5"),
                                  DEF : new SFString("hanim_SEGMENT_FOR_l5"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("joint l5 segment SEGMENT_FOR_l5")}),

                                    new Transform({
                                      translation : new SFVec3f([-0.0002,-0.1156,0.9169]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("JointShape")}))}),

                                    new HAnimSite({
                                      name : new SFString("SEGMENT_FOR_l5_tip"),
                                      DEF : new SFString("hanim_SEGMENT_FOR_l5_tip"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-0.0002,-0.1156,0.9169]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("SiteShape")}))})])})])}),

                                new HAnimJoint({
                                  name : new SFString("l4"),
                                  DEF : new SFString("hanim_l4"),
                                  center : new SFVec3f([-0.0002,-0.1156,0.9412]),
                                  ulimit : new MFFloat([0,0,0]),
                                  llimit : new MFFloat([0,0,0]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("SEGMENT_FOR_l4"),
                                      DEF : new SFString("hanim_SEGMENT_FOR_l4"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("joint l4 segment SEGMENT_FOR_l4")}),

                                        new Transform({
                                          translation : new SFVec3f([-0.0002,-0.1156,0.9412]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("JointShape")}))}),

                                        new HAnimSite({
                                          name : new SFString("SEGMENT_FOR_l4_tip"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_l4_tip"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-0.0002,-0.1156,0.9412]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("SiteShape")}))})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l3"),
                                      DEF : new SFString("hanim_l3"),
                                      center : new SFVec3f([-0.0002,-0.1156,0.9574]),
                                      ulimit : new MFFloat([0,0,0]),
                                      llimit : new MFFloat([0,0,0]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("SEGMENT_FOR_l3"),
                                          DEF : new SFString("hanim_SEGMENT_FOR_l3"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("joint l3 segment SEGMENT_FOR_l3")}),

                                            new Transform({
                                              translation : new SFVec3f([-0.0002,-0.1156,0.9574]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("JointShape")}))}),

                                            new HAnimSite({
                                              name : new SFString("SEGMENT_FOR_l3_tip"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_l3_tip"),
                                              children : new MFNode([
                                                new Transform({
                                                  translation : new SFVec3f([-0.0002,-0.1156,0.9574]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("SiteShape")}))})])})])}),

                                        new HAnimJoint({
                                          name : new SFString("l2"),
                                          DEF : new SFString("hanim_l2"),
                                          center : new SFVec3f([-0.0002,-0.1156,0.9738]),
                                          ulimit : new MFFloat([0,0,0]),
                                          llimit : new MFFloat([0,0,0]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("SEGMENT_FOR_l2"),
                                              DEF : new SFString("hanim_SEGMENT_FOR_l2"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("joint l2 segment SEGMENT_FOR_l2")}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.0002,-0.1156,0.9738]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("JointShape")}))}),

                                                new HAnimSite({
                                                  name : new SFString("SEGMENT_FOR_l2_tip"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_l2_tip"),
                                                  children : new MFNode([
                                                    new Transform({
                                                      translation : new SFVec3f([-0.0002,-0.1156,0.9738]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("SiteShape")}))})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l1"),
                                              DEF : new SFString("hanim_l1"),
                                              center : new SFVec3f([-0.0002,-0.1156,0.9911]),
                                              ulimit : new MFFloat([0,0,0]),
                                              llimit : new MFFloat([0,0,0]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("SEGMENT_FOR_l1"),
                                                  DEF : new SFString("hanim_SEGMENT_FOR_l1"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("joint l1 segment SEGMENT_FOR_l1")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.0002,-0.1156,0.9911]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("JointShape")}))}),

                                                    new HAnimSite({
                                                      name : new SFString("SEGMENT_FOR_l1_tip"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_l1_tip"),
                                                      children : new MFNode([
                                                        new Transform({
                                                          translation : new SFVec3f([-0.0002,-0.1156,0.9911]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                new HAnimJoint({
                                                  name : new SFString("t12"),
                                                  DEF : new SFString("hanim_t12"),
                                                  center : new SFVec3f([-0.0002,-0.1156,1.0145]),
                                                  ulimit : new MFFloat([0,0,0]),
                                                  llimit : new MFFloat([0,0,0]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("SEGMENT_FOR_t12"),
                                                      DEF : new SFString("hanim_SEGMENT_FOR_t12"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("joint t12 segment SEGMENT_FOR_t12")}),

                                                        new Transform({
                                                          translation : new SFVec3f([-0.0002,-0.1156,1.0145]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("JointShape")}))}),

                                                        new HAnimSite({
                                                          name : new SFString("SEGMENT_FOR_t12_tip"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_t12_tip"),
                                                          children : new MFNode([
                                                            new Transform({
                                                              translation : new SFVec3f([-0.0002,-0.1156,1.0145]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("t11"),
                                                      DEF : new SFString("hanim_t11"),
                                                      center : new SFVec3f([-0.0002,-0.1156,1.0381]),
                                                      ulimit : new MFFloat([0,0,0]),
                                                      llimit : new MFFloat([0,0,0]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("SEGMENT_FOR_t11"),
                                                          DEF : new SFString("hanim_SEGMENT_FOR_t11"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("joint t11 segment SEGMENT_FOR_t11")}),

                                                            new Transform({
                                                              translation : new SFVec3f([-0.0002,-0.1156,1.0381]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("JointShape")}))}),

                                                            new HAnimSite({
                                                              name : new SFString("SEGMENT_FOR_t11_tip"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_t11_tip"),
                                                              children : new MFNode([
                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0002,-0.1156,1.0381]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("t10"),
                                                          DEF : new SFString("hanim_t10"),
                                                          center : new SFVec3f([-0.0002,-0.1157,1.0552]),
                                                          ulimit : new MFFloat([0,0,0]),
                                                          llimit : new MFFloat([0,0,0]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("SEGMENT_FOR_t10"),
                                                              DEF : new SFString("hanim_SEGMENT_FOR_t10"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("joint t10 segment SEGMENT_FOR_t10")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([-0.0002,-0.1157,1.0552]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("JointShape")}))}),

                                                                new HAnimSite({
                                                                  name : new SFString("SEGMENT_FOR_t10_tip"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t10_tip"),
                                                                  children : new MFNode([
                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0002,-0.1157,1.0552]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("t9"),
                                                              DEF : new SFString("hanim_t9"),
                                                              center : new SFVec3f([-0.0002,-0.1156,1.0699]),
                                                              ulimit : new MFFloat([0,0,0]),
                                                              llimit : new MFFloat([0,0,0]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("SEGMENT_FOR_t9"),
                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t9"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("joint t9 segment SEGMENT_FOR_t9")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([-0.0002,-0.1156,1.0699]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("JointShape")}))}),

                                                                    new HAnimSite({
                                                                      name : new SFString("SEGMENT_FOR_t9_tip"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_t9_tip"),
                                                                      children : new MFNode([
                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.0002,-0.1156,1.0699]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("t8"),
                                                                  DEF : new SFString("hanim_t8"),
                                                                  center : new SFVec3f([-0.0002,-0.1156,1.0845]),
                                                                  ulimit : new MFFloat([0,0,0]),
                                                                  llimit : new MFFloat([0,0,0]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("SEGMENT_FOR_t8"),
                                                                      DEF : new SFString("hanim_SEGMENT_FOR_t8"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("joint t8 segment SEGMENT_FOR_t8")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([-0.0002,-0.1156,1.0845]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("JointShape")}))}),

                                                                        new HAnimSite({
                                                                          name : new SFString("SEGMENT_FOR_t8_tip"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_t8_tip"),
                                                                          children : new MFNode([
                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.0002,-0.1156,1.0845]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("t7"),
                                                                      DEF : new SFString("hanim_t7"),
                                                                      center : new SFVec3f([-0.0002,-0.1156,1.1002]),
                                                                      ulimit : new MFFloat([0,0,0]),
                                                                      llimit : new MFFloat([0,0,0]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("SEGMENT_FOR_t7"),
                                                                          DEF : new SFString("hanim_SEGMENT_FOR_t7"),
                                                                          children : new MFNode([
                                                                            new TouchSensor({
                                                                              description : new SFString("joint t7 segment SEGMENT_FOR_t7")}),

                                                                            new Transform({
                                                                              translation : new SFVec3f([-0.0002,-0.1156,1.1002]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("JointShape")}))}),

                                                                            new HAnimSite({
                                                                              name : new SFString("SEGMENT_FOR_t7_tip"),
                                                                              DEF : new SFString("hanim_SEGMENT_FOR_t7_tip"),
                                                                              children : new MFNode([
                                                                                new Transform({
                                                                                  translation : new SFVec3f([-0.0002,-0.1156,1.1002]),
                                                                                  child : new SFNode(
                                                                                    new Shape({
                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("t6"),
                                                                          DEF : new SFString("hanim_t6"),
                                                                          center : new SFVec3f([-0.0002,-0.1156,1.1131]),
                                                                          ulimit : new MFFloat([0,0,0]),
                                                                          llimit : new MFFloat([0,0,0]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("SEGMENT_FOR_t6"),
                                                                              DEF : new SFString("hanim_SEGMENT_FOR_t6"),
                                                                              children : new MFNode([
                                                                                new TouchSensor({
                                                                                  description : new SFString("joint t6 segment SEGMENT_FOR_t6")}),

                                                                                new Transform({
                                                                                  translation : new SFVec3f([-0.0002,-0.1156,1.1131]),
                                                                                  child : new SFNode(
                                                                                    new Shape({
                                                                                      USE : new SFString("JointShape")}))}),

                                                                                new HAnimSite({
                                                                                  name : new SFString("SEGMENT_FOR_t6_tip"),
                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t6_tip"),
                                                                                  children : new MFNode([
                                                                                    new Transform({
                                                                                      translation : new SFVec3f([-0.0002,-0.1156,1.1131]),
                                                                                      child : new SFNode(
                                                                                        new Shape({
                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("t5"),
                                                                              DEF : new SFString("hanim_t5"),
                                                                              center : new SFVec3f([-0.0002,-0.1156,1.1286]),
                                                                              ulimit : new MFFloat([0,0,0]),
                                                                              llimit : new MFFloat([0,0,0]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("SEGMENT_FOR_t5"),
                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t5"),
                                                                                  children : new MFNode([
                                                                                    new TouchSensor({
                                                                                      description : new SFString("joint t5 segment SEGMENT_FOR_t5")}),

                                                                                    new Transform({
                                                                                      translation : new SFVec3f([-0.0002,-0.1156,1.1286]),
                                                                                      child : new SFNode(
                                                                                        new Shape({
                                                                                          USE : new SFString("JointShape")}))}),

                                                                                    new HAnimSite({
                                                                                      name : new SFString("SEGMENT_FOR_t5_tip"),
                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_t5_tip"),
                                                                                      children : new MFNode([
                                                                                        new Transform({
                                                                                          translation : new SFVec3f([-0.0002,-0.1156,1.1286]),
                                                                                          child : new SFNode(
                                                                                            new Shape({
                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("t4"),
                                                                                  DEF : new SFString("hanim_t4"),
                                                                                  center : new SFVec3f([-0.0002,-0.1156,1.1439]),
                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("SEGMENT_FOR_t4"),
                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_t4"),
                                                                                      children : new MFNode([
                                                                                        new TouchSensor({
                                                                                          description : new SFString("joint t4 segment SEGMENT_FOR_t4")}),

                                                                                        new Transform({
                                                                                          translation : new SFVec3f([-0.0002,-0.1156,1.1439]),
                                                                                          child : new SFNode(
                                                                                            new Shape({
                                                                                              USE : new SFString("JointShape")}))}),

                                                                                        new HAnimSite({
                                                                                          name : new SFString("SEGMENT_FOR_t4_tip"),
                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_t4_tip"),
                                                                                          children : new MFNode([
                                                                                            new Transform({
                                                                                              translation : new SFVec3f([-0.0002,-0.1156,1.1439]),
                                                                                              child : new SFNode(
                                                                                                new Shape({
                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("t3"),
                                                                                      DEF : new SFString("hanim_t3"),
                                                                                      center : new SFVec3f([-0.0002,-0.1156,1.1623]),
                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("SEGMENT_FOR_t3"),
                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_t3"),
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("joint t3 segment SEGMENT_FOR_t3")}),

                                                                                            new Transform({
                                                                                              translation : new SFVec3f([-0.0002,-0.1156,1.1623]),
                                                                                              child : new SFNode(
                                                                                                new Shape({
                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("SEGMENT_FOR_t3_tip"),
                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_t3_tip"),
                                                                                              children : new MFNode([
                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.0002,-0.1156,1.1623]),
                                                                                                  child : new SFNode(
                                                                                                    new Shape({
                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("t2"),
                                                                                          DEF : new SFString("hanim_t2"),
                                                                                          center : new SFVec3f([-0.0002,-0.1157,1.1871]),
                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("SEGMENT_FOR_t2"),
                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_t2"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("joint t2 segment SEGMENT_FOR_t2")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.0002,-0.1157,1.1871]),
                                                                                                  child : new SFNode(
                                                                                                    new Shape({
                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("SEGMENT_FOR_t2_tip"),
                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t2_tip"),
                                                                                                  children : new MFNode([
                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0002,-0.1157,1.1871]),
                                                                                                      child : new SFNode(
                                                                                                        new Shape({
                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("t1"),
                                                                                              DEF : new SFString("hanim_t1"),
                                                                                              center : new SFVec3f([-0.0002,-0.1156,1.2109]),
                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("SEGMENT_FOR_t1"),
                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_t1"),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("joint t1 segment SEGMENT_FOR_t1")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0002,-0.1156,1.2109]),
                                                                                                      child : new SFNode(
                                                                                                        new Shape({
                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                    new HAnimSite({
                                                                                                      name : new SFString("SEGMENT_FOR_t1_tip"),
                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_t1_tip"),
                                                                                                      children : new MFNode([
                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.0002,-0.1156,1.2109]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("c7"),
                                                                                                  DEF : new SFString("hanim_c7"),
                                                                                                  center : new SFVec3f([-0.0002,-0.1169,1.2368]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("SEGMENT_FOR_c7"),
                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_c7"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("joint c7 segment SEGMENT_FOR_c7")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.0002,-0.1169,1.2368]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("SEGMENT_FOR_c7_tip"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_c7_tip"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.0002,-0.1169,1.2368]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("c6"),
                                                                                                      DEF : new SFString("hanim_c6"),
                                                                                                      center : new SFVec3f([-0.0002,-0.1169,1.249]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("SEGMENT_FOR_c6"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_c6"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("joint c6 segment SEGMENT_FOR_c6")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.0002,-0.1169,1.249]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("SEGMENT_FOR_c6_tip"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_c6_tip"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.0002,-0.1169,1.249]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("c5"),
                                                                                                          DEF : new SFString("hanim_c5"),
                                                                                                          center : new SFVec3f([-0.0002,-0.1169,1.2613]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("SEGMENT_FOR_c5"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_c5"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("joint c5 segment SEGMENT_FOR_c5")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.0002,-0.1169,1.2613]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("SEGMENT_FOR_c5_tip"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_c5_tip"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.0002,-0.1169,1.2613]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("c4"),
                                                                                                              DEF : new SFString("hanim_c4"),
                                                                                                              center : new SFVec3f([-0.0002,-0.1169,1.2737]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("SEGMENT_FOR_c4"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_c4"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("joint c4 segment SEGMENT_FOR_c4")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.0002,-0.1169,1.2737]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("SEGMENT_FOR_c4_tip"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_c4_tip"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.0002,-0.1169,1.2737]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("c3"),
                                                                                                                  DEF : new SFString("hanim_c3"),
                                                                                                                  center : new SFVec3f([-0.0002,-0.1169,1.2865]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("SEGMENT_FOR_c3"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_c3"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("joint c3 segment SEGMENT_FOR_c3")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.0002,-0.1169,1.2865]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("SEGMENT_FOR_c3_tip"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_c3_tip"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.0002,-0.1169,1.2865]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("c2"),
                                                                                                                      DEF : new SFString("hanim_c2"),
                                                                                                                      center : new SFVec3f([-0.0002,-0.1169,1.2982]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_c2"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_c2"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint c2 segment SEGMENT_FOR_c2")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.0002,-0.1169,1.2982]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_c2_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_c2_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0002,-0.1169,1.2982]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("c1"),
                                                                                                                          DEF : new SFString("hanim_c1"),
                                                                                                                          center : new SFVec3f([-0.0002,-0.1169,1.3099]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_c1"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_c1"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint c1 segment SEGMENT_FOR_c1")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0002,-0.1169,1.3099]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_c1_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_c1_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.0002,-0.1169,1.3099]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("skull"),
                                                                                                                              DEF : new SFString("hanim_skull"),
                                                                                                                              center : new SFVec3f([-0.0002,-0.1173,1.3041]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_skull"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_skull"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint skull segment SEGMENT_FOR_skull")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.0002,-0.1173,1.3041]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_skull_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_skull_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.0002,-0.1173,1.3041]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_eyelid"),
                                                                                                                                  DEF : new SFString("hanim_l_eyelid"),
                                                                                                                                  center : new SFVec3f([0.0503,-0.0689,1.4157]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_eyelid"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_eyelid"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_eyelid segment SEGMENT_FOR_l_eyelid")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.0503,-0.0689,1.4157]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_eyelid_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_eyelid_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.0503,-0.0689,1.4157]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyelid"),
                                                                                                                                  DEF : new SFString("hanim_r_eyelid"),
                                                                                                                                  center : new SFVec3f([-0.0507,-0.0689,1.4157]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_eyelid"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_eyelid"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_eyelid segment SEGMENT_FOR_r_eyelid")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.0507,-0.0689,1.4157]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_eyelid_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_eyelid_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.0507,-0.0689,1.4157]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_eyeball"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball"),
                                                                                                                                  center : new SFVec3f([0.0479,-0.0188,1.3963]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_eyeball"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_eyeball"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_eyeball segment SEGMENT_FOR_l_eyeball")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.0479,-0.0188,1.3963]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_eyeball_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_eyeball_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.0479,-0.0188,1.3963]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyeball"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball"),
                                                                                                                                  center : new SFVec3f([-0.0483,-0.0188,1.3963]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_eyeball"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_eyeball"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_eyeball segment SEGMENT_FOR_r_eyeball")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.0483,-0.0188,1.3963]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_eyeball_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_eyeball_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.0483,-0.0188,1.3963]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_eyebrow"),
                                                                                                                                  DEF : new SFString("hanim_l_eyebrow"),
                                                                                                                                  center : new SFVec3f([0.0216,0.0051,1.4053]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_eyebrow"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_eyebrow"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_eyebrow segment SEGMENT_FOR_l_eyebrow")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.0216,0.0051,1.4053]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_eyebrow_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_eyebrow_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.0216,0.0051,1.4053]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_eyebrow"),
                                                                                                                                  DEF : new SFString("hanim_r_eyebrow"),
                                                                                                                                  center : new SFVec3f([-0.0219,0.0051,1.4053]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_eyebrow"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_eyebrow"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_eyebrow segment SEGMENT_FOR_r_eyebrow")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.0219,0.0051,1.4053]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_eyebrow_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_eyebrow_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.0219,0.0051,1.4053]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("jaw"),
                                                                                                                                  DEF : new SFString("hanim_jaw"),
                                                                                                                                  center : new SFVec3f([-0.0002,-0.0865,1.3043]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_jaw"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_jaw"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint jaw segment SEGMENT_FOR_jaw")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.0002,-0.0865,1.3043]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_jaw_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_jaw_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.0002,-0.0865,1.3043]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_clavicle"),
                                                                                                  DEF : new SFString("hanim_l_clavicle"),
                                                                                                  center : new SFVec3f([0.1228,-0.1148,1.1833]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("SEGMENT_FOR_l_clavicle"),
                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_clavicle"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("joint l_clavicle segment SEGMENT_FOR_l_clavicle")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.1228,-0.1148,1.1833]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("SEGMENT_FOR_l_clavicle_tip"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_clavicle_tip"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.1228,-0.1148,1.1833]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_scapula"),
                                                                                                      DEF : new SFString("hanim_l_scapula"),
                                                                                                      center : new SFVec3f([0.0383,-0.1157,1.2001]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("SEGMENT_FOR_l_scapula"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_scapula"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("joint l_scapula segment SEGMENT_FOR_l_scapula")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0383,-0.1157,1.2001]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("SEGMENT_FOR_l_scapula_tip"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_scapula_tip"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0383,-0.1157,1.2001]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_upperarm"),
                                                                                                          DEF : new SFString("hanim_l_upperarm"),
                                                                                                          center : new SFVec3f([0.1649,-0.1051,1.17]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("SEGMENT_FOR_l_upperarm"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_upperarm"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("joint l_upperarm segment SEGMENT_FOR_l_upperarm")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1649,-0.1051,1.17]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("SEGMENT_FOR_l_upperarm_tip"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_upperarm_tip"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1649,-0.1051,1.17]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_forearm"),
                                                                                                              DEF : new SFString("hanim_l_forearm"),
                                                                                                              center : new SFVec3f([0.1819,-0.1075,0.9202]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("SEGMENT_FOR_l_forearm"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_forearm"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("joint l_forearm segment SEGMENT_FOR_l_forearm")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1819,-0.1075,0.9202]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("SEGMENT_FOR_l_forearm_tip"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_forearm_tip"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1819,-0.1075,0.9202]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_carpal"),
                                                                                                                  DEF : new SFString("hanim_l_carpal"),
                                                                                                                  center : new SFVec3f([0.1818,-0.1069,0.7157]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("joint l_carpal segment SEGMENT_FOR_l_carpal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1818,-0.1069,0.7157]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_tip"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_tip"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1818,-0.1069,0.7157]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_trapezium"),
                                                                                                                      DEF : new SFString("hanim_l_trapezium"),
                                                                                                                      center : new SFVec3f([0.1811,-0.0826,0.6975]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_l_trapezium"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_trapezium"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint l_trapezium segment SEGMENT_FOR_l_trapezium")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1811,-0.0826,0.6975]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_trapezium_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_trapezium_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1811,-0.0826,0.6975]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpal_1"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_1"),
                                                                                                                          center : new SFVec3f([0.1803,-0.0759,0.684]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_metacarpal_1"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_1"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint l_metacarpal_1 segment SEGMENT_FOR_l_metacarpal_1")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1803,-0.0759,0.684]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_metacarpal_1_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_1_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1803,-0.0759,0.684]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_proximal_phalanx_1"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_phalanx_1"),
                                                                                                                              center : new SFVec3f([0.1809,-0.0661,0.6642]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint l_carpal_proximal_phalanx_1 segment SEGMENT_FOR_l_carpal_proximal_phalanx_1")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1809,-0.0661,0.6642]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_1_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1809,-0.0661,0.6642]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_distal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_distal_phalanx_1"),
                                                                                                                                  center : new SFVec3f([0.1825,-0.0522,0.6455]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_carpal_distal_phalanx_1 segment SEGMENT_FOR_l_carpal_distal_phalanx_1")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1825,-0.0522,0.6455]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_1_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1825,-0.0522,0.6455]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_trapezoid"),
                                                                                                                      DEF : new SFString("hanim_l_trapezoid"),
                                                                                                                      center : new SFVec3f([0.1811,-0.0935,0.6984]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_l_trapezoid"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_trapezoid"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint l_trapezoid segment SEGMENT_FOR_l_trapezoid")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1811,-0.0935,0.6984]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_trapezoid_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_trapezoid_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1811,-0.0935,0.6984]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpal_2"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_2"),
                                                                                                                          center : new SFVec3f([0.1811,-0.0922,0.679]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_metacarpal_2"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint l_metacarpal_2 segment SEGMENT_FOR_l_metacarpal_2")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1811,-0.0922,0.679]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_metacarpal_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_2_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1811,-0.0922,0.679]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_proximal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_phalanx_2"),
                                                                                                                              center : new SFVec3f([0.1836,-0.0868,0.6286]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint l_carpal_proximal_phalanx_2 segment SEGMENT_FOR_l_carpal_proximal_phalanx_2")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1836,-0.0868,0.6286]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_2_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1836,-0.0868,0.6286]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_middle_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_middle_phalanx_2"),
                                                                                                                                  center : new SFVec3f([0.1815,-0.0877,0.5983]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_carpal_middle_phalanx_2 segment SEGMENT_FOR_l_carpal_middle_phalanx_2")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1815,-0.0877,0.5983]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_2_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1815,-0.0877,0.5983]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_2"),
                                                                                                                                      center : new SFVec3f([0.1805,-0.0885,0.5731]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint l_carpal_distal_phalanx_2 segment SEGMENT_FOR_l_carpal_distal_phalanx_2")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1805,-0.0885,0.5731]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_2_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([0.1805,-0.0885,0.5731]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_capitate"),
                                                                                                                      DEF : new SFString("hanim_l_capitate"),
                                                                                                                      center : new SFVec3f([0.1809,-0.1067,0.7]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_l_capitate"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_capitate"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint l_capitate segment SEGMENT_FOR_l_capitate")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1809,-0.1067,0.7]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_capitate_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_capitate_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1809,-0.1067,0.7]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpal_3"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_3"),
                                                                                                                          center : new SFVec3f([0.1809,-0.1081,0.6772]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_metacarpal_3"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint l_metacarpal_3 segment SEGMENT_FOR_l_metacarpal_3")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1809,-0.1081,0.6772]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_metacarpal_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_3_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1809,-0.1081,0.6772]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_proximal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_phalanx_3"),
                                                                                                                              center : new SFVec3f([0.1835,-0.1058,0.6264]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint l_carpal_proximal_phalanx_3 segment SEGMENT_FOR_l_carpal_proximal_phalanx_3")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1835,-0.1058,0.6264]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_3_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1835,-0.1058,0.6264]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_middle_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_middle_phalanx_3"),
                                                                                                                                  center : new SFVec3f([0.1815,-0.1054,0.5947]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_carpal_middle_phalanx_3 segment SEGMENT_FOR_l_carpal_middle_phalanx_3")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1815,-0.1054,0.5947]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_3_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1815,-0.1054,0.5947]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_3"),
                                                                                                                                      center : new SFVec3f([0.1805,-0.1056,0.5668]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint l_carpal_distal_phalanx_3 segment SEGMENT_FOR_l_carpal_distal_phalanx_3")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1805,-0.1056,0.5668]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_3_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([0.1805,-0.1056,0.5668]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_hamate"),
                                                                                                                      DEF : new SFString("hanim_l_hamate"),
                                                                                                                      center : new SFVec3f([0.1809,-0.1276,0.6973]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_l_hamate"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_hamate"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint l_hamate segment SEGMENT_FOR_l_hamate")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1809,-0.1276,0.6973]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_hamate_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_hamate_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1809,-0.1276,0.6973]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpal_4"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_4"),
                                                                                                                          center : new SFVec3f([0.1809,-0.1218,0.6777]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_metacarpal_4"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint l_metacarpal_4 segment SEGMENT_FOR_l_metacarpal_4")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1809,-0.1218,0.6777]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_metacarpal_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_4_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1809,-0.1218,0.6777]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_proximal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_phalanx_4"),
                                                                                                                              center : new SFVec3f([0.1835,-0.1233,0.6255]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint l_carpal_proximal_phalanx_4 segment SEGMENT_FOR_l_carpal_proximal_phalanx_4")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1835,-0.1233,0.6255]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_4_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1835,-0.1233,0.6255]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_middle_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_middle_phalanx_4"),
                                                                                                                                  center : new SFVec3f([0.1815,-0.1225,0.598]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_carpal_middle_phalanx_4 segment SEGMENT_FOR_l_carpal_middle_phalanx_4")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1815,-0.1225,0.598]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_4_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1815,-0.1225,0.598]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_4"),
                                                                                                                                      center : new SFVec3f([0.1805,-0.1217,0.5722]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint l_carpal_distal_phalanx_4 segment SEGMENT_FOR_l_carpal_distal_phalanx_4")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1805,-0.1217,0.5722]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_4_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([0.1805,-0.1217,0.5722]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_metacarpal_5"),
                                                                                                                          DEF : new SFString("hanim_l_metacarpal_5"),
                                                                                                                          center : new SFVec3f([0.1815,-0.1347,0.6797]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_l_metacarpal_5"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint l_metacarpal_5 segment SEGMENT_FOR_l_metacarpal_5")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1815,-0.1347,0.6797]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_metacarpal_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_metacarpal_5_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1815,-0.1347,0.6797]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("l_carpal_proximal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_l_carpal_proximal_phalanx_5"),
                                                                                                                              center : new SFVec3f([0.1832,-0.1389,0.6295]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint l_carpal_proximal_phalanx_5 segment SEGMENT_FOR_l_carpal_proximal_phalanx_5")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([0.1832,-0.1389,0.6295]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_proximal_phalanx_5_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1832,-0.1389,0.6295]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("l_carpal_middle_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_l_carpal_middle_phalanx_5"),
                                                                                                                                  center : new SFVec3f([0.1815,-0.139,0.6124]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint l_carpal_middle_phalanx_5 segment SEGMENT_FOR_l_carpal_middle_phalanx_5")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([0.1815,-0.139,0.6124]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_middle_phalanx_5_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1815,-0.139,0.6124]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("l_carpal_distal_phalanx_5"),
                                                                                                                                      DEF : new SFString("hanim_l_carpal_distal_phalanx_5"),
                                                                                                                                      center : new SFVec3f([0.1806,-0.1388,0.5938]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint l_carpal_distal_phalanx_5 segment SEGMENT_FOR_l_carpal_distal_phalanx_5")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([0.1806,-0.1388,0.5938]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_l_carpal_distal_phalanx_5_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([0.1806,-0.1388,0.5938]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_clavicle"),
                                                                                                  DEF : new SFString("hanim_r_clavicle"),
                                                                                                  center : new SFVec3f([-0.1231,-0.1148,1.1833]),
                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("SEGMENT_FOR_r_clavicle"),
                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_clavicle"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("joint r_clavicle segment SEGMENT_FOR_r_clavicle")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.1231,-0.1148,1.1833]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("SEGMENT_FOR_r_clavicle_tip"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_clavicle_tip"),
                                                                                                          children : new MFNode([
                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.1231,-0.1148,1.1833]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_scapula"),
                                                                                                      DEF : new SFString("hanim_r_scapula"),
                                                                                                      center : new SFVec3f([-0.0387,-0.1157,1.2001]),
                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("SEGMENT_FOR_r_scapula"),
                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_scapula"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("joint r_scapula segment SEGMENT_FOR_r_scapula")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.0387,-0.1157,1.2001]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("SEGMENT_FOR_r_scapula_tip"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_scapula_tip"),
                                                                                                              children : new MFNode([
                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.0387,-0.1157,1.2001]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_upperarm"),
                                                                                                          DEF : new SFString("hanim_r_upperarm"),
                                                                                                          center : new SFVec3f([-0.1649,-0.1051,1.17]),
                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("SEGMENT_FOR_r_upperarm"),
                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_upperarm"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("joint r_upperarm segment SEGMENT_FOR_r_upperarm")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.1649,-0.1051,1.17]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("SEGMENT_FOR_r_upperarm_tip"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_upperarm_tip"),
                                                                                                                  children : new MFNode([
                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1649,-0.1051,1.17]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_forearm"),
                                                                                                              DEF : new SFString("hanim_r_forearm"),
                                                                                                              center : new SFVec3f([-0.1819,-0.1075,0.9202]),
                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("SEGMENT_FOR_r_forearm"),
                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_forearm"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("joint r_forearm segment SEGMENT_FOR_r_forearm")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1819,-0.1075,0.9202]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                    new HAnimSite({
                                                                                                                      name : new SFString("SEGMENT_FOR_r_forearm_tip"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_forearm_tip"),
                                                                                                                      children : new MFNode([
                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1819,-0.1075,0.9202]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_carpal"),
                                                                                                                  DEF : new SFString("hanim_r_carpal"),
                                                                                                                  center : new SFVec3f([-0.1818,-0.1069,0.7157]),
                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal"),
                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("joint r_carpal segment SEGMENT_FOR_r_carpal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1818,-0.1069,0.7157]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                        new HAnimSite({
                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_tip"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_tip"),
                                                                                                                          children : new MFNode([
                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1818,-0.1069,0.7157]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_trapezium"),
                                                                                                                      DEF : new SFString("hanim_r_trapezium"),
                                                                                                                      center : new SFVec3f([-0.1811,-0.0826,0.6975]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_r_trapezium"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_trapezium"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint r_trapezium segment SEGMENT_FOR_r_trapezium")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1811,-0.0826,0.6975]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_trapezium_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_trapezium_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1811,-0.0826,0.6975]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_metacarpal_1"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_1"),
                                                                                                                          center : new SFVec3f([-0.1803,-0.0759,0.684]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_metacarpal_1"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_1"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint r_metacarpal_1 segment SEGMENT_FOR_r_metacarpal_1")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1803,-0.0759,0.684]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_metacarpal_1_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_1_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1803,-0.0759,0.684]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_proximal_phalanx_1"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_phalanx_1"),
                                                                                                                              center : new SFVec3f([-0.1808,-0.0661,0.6642]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint r_carpal_proximal_phalanx_1 segment SEGMENT_FOR_r_carpal_proximal_phalanx_1")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1808,-0.0661,0.6642]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_1_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1808,-0.0661,0.6642]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_carpal_distal_phalanx_1"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_distal_phalanx_1"),
                                                                                                                                  center : new SFVec3f([-0.1825,-0.0522,0.6455]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_carpal_distal_phalanx_1 segment SEGMENT_FOR_r_carpal_distal_phalanx_1")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1825,-0.0522,0.6455]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_1_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1825,-0.0522,0.6455]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_trapezoid"),
                                                                                                                      DEF : new SFString("hanim_r_trapezoid"),
                                                                                                                      center : new SFVec3f([-0.1811,-0.0935,0.6984]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_r_trapezoid"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_trapezoid"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint r_trapezoid segment SEGMENT_FOR_r_trapezoid")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1811,-0.0935,0.6984]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_trapezoid_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_trapezoid_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1811,-0.0935,0.6984]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_metacarpal_2"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_2"),
                                                                                                                          center : new SFVec3f([-0.1811,-0.0922,0.679]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_metacarpal_2"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_2"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint r_metacarpal_2 segment SEGMENT_FOR_r_metacarpal_2")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1811,-0.0922,0.679]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_metacarpal_2_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_2_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1811,-0.0922,0.679]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_proximal_phalanx_2"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_phalanx_2"),
                                                                                                                              center : new SFVec3f([-0.1835,-0.0868,0.6286]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint r_carpal_proximal_phalanx_2 segment SEGMENT_FOR_r_carpal_proximal_phalanx_2")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1835,-0.0868,0.6286]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_2_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1835,-0.0868,0.6286]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_carpal_middle_phalanx_2"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_middle_phalanx_2"),
                                                                                                                                  center : new SFVec3f([-0.1815,-0.0877,0.5983]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_carpal_middle_phalanx_2 segment SEGMENT_FOR_r_carpal_middle_phalanx_2")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1815,-0.0877,0.5983]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_2_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1815,-0.0877,0.5983]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_2"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_2"),
                                                                                                                                      center : new SFVec3f([-0.1805,-0.0885,0.5731]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint r_carpal_distal_phalanx_2 segment SEGMENT_FOR_r_carpal_distal_phalanx_2")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1805,-0.0885,0.5731]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_2_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([-0.1805,-0.0885,0.5731]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_capitate"),
                                                                                                                      DEF : new SFString("hanim_r_capitate"),
                                                                                                                      center : new SFVec3f([-0.1809,-0.1067,0.7]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_r_capitate"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_capitate"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint r_capitate segment SEGMENT_FOR_r_capitate")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1809,-0.1067,0.7]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_capitate_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_capitate_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1809,-0.1067,0.7]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_metacarpal_3"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_3"),
                                                                                                                          center : new SFVec3f([-0.1809,-0.1081,0.6772]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_metacarpal_3"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_3"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint r_metacarpal_3 segment SEGMENT_FOR_r_metacarpal_3")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1809,-0.1081,0.6772]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_metacarpal_3_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_3_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1809,-0.1081,0.6772]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_proximal_phalanx_3"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_phalanx_3"),
                                                                                                                              center : new SFVec3f([-0.1835,-0.1058,0.6264]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint r_carpal_proximal_phalanx_3 segment SEGMENT_FOR_r_carpal_proximal_phalanx_3")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1835,-0.1058,0.6264]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_3_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1835,-0.1058,0.6264]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_carpal_middle_phalanx_3"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_middle_phalanx_3"),
                                                                                                                                  center : new SFVec3f([-0.1815,-0.1054,0.5947]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_carpal_middle_phalanx_3 segment SEGMENT_FOR_r_carpal_middle_phalanx_3")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1815,-0.1054,0.5947]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_3_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1815,-0.1054,0.5947]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_3"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_3"),
                                                                                                                                      center : new SFVec3f([-0.1805,-0.1056,0.5668]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint r_carpal_distal_phalanx_3 segment SEGMENT_FOR_r_carpal_distal_phalanx_3")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1805,-0.1056,0.5668]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_3_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([-0.1805,-0.1056,0.5668]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_hamate"),
                                                                                                                      DEF : new SFString("hanim_r_hamate"),
                                                                                                                      center : new SFVec3f([-0.1809,-0.1276,0.6973]),
                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("SEGMENT_FOR_r_hamate"),
                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_hamate"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("joint r_hamate segment SEGMENT_FOR_r_hamate")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1809,-0.1276,0.6973]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_hamate_tip"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_hamate_tip"),
                                                                                                                              children : new MFNode([
                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1809,-0.1276,0.6973]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_metacarpal_4"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_4"),
                                                                                                                          center : new SFVec3f([-0.1809,-0.1218,0.6777]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_metacarpal_4"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_4"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint r_metacarpal_4 segment SEGMENT_FOR_r_metacarpal_4")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1809,-0.1218,0.6777]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_metacarpal_4_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_4_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1809,-0.1218,0.6777]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_proximal_phalanx_4"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_phalanx_4"),
                                                                                                                              center : new SFVec3f([-0.1835,-0.1233,0.6255]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint r_carpal_proximal_phalanx_4 segment SEGMENT_FOR_r_carpal_proximal_phalanx_4")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1835,-0.1233,0.6255]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_4_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1835,-0.1233,0.6255]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_carpal_middle_phalanx_4"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_middle_phalanx_4"),
                                                                                                                                  center : new SFVec3f([-0.1815,-0.1225,0.598]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_carpal_middle_phalanx_4 segment SEGMENT_FOR_r_carpal_middle_phalanx_4")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1815,-0.1225,0.598]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_4_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1815,-0.1225,0.598]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_4"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_4"),
                                                                                                                                      center : new SFVec3f([-0.1805,-0.1217,0.5722]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint r_carpal_distal_phalanx_4 segment SEGMENT_FOR_r_carpal_distal_phalanx_4")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1805,-0.1217,0.5722]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_4_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([-0.1805,-0.1217,0.5722]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_metacarpal_5"),
                                                                                                                          DEF : new SFString("hanim_r_metacarpal_5"),
                                                                                                                          center : new SFVec3f([-0.1814,-0.1347,0.6797]),
                                                                                                                          ulimit : new MFFloat([0,0,0]),
                                                                                                                          llimit : new MFFloat([0,0,0]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("SEGMENT_FOR_r_metacarpal_5"),
                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_5"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("joint r_metacarpal_5 segment SEGMENT_FOR_r_metacarpal_5")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1814,-0.1347,0.6797]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("JointShape")}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_metacarpal_5_tip"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_metacarpal_5_tip"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1814,-0.1347,0.6797]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                            new HAnimJoint({
                                                                                                                              name : new SFString("r_carpal_proximal_phalanx_5"),
                                                                                                                              DEF : new SFString("hanim_r_carpal_proximal_phalanx_5"),
                                                                                                                              center : new SFVec3f([-0.1832,-0.1389,0.6295]),
                                                                                                                              ulimit : new MFFloat([0,0,0]),
                                                                                                                              llimit : new MFFloat([0,0,0]),
                                                                                                                              children : new MFNode([
                                                                                                                                new HAnimSegment({
                                                                                                                                  name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5"),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("joint r_carpal_proximal_phalanx_5 segment SEGMENT_FOR_r_carpal_proximal_phalanx_5")}),

                                                                                                                                    new Transform({
                                                                                                                                      translation : new SFVec3f([-0.1832,-0.1389,0.6295]),
                                                                                                                                      child : new SFNode(
                                                                                                                                        new Shape({
                                                                                                                                          USE : new SFString("JointShape")}))}),

                                                                                                                                    new HAnimSite({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_proximal_phalanx_5_tip"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1832,-0.1389,0.6295]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                new HAnimJoint({
                                                                                                                                  name : new SFString("r_carpal_middle_phalanx_5"),
                                                                                                                                  DEF : new SFString("hanim_r_carpal_middle_phalanx_5"),
                                                                                                                                  center : new SFVec3f([-0.1815,-0.139,0.6124]),
                                                                                                                                  ulimit : new MFFloat([0,0,0]),
                                                                                                                                  llimit : new MFFloat([0,0,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new HAnimSegment({
                                                                                                                                      name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5"),
                                                                                                                                      DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5"),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new TouchSensor({
                                                                                                                                          description : new SFString("joint r_carpal_middle_phalanx_5 segment SEGMENT_FOR_r_carpal_middle_phalanx_5")}),

                                                                                                                                        new Transform({
                                                                                                                                          translation : new SFVec3f([-0.1815,-0.139,0.6124]),
                                                                                                                                          child : new SFNode(
                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("JointShape")}))}),

                                                                                                                                        new HAnimSite({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_middle_phalanx_5_tip"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1815,-0.139,0.6124]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("SiteShape")}))})])})])}),

                                                                                                                                    new HAnimJoint({
                                                                                                                                      name : new SFString("r_carpal_distal_phalanx_5"),
                                                                                                                                      DEF : new SFString("hanim_r_carpal_distal_phalanx_5"),
                                                                                                                                      center : new SFVec3f([-0.1806,-0.1388,0.5938]),
                                                                                                                                      ulimit : new MFFloat([0,0,0]),
                                                                                                                                      llimit : new MFFloat([0,0,0]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new HAnimSegment({
                                                                                                                                          name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_5"),
                                                                                                                                          DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5"),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new TouchSensor({
                                                                                                                                              description : new SFString("joint r_carpal_distal_phalanx_5 segment SEGMENT_FOR_r_carpal_distal_phalanx_5")}),

                                                                                                                                            new Transform({
                                                                                                                                              translation : new SFVec3f([-0.1806,-0.1388,0.5938]),
                                                                                                                                              child : new SFNode(
                                                                                                                                                new Shape({
                                                                                                                                                  USE : new SFString("JointShape")}))}),

                                                                                                                                            new HAnimSite({
                                                                                                                                              name : new SFString("SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"),
                                                                                                                                              DEF : new SFString("hanim_SEGMENT_FOR_r_carpal_distal_phalanx_5_tip"),
                                                                                                                                              children : new MFNode([
                                                                                                                                                new Transform({
                                                                                                                                                  translation : new SFVec3f([-0.1806,-0.1388,0.5938]),
                                                                                                                                                  child : new SFNode(
                                                                                                                                                    new Shape({
                                                                                                                                                      USE : new SFString("SiteShape")}))})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      USE : new SFString("hanim_sacrum")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_pelvis")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_thigh")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_calf")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_talus")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_navicular")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_cuneiform_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metatarsal_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_proximal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_cuneiform_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metatarsal_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_proximal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_middle_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_cuneiform_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metatarsal_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_proximal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_middle_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_calcaneus")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_cuboid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metatarsal_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_proximal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_middle_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metatarsal_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_proximal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_middle_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_tarsal_distal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_thigh")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_calf")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_talus")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_navicular")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_cuneiform_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metatarsal_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_proximal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_cuneiform_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metatarsal_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_proximal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_middle_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_cuneiform_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metatarsal_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_proximal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_middle_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_calcaneus")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_cuboid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metatarsal_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_proximal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_middle_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metatarsal_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_proximal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_middle_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_tarsal_distal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t12")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t11")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t10")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t9")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t8")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t7")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t6")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_t1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c7")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c6")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_c1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_skull")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_eyelid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_eyelid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_eyeball")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_eyeball")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_eyebrow")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_eyebrow")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_jaw")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_clavicle")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_scapula")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_upperarm")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_forearm")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_trapezium")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metacarpal_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_proximal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_trapezoid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metacarpal_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_proximal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_middle_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_capitate")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metacarpal_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_proximal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_middle_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_hamate")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metacarpal_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_proximal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_middle_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_metacarpal_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_proximal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_middle_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_l_carpal_distal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_clavicle")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_scapula")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_upperarm")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_forearm")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_trapezium")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metacarpal_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_proximal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_1")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_trapezoid")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metacarpal_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_proximal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_middle_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_2")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_capitate")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metacarpal_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_proximal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_middle_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_3")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_hamate")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metacarpal_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_proximal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_middle_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_4")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_metacarpal_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_proximal_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_middle_phalanx_5")}),

                    new HAnimJoint({
                      USE : new SFString("hanim_r_carpal_distal_phalanx_5")})])})])}),

            new TimeSensor({
              DEF : new SFString("Armature_Clock"),
              cycleInterval : new SFTime(10.416666666666666),
              loop : new SFBool(true)}),

            new ProximitySensor({
              DEF : new SFString("Armature_Close"),
              size : new SFVec3f([1000000,1000000,1000000])}),

            new ROUTE({
              fromField : new SFString("enterTime"),
              fromNode : new SFString("Armature_Close"),
              toField : new SFString("startTime"),
              toNode : new SFString("Armature_Clock")}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_sacrum"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_pelvis"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_thigh"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_calf"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_talus"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_navicular"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_cuneiform_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metatarsal_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_proximal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_distal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_cuneiform_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metatarsal_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_proximal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_middle_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_distal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_cuneiform_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metatarsal_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_proximal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_middle_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_distal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_calcaneus"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_cuboid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metatarsal_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_proximal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_middle_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_distal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metatarsal_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_proximal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_middle_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_tarsal_distal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_thigh"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_calf"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_talus"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_navicular"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_cuneiform_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metatarsal_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_proximal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_distal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_cuneiform_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metatarsal_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_proximal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_middle_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_distal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_cuneiform_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metatarsal_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_proximal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_middle_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_distal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_calcaneus"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_cuboid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metatarsal_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_proximal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_middle_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_distal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metatarsal_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_proximal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_middle_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_tarsal_distal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t12"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t11"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t10"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t9"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t8"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t7"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t6"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_t1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c7"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c6"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_c1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_skull"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_eyelid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_eyelid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_eyeball"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_eyeball"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_eyebrow"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_eyebrow"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_jaw"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_clavicle"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_scapula"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_upperarm"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_forearm"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_trapezium"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metacarpal_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_proximal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_distal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_trapezoid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metacarpal_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_proximal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_middle_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_distal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_capitate"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metacarpal_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_proximal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_middle_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_distal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_hamate"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metacarpal_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_proximal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_middle_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_distal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_metacarpal_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_proximal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_middle_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_l_carpal_distal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_clavicle"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_scapula"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_upperarm"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_forearm"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_trapezium"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metacarpal_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_proximal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_distal_phalanx_1"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_trapezoid"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metacarpal_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_proximal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_middle_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_distal_phalanx_2"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_capitate"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metacarpal_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_proximal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_middle_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_distal_phalanx_3"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_hamate"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metacarpal_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_proximal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_middle_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_distal_phalanx_4"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_metacarpal_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_proximal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_middle_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new OrientationInterpolator({
              DEF : new SFString("Armature_OI_r_carpal_distal_phalanx_5"),
              key : new MFFloat([0,1]),
              keyValue : new MFRotation([0,0,0,0,0,0,0,0])}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_sacrum")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_sacrum"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_sacrum")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_pelvis")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_pelvis"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_pelvis")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_thigh")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_thigh"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_thigh")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_calf")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_calf"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_calf")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_talus")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_talus"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_talus")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_navicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_navicular"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_navicular")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_cuneiform_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_cuneiform_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_cuneiform_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metatarsal_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metatarsal_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metatarsal_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_cuneiform_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_cuneiform_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_cuneiform_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metatarsal_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metatarsal_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metatarsal_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_cuneiform_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_cuneiform_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_cuneiform_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metatarsal_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metatarsal_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metatarsal_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_calcaneus")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_calcaneus"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_calcaneus")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_cuboid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_cuboid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_cuboid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metatarsal_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metatarsal_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metatarsal_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metatarsal_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metatarsal_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metatarsal_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_proximal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_middle_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_tarsal_distal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_tarsal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_thigh")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_thigh"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_thigh")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_calf")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_calf"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_calf")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_talus")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_talus"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_talus")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_navicular")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_navicular"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_navicular")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_cuneiform_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_cuneiform_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_cuneiform_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metatarsal_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metatarsal_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metatarsal_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_cuneiform_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_cuneiform_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_cuneiform_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metatarsal_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metatarsal_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metatarsal_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_cuneiform_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_cuneiform_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_cuneiform_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metatarsal_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metatarsal_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metatarsal_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_calcaneus")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_calcaneus"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_calcaneus")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_cuboid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_cuboid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_cuboid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metatarsal_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metatarsal_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metatarsal_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metatarsal_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metatarsal_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metatarsal_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_proximal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_middle_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_tarsal_distal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_tarsal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t12")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t12"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t12")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t11")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t11"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t11")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t10")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t10"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t10")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t9")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t9"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t9")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t8")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t8"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t8")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t7")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t7"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t7")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t6")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t6"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t6")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_t1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_t1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_t1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c7")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c7"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c7")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c6")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c6"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c6")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_c1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_c1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_c1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_skull")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_skull"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_skull")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_eyelid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_eyelid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_eyelid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_eyelid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_eyelid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_eyelid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_eyeball")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_eyeball"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_eyeball")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_eyeball")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_eyeball"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_eyeball")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_eyebrow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_eyebrow"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_eyebrow")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_eyebrow")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_eyebrow"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_eyebrow")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_jaw")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_jaw"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_jaw")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_clavicle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_clavicle"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_clavicle")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_scapula")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_scapula"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_scapula")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_upperarm")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_upperarm"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_upperarm")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_forearm")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_forearm"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_forearm")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_trapezium")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_trapezium"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_trapezium")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metacarpal_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metacarpal_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metacarpal_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_distal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_trapezoid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_trapezoid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_trapezoid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metacarpal_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metacarpal_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metacarpal_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_middle_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_distal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_capitate")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_capitate"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_capitate")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metacarpal_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metacarpal_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metacarpal_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_middle_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_distal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_hamate")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_hamate"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_hamate")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metacarpal_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metacarpal_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metacarpal_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_middle_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_distal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_metacarpal_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_metacarpal_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_metacarpal_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_proximal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_middle_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_l_carpal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_l_carpal_distal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_l_carpal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_clavicle")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_clavicle"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_clavicle")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_scapula")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_scapula"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_scapula")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_upperarm")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_upperarm"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_upperarm")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_forearm")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_forearm"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_forearm")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_trapezium")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_trapezium"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_trapezium")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metacarpal_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metacarpal_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metacarpal_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_proximal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_distal_phalanx_1"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_distal_phalanx_1")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_trapezoid")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_trapezoid"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_trapezoid")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metacarpal_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metacarpal_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metacarpal_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_proximal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_middle_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_middle_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_distal_phalanx_2"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_distal_phalanx_2")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_capitate")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_capitate"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_capitate")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metacarpal_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metacarpal_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metacarpal_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_proximal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_middle_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_middle_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_distal_phalanx_3"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_distal_phalanx_3")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_hamate")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_hamate"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_hamate")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metacarpal_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metacarpal_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metacarpal_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_proximal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_middle_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_middle_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_distal_phalanx_4"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_distal_phalanx_4")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_metacarpal_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_metacarpal_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_metacarpal_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_proximal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_proximal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_middle_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_middle_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("fraction_changed"),
              fromNode : new SFString("Armature_Clock"),
              toField : new SFString("set_fraction"),
              toNode : new SFString("Armature_OI_r_carpal_distal_phalanx_5")}),

            new ROUTE({
              fromField : new SFString("value_changed"),
              fromNode : new SFString("Armature_OI_r_carpal_distal_phalanx_5"),
              toField : new SFString("rotation"),
              toNode : new SFString("hanim_r_carpal_distal_phalanx_5")})])}))});
console.log(X3D0.toXMLNode());
