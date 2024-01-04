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
var component = require('./x3d.mjs');
var SFInt32 = require('./x3d.mjs');
var Scene = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var PointLight = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var DirectionalLight = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("filename"),
              content : new SFString("blenderLily.x3d")}),

            new meta({
              name : new SFString("copyright"),
              content : new SFString("2023")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3D.org")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Blender 3.6.4")}),
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(3)})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new NavigationInfo({}),

            new Background({
              DEF : new SFString("WO_World"),
              skyColor : new MFColor([0.05087609,0.05087609,0.05087609]),
              groundColor : new MFColor([0.05087609,0.05087609,0.05087609])}),

            new Transform({
              child : new SFNode(
                new Shape({
                  DEF : new SFString("SiteShape"),
                  appearance : new SFNode(
                    new Appearance({
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([0,0,1])}))})),
                  geometry : new SFNode(
                    new Box({
                      size : new SFVec3f([0.05,0.05,0.05])}))}))}),

            new Transform({
              child : new SFNode(
                new Shape({
                  DEF : new SFString("JointShape"),
                  appearance : new SFNode(
                    new Appearance({
                      DEF : new SFString("JointAppearance"),
                      material : new SFNode(
                        new Material({
                          diffuseColor : new SFColor([1,0.5,0]),
                          transparency : new SFFloat(0.5)}))})),
                  geometry : new SFNode(
                    new Sphere({
                      radius : new SFFloat(0.06)}))}))}),

            new Transform({
              DEF : new SFString("Light_TRANSFORM"),
              translation : new SFVec3f([4.07625,1.00545,5.90386]),
              rotation : new SFRotation([0.20594,0.33152,0.9207,1.92627]),
              children : new MFNode([
                new PointLight({
                  DEF : new SFString("LA_Light"),
                  location : new SFVec3f([-8.940697e-8,-3.576279e-7,4.61936e-7]),
                  radius : new SFFloat(29.99998)})])}),

            new Transform({
              DEF : new SFString("Camera_TRANSFORM"),
              translation : new SFVec3f([7.35889,-6.92579,4.95831]),
              rotation : new SFRotation([0.77344,0.33383,0.53884,1.35072]),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("CA_Camera"),
                  position : new SFVec3f([-3.92708e-7,-2.123415e-7,2.384186e-7]),
                  fieldOfView : new SFFloat(0.6911112)})])}),

            new Transform({
              DEF : new SFString("Light_001_TRANSFORM"),
              translation : new SFVec3f([4.07625,1.00545,5.90386]),
              rotation : new SFRotation([0.20594,0.33152,0.9207,1.92627]),
              children : new MFNode([
                new PointLight({
                  DEF : new SFString("LA_Light_001"),
                  location : new SFVec3f([2.980232e-8,-4.023314e-7,1.043081e-7]),
                  radius : new SFFloat(29.99998)})])}),

            new Transform({
              DEF : new SFString("Camera_001_TRANSFORM"),
              translation : new SFVec3f([7.35889,-6.92579,4.95831]),
              rotation : new SFRotation([0.77344,0.33383,0.53884,1.35072]),
              children : new MFNode([
                new Viewpoint({
                  DEF : new SFString("CA_Camera_001"),
                  position : new SFVec3f([-2.421449e-7,4.991889e-7,-7.152557e-7]),
                  fieldOfView : new SFFloat(0.6911112)})])}),

            new Transform({
              DEF : new SFString("World_TRANSFORM"),
              rotation : new SFRotation([1,0,0,1.5708]),
              scale : new SFVec3f([0.01,0.01,0.01]),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("World_001_TRANSFORM"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("lily_7_3_animate_TRANSFORM"),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("CINEMA_4D_Editor_TRANSFORM"),
                          translation : new SFVec3f([-2.3832,26.84083,170.6878]),
                          rotation : new SFRotation([0.03965,0.99809,0.04742,1.39469]),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("CINEMA_4D_Editor_001_TRANSFORM"),
                              translation : new SFVec3f([0.00001,0,0]),
                              rotation : new SFRotation([0,-1,0,3.14159]),
                              children : new MFNode([
                                new Viewpoint({
                                  DEF : new SFString("CA_CINEMA_4D_Editor_001"),
                                  position : new SFVec3f([-0.00002747774,0.000004980713,-0.000003484735]),
                                  fieldOfView : new SFFloat(0.9272952)})])})])}),

                        new Transform({
                          DEF : new SFString("node_t_Lily_RV7_Shape_TRANSFORM"),
                          children : new MFNode([
                            new Transform({
                              DEF : new SFString("humanoid_root_TRANSFORM"),
                              translation : new SFVec3f([0,-0.91969,0]),
                              rotation : new SFRotation([0,-1,0,1.5708]),
                              children : new MFNode([
                                new HAnimHumanoid({
                                  DEF : new SFString("hanim_armature_humanoid_root"),
                                  name : new SFString("armature_humanoid_root")})])})])})])})])}),

                new Transform({
                  DEF : new SFString("Environment_TRANSFORM"),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Sky_TRANSFORM"),
                      translation : new SFVec3f([0,305,0]),
                      rotation : new SFRotation([1,0,0,3.14159]),
                      children : new MFNode([
                        new PointLight({
                          DEF : new SFString("LA_Sky"),
                          intensity : new SFFloat(0.005714286),
                          location : new SFVec3f([-9.59824e-19,-0.00003051758,-9.094947e-12]),
                          radius : new SFFloat(0.25)})])}),

                    new Transform({
                      DEF : new SFString("DistantLight_TRANSFORM"),
                      translation : new SFVec3f([0,305,0]),
                      rotation : new SFRotation([-0.99144,0.13053,0,3.14159]),
                      children : new MFNode([
                        new DirectionalLight({
                          DEF : new SFString("LA_DistantLight"),
                          global : new SFBool(true),
                          intensity : new SFFloat(0.005714286),
                          ambientIntensity : new SFFloat(0.07),
                          direction : new SFVec3f([5.329071e-15,-3.552714e-15,-1])})])})])})])}),

            new Transform({
              DEF : new SFString("SkinnedMeshes_TRANSFORM"),
              rotation : new SFRotation([1,0,0,1.5708]),
              scale : new SFVec3f([0.01,0.01,0.01])})])}))});
console.log(X3D0.toXMLNode());
