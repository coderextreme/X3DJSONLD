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
var WorldInfo = require('./x3d.js');
var NavigationInfo = require('./x3d.js');
var SFBool = require('./x3d.js');
var DirectionalLight = require('./x3d.js');
var SFFloat = require('./x3d.js');
var SFVec3f = require('./x3d.js');
var Viewpoint = require('./x3d.js');
var SFRotation = require('./x3d.js');
var Group = require('./x3d.js');
var Transform = require('./x3d.js');
var Inline = require('./x3d.js');
var MFString = require('./x3d.js');
var Shape = require('./x3d.js');
var Appearance = require('./x3d.js');
var Material = require('./x3d.js');
var Box = require('./x3d.js');
var SFColor = require('./x3d.js');
var IndexedLineSet = require('./x3d.js');
var MFInt32 = require('./x3d.js');
var Coordinate = require('./x3d.js');
var MFVec3f = require('./x3d.js');
var X3D0 =  new X3D({

      profile : new SFString("Interchange"),
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
              content : new SFString("MainStage.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Main stage for HAnim scene Winter and Spring.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Joe Williams")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Joe Williams and Don Brutzman")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("25 May 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("27 May 2023")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/0MainStageScene0525.x3dv")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("MainStage.x3d")}),

            new NavigationInfo({
              headlight : new SFBool(false)}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([-0.5,-0.5,-0.5]),
              global : new SFBool(true)}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([-1,-1,-1]),
              global : new SFBool(true)}),

            new DirectionalLight({
              ambientIntensity : new SFFloat(1),
              direction : new SFVec3f([1,1,-1]),
              global : new SFBool(true),
              intensity : new SFFloat(0.5)}),

            new Viewpoint({
              DEF : new SFString("Scene_StageFrontViewFar"),
              description : new SFString("hanim_Stage Front View"),
              orientation : new SFRotation([1,0,0,-0.449999988]),
              position : new SFVec3f([0,4,10])}),

            new Viewpoint({
              DEF : new SFString("Scene_InclinedView"),
              description : new SFString("hanim_Inclined View"),
              orientation : new SFRotation([-0.112999998,0.992999971,0.034699999,0.671000004]),
              position : new SFVec3f([2.619999886,1.049999952,4.059999943])}),

            new Viewpoint({
              DEF : new SFString("Scene_StageFrontView"),
              description : new SFString("hanim_Stage Front View"),
              position : new SFVec3f([0,1,5])}),

            new Viewpoint({
              DEF : new SFString("Scene_FeetStageBottomView"),
              description : new SFString("hanim_feet View"),
              orientation : new SFRotation([1,0,0,1.570000052]),
              position : new SFVec3f([0,-10,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_HeadTopView"),
              description : new SFString("hanim_Head Top View"),
              orientation : new SFRotation([1,0,0,-1.570000052]),
              position : new SFVec3f([0,15,0])}),

            new Viewpoint({
              DEF : new SFString("Scene_TopFrontCloseView"),
              description : new SFString("hanim_Head Top View"),
              orientation : new SFRotation([1,0,0,-1.100000024]),
              position : new SFVec3f([0,8,3])}),

            new Group({
              DEF : new SFString("HAnimStage"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("cordsysfloor"),
                  scale : new SFVec3f([0.174999997,0.174999997,0.174999997]),
                  children : new MFNode([
                    new Inline({
                      url : new MFString(["JointCoordinateAxes.x3dv"])})])}),

                new Transform({
                  DEF : new SFString("StageGeometry"),
                  scale : new SFVec3f([1,0.01,1]),
                  translation : new SFVec3f([0,-0.01,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(0.6)}))})),
                      geometry : new SFNode(
                        new Box({
                          size : new SFVec3f([9,1,9])}))}),

                    new Transform({
                      DEF : new SFString("Circle0"),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              DEF : new SFString("LineColor"),
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(1),
                                  diffuseColor : new SFColor([0.699999988,0,0.899999976]),
                                  emissiveColor : new SFColor([0.449999988,0.449999988,1]),
                                  shininess : new SFFloat(1),
                                  specularColor : new SFColor([0,0,1])}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              DEF : new SFString("Orbit1"),
                              coordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1,0,0,0.995000005,0,-0.104999997,0.978999972,0,-0.208000004,0.950999975,0,-0.308999985,0.913999975,0,-0.407000005,0.865999997,0,-0.5,0.809000015,0,-0.588,0.742999971,0,-0.66900003,0.66900003,0,-0.742999971,0.588,0,-0.809000015,0.5,0,-0.865999997,0.407000005,0,-0.913999975,0.308999985,0,-0.950999975,0.208000004,0,-0.977999985,0.104999997,0,-0.995000005,0,0,-1,-0.104999997,0,-0.994521976,-0.208000004,0,-0.977999985,-0.308999985,0,-0.950999975,-0.407000005,0,-0.913999975,-0.5,0,-0.865999997,-0.588,0,-0.809000015,-0.66900003,0,-0.742999971,-0.742999971,0,-0.66900003,-0.809000015,0,-0.588,-0.865999997,0,-0.5,-0.913999975,0,-0.407000005,-0.950999975,0,-0.308999985,-0.977999985,0,-0.208000004,-0.995000005,0,-0.104999997,-1,0,0,-0.995000005,0,0.104999997,-0.977999985,0,0.208000004,-0.950999975,0,0.308999985,-0.913999975,0,0.407000005,-0.865999997,0,0.5,-0.809000015,0,0.588,-0.742999971,0,0.66900003,-0.66900003,0,0.742999971,-0.588,0,0.809000015,-0.5,0,0.865999997,-0.407000005,0,0.913999975,-0.308999985,0,0.950999975,-0.208000004,0,0.977999985,-0.104999997,0,0.995000005,0,0,1,0.104999997,0,0.995000005,0.208000004,0,0.977999985,0.308999985,0,0.950999975,0.407000005,0,0.913999975,0.5,0,0.865999997,0.588,0,0.809000015,0.66900003,0,0.742999971,0.742999971,0,0.66900003,0.809000015,0,0.588,0.865999997,0,0.5,0.913999975,0,0.407000005,0.950999975,0,0.308999985,0.977999985,0,0.208000004,0.995000005,0,0.104000002,1,0,0])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Circle1"),
                      scale : new SFVec3f([0.5,1,0.5]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("LineColor")})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))})])}),

                    new Transform({
                      DEF : new SFString("Circle2"),
                      scale : new SFVec3f([0.25,1,0.25]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("LineColor")})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))})])}),

                    new Transform({
                      DEF : new SFString("Circle3"),
                      scale : new SFVec3f([2,1,2]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("LineColor")})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))})])}),

                    new Transform({
                      DEF : new SFString("Circle4"),
                      scale : new SFVec3f([3,1,3]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              USE : new SFString("LineColor")})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))})])})])})])})])}))});
console.log(X3D0.toXMLNode());
