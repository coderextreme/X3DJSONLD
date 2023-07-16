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
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var ImageTexture = require('./x3d.mjs');
var TextureTransform = require('./x3d.mjs');
var TextureCoordinate = require('./x3d.mjs');
var MFVec2f = require('./x3d.mjs');
var SFVec2f = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var Sound = require('./x3d.mjs');
var AudioClip = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
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
              content : new SFString("Wed, 18 Mar 2015 02:58:01 GMT")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Holger Seelig")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Titania V0.7.6, http://titania.create3000.de")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Wed, 18 Mar 2015 02:58:01 GMT")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Group({
              children : new MFNode([
                new WorldInfo({
                  info : new MFString([", ","Created in Titania, ","Packaged by CosmoPackagePackaged by CosmoPackage"])}),

                new Transform({
                  DEF : new SFString("Schwelle"),
                  translation : new SFVec3f([-30.5547,4.33352,-18.8377]),
                  rotation : new SFRotation([0,1,0,4.71239]),
                  scale : new SFVec3f([0.471668,0.00738103,0.0652795]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1.00618,1,1,-1.00618,-1,1,0.996804,1,1,0.996804,-1,1,0.996804,1,-1,0.996804,-1,-1,-1.00618,1,-1,-1.00618,-1,-1])}))}))})])}),

                new Transform({
                  DEF : new SFString("Rahmen"),
                  translation : new SFVec3f([-30.5562,5.44625,-19.2761]),
                  rotation : new SFRotation([0,-1,0,1.5708]),
                  scale : new SFVec3f([0.0342311,1.11498,0.0407675]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              ambientIntensity : new SFFloat(0),
                              diffuseColor : new SFColor([0.117021,0.022394,0]),
                              specularColor : new SFColor([0.117021,0.117021,0.117021]),
                              emissiveColor : new SFColor([0.0744681,0.0744681,0.0744681]),
                              shininess : new SFFloat(0.574468)}))})),
                      geometry : new SFNode(
                        new IndexedFaceSet({
                          creaseAngle : new SFFloat(0.5),
                          coordIndex : new MFInt32([4,21,5,7,6,-1,6,7,1,20,0,-1,6,0,2,4,-1,8,18,9,10,11,-1,11,10,12,17,13,-1,14,8,11,13,-1,13,17,16,14,-1,17,12,15,16,-1,16,15,9,18,-1,0,20,19,2,-1,20,1,3,19,-1,19,3,5,21,-1,8,14,4,2,-1,18,8,2,19,-1,4,14,16,21,-1,16,18,19,21,-1]),
                          coord : new SFNode(
                            new Coordinate({
                              point : new MFVec3f([-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1,24.5052,1,1,24.5052,-1,1,26.5052,-1,1,26.5052,1,1,26.5052,-1,-1,26.5052,1,-1,24.5052,1,-1,24.5052,-1,-1,24.5237,0.941309,-1,26.5052,0.941308,-1,24.5237,0.941308,1,1,0.941023,1,-1,0.941023,1,1,0.941023,-1])}))}))})])}),

                new Transform({
                  DEF : new SFString("Tuer_AnimSound"),
                  scale : new SFVec3f([0.999993,0.999999,0.999993]),
                  center : new SFVec3f([-30.5078,5.43194,-18.8276]),
                  children : new MFNode([
                    new Group({
                      children : new MFNode([
                        new Group({
                          DEF : new SFString("open_door"),
                          children : new MFNode([
                            new TimeSensor({
                              DEF : new SFString("Time"),
                              cycleInterval : new SFTime(10),
                              stopTime : new SFTime(1)})])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedTransformTranslationInterp"),
                          key : new MFFloat([0,0.04,0.96,1]),
                          keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("UnnamedTransformRotationInterp"),
                          key : new MFFloat([0,0.04,0.16,0.86,0.96,1]),
                          keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,1.64979,0,1,0,1.64979,0,0,1,0,0,0,1,0])}),

                        new OrientationInterpolator({
                          DEF : new SFString("UnnamedShapeRotationInterp"),
                          key : new MFFloat([0,0.04,0.1,0.92,0.96,1]),
                          keyValue : new MFRotation([0.57735,-0.57735,0.57735,2.0944,0.522759,-0.522759,0.673385,1.95631,0.57735,-0.57735,0.57735,2.0944,0.57735,-0.57735,0.57735,2.0944,0.524697,-0.524697,0.670363,1.96048,0.57735,-0.57735,0.57735,2.0944])}),

                        new PositionInterpolator({
                          DEF : new SFString("UnnamedTransformCenterInterp"),
                          key : new MFFloat([0,0.04]),
                          keyValue : new MFVec3f([-30.5078,5.43194,-18.8276,-30.5078,5.43504,-19.2393])}),

                        new OrientationInterpolator({
                          DEF : new SFString("UnnamedShapeScaleOrientationInterp"),
                          key : new MFFloat([0,0.04]),
                          keyValue : new MFRotation([-1,0.0000055376,0.00000557843,0.00737289,-1,-0.00000641583,0.00000564175,0.00724239])})])}),

                    new TouchSensor({
                      DEF : new SFString("Touch")}),

                    new Transform({
                      DEF : new SFString("Tuerklinke"),
                      translation : new SFVec3f([0.0519834,0,0]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("Klinke"),
                          translation : new SFVec3f([-30.639,5.87077,-18.505]),
                          rotation : new SFRotation([0.57735,-0.57735,0.57735,2.0944]),
                          scale : new SFVec3f([0.897348,0.195632,0.122587]),
                          center : new SFVec3f([0.0744146,-0.506144,-0.0227777]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      ambientIntensity : new SFFloat(0),
                                      diffuseColor : new SFColor([0.691489,0.691489,0.691489]),
                                      specularColor : new SFColor([1,1,1]),
                                      shininess : new SFFloat(0.159574)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(3.14159),
                                  coordIndex : new MFInt32([5,3,2,4,-1,12,11,10,13,-1,2,3,10,11,-1,9,8,1,0,-1,3,1,8,10,-1,0,2,11,9,-1,15,12,13,14,-1,6,5,4,7,-1,7,4,2,0,-1,3,5,6,1,-1,6,7,0,1,-1,14,13,10,8,-1,11,12,15,9,-1,15,14,8,9,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.101571,-0.012592,0.096272,0.101571,-0.012592,-0.103728,0.0784915,-0.111403,0.100376,0.0784916,-0.111403,-0.0996237,-0.0887925,-0.111405,0.100376,-0.0887926,-0.111405,-0.0996237,-0.093096,-0.0125155,-0.103728,-0.093096,-0.0125155,0.096272,0.100341,-0.904158,-0.100809,0.100341,-0.904158,0.0991913,0.0789908,-0.806507,-0.100809,0.0789907,-0.806507,0.0991913,-0.0882932,-0.806509,0.0991913,-0.0882933,-0.806509,-0.100809,-0.094326,-0.908792,-0.100809,-0.094326,-0.908792,0.0991913])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-30.574,5.29324,-18.5155]),
                          rotation : new SFRotation([1,1.78814e-7,-1.78814e-7,1.5708]),
                          scale : new SFVec3f([0.205889,0.471041,1.20274]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("_1"),
                                      ambientIntensity : new SFFloat(0.28169),
                                      diffuseColor : new SFColor([0.755319,0.755319,0.755319]),
                                      specularColor : new SFColor([1,1,1]),
                                      emissiveColor : new SFColor([0.414894,0.414894,0.414894]),
                                      shininess : new SFFloat(0.159574)})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      DEF : new SFString("_2"),
                                      url : new MFString(["door2.png"])})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      rotation : new SFFloat(4.71239)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(3.14159),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([-0.1,0.1,-0.1,-0.1,-0.1,-0.1,-0.1,-0.1,0.1,-0.1,0.1,0.1])}))}))})])}),

                        new Transform({
                          translation : new SFVec3f([-30.574,5.29278,-18.5155]),
                          rotation : new SFRotation([1,1.78814e-7,-1.78814e-7,1.5708]),
                          scale : new SFVec3f([0.205889,0.471041,1.20731]),
                          children : new MFNode([
                            new Shape({
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("_1")})),
                                  texture : new SFNode(
                                    new ImageTexture({
                                      USE : new SFString("_2")})),
                                  textureTransform : new SFNode(
                                    new TextureTransform({
                                      rotation : new SFFloat(1.5708)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  creaseAngle : new SFFloat(3.14159),
                                  coordIndex : new MFInt32([0,1,2,3,-1]),
                                  texCoord : new SFNode(
                                    new TextureCoordinate({
                                      point : new MFVec2f([0,1,0,0,1,0,1,1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.1,0.1,0.1,0.1,-0.1,0.1,0.1,-0.1,-0.1,0.1,0.1,-0.1])}))}))})])})])}),

                    new Transform({
                      DEF : new SFString("Tuer_brett"),
                      translation : new SFVec3f([-29.5192,5.4317,-19.2538]),
                      rotation : new SFRotation([0,-1,0,1.5708]),
                      scale : new SFVec3f([0.424754,1.08903,0.0165043]),
                      center : new SFVec3f([-1.0035,-0.00275892,-0.00000153935]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  ambientIntensity : new SFFloat(1.2234),
                                  emissiveColor : new SFColor([0.404255,0.404255,0.404255]),
                                  shininess : new SFFloat(0)})),
                              texture : new SFNode(
                                new ImageTexture({
                                  url : new MFString(["door1.png"])})),
                              textureTransform : new SFNode(
                                new TextureTransform({
                                  scale : new SFVec2f([1.4,1])}))})),
                          geometry : new SFNode(
                            new Box({}))})])}),

                    new Sound({
                      DEF : new SFString("Sound1"),
                      location : new SFVec3f([-30.5078,5.43195,-18.8276]),
                      source : new SFNode(
                        new AudioClip({
                          DEF : new SFString("door_snd"),
                          description : new SFString("Start mit Trklick"),
                          url : new MFString(["door_snd.aiff"])}))})])}),

                new Viewpoint({
                  DEF : new SFString("VP1"),
                  description : new SFString("viewpoint1"),
                  position : new SFVec3f([-32.9477,5.71937,-19.2926]),
                  orientation : new SFRotation([0.0810581,0.991517,0.101609,4.48266])})])}),

            new ROUTE({
              fromNode : new SFString("Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("Time"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformTranslationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeRotationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedTransformCenterInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Time"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("UnnamedShapeScaleOrientationInterp"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Klinke"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedShapeScaleOrientationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Klinke"),
              toField : new SFString("set_scaleOrientation")}),

            new ROUTE({
              fromNode : new SFString("Touch"),
              fromField : new SFString("touchTime"),
              toNode : new SFString("door_snd"),
              toField : new SFString("set_startTime")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformTranslationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformRotationInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("UnnamedTransformCenterInterp"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Tuer_AnimSound"),
              toField : new SFString("set_center")})])}))});
console.log(X3D0.toXMLNode());
