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
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("filename"),
              content : new SFString("blenderSkeleton.x3d")}),

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
              DEF : new SFString("Humanoid_collection_TRANSFORM"),
              children : new MFNode([
                new HAnimHumanoid({
                  DEF : new SFString("hanim_armature_Humanoid_collection"),
                  name : new SFString("armature_Humanoid_collection")})])})])}))});
console.log(X3D0.toXMLNode());
