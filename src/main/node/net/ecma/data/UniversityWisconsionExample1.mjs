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
var Group = require('./x3d.mjs');
var MetadataSet = require('./x3d.mjs');
var MetadataString = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var Switch = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Shape = require('./x3d.mjs');
var Appearance = require('./x3d.mjs');
var Material = require('./x3d.mjs');
var SFColor = require('./x3d.mjs');
var SFFloat = require('./x3d.mjs');
var Sphere = require('./x3d.mjs');
var LineSet = require('./x3d.mjs');
var MFInt32 = require('./x3d.mjs');
var ColorRGBA = require('./x3d.mjs');
var MFColorRGBA = require('./x3d.mjs');
var Coordinate = require('./x3d.mjs');
var MFVec3f = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var HAnimSite = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var ScalarInterpolator = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var ROUTE = require('./x3d.mjs');
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("4.0"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(3)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("BvhUniversityWisconsionExample1.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("BVH file conversion: *enter description here, short-sentence summaries preferred*")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("*enter name of original author here*")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("*enter date of initial version here*")}),

            new meta({
              name : new SFString("translated"),
              content : new SFString("2 September 2023")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Mon, 15 Sep 2025 05:21:02 GMT")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BvhUniversityWIsconsionExample1.bvh")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://TODO/UniversityWIsconsionExample1.bvh")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new WorldInfo({
              title : new SFString("BvhUniversityWisconsionExample1.x3d")}),

            new NavigationInfo({}),

            new Group({
              DEF : new SFString("BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("BvhToHAnimNameConversionTable"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("ROOT_Hips"),
                      reference : new SFString("ROOT"),
                      value : new MFString(["humanoid_root","sacrum"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("Chest"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["vl5","l5"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("Neck"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["Neck","vl5_to_Neck"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("Head"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["skullbase","skull"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("HeadSite"),
                      reference : new SFString("Site"),
                      value : new MFString(["skullbase_tip"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftCollar"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftCollar","vl5_to_LeftCollar"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftUpArm"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftUpArm","LeftCollar_to_LeftUpArm"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftLowArm"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftLowArm","LeftUpArm_to_LeftLowArm"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftHand"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftHand","LeftLowArm_to_LeftHand"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftHandSite"),
                      reference : new SFString("Site"),
                      value : new MFString(["LeftHand_tip"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightCollar"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightCollar","vl5_to_RightCollar"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightUpArm"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightUpArm","RightCollar_to_RightUpArm"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightLowArm"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightLowArm","RightUpArm_to_RightLowArm"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightHand"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightHand","RightLowArm_to_RightHand"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightHandSite"),
                      reference : new SFString("Site"),
                      value : new MFString(["RightHand_tip"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftUpLeg"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftUpLeg","humanoid_root_to_LeftUpLeg"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftLowLeg"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftLowLeg","LeftUpLeg_to_LeftLowLeg"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftFoot"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["LeftFoot","LeftLowLeg_to_LeftFoot"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("LeftFootSite"),
                      reference : new SFString("Site"),
                      value : new MFString(["LeftFoot_tip"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightUpLeg"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightUpLeg","humanoid_root_to_RightUpLeg"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightLowLeg"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightLowLeg","RightUpLeg_to_RightLowLeg"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightFoot"),
                      reference : new SFString("JOINT"),
                      value : new MFString(["RightFoot","RightLowLeg_to_RightFoot"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("RightFootSite"),
                      reference : new SFString("Site"),
                      value : new MFString(["RightFoot_tip"])}))})])}),

            new Transform({
              DEF : new SFString("InitialPositionScaled"),
              translation : new SFVec3f([0,1.244,0]),
              children : new MFNode([
                new Viewpoint({
                  description : new SFString("BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m"),
                  position : new SFVec3f([0,0,8])}),

                new Viewpoint({
                  description : new SFString("BvhUniversityWisconsionExample1 initial motion position"),
                  position : new SFVec3f([0.803,3.501,16.836])}),

                new Viewpoint({
                  description : new SFString("BvhUniversityWisconsionExample1 final motion position"),
                  position : new SFVec3f([0.781,3.51,16.647])})])}),

            new HAnimHumanoid({
              DEF : new SFString("BvhUniversityWisconsionExample1_ROOT_Hips"),
              name : new SFString("ROOT_Hips"),
              metadata : new MFNode([
                new MetadataSet({
                  name : new SFString("HAnimHumanoid.info"),
                  reference : new SFString("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorEmail"),
                      value : new MFString(["*TODO*"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("authorName"),
                      value : new MFString(["*TODO*"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("copyright"),
                      value : new MFString(["Copyright (c) 2023"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("humanoidVersion"),
                      value : new MFString(["*TODO*"])})),
                  value : new SFNode(
                    new MetadataString({
                      name : new SFString("usageDescription"),
                      value : new MFString(["*TODO*"])}))}),
              joints : new MFNode([
                new HAnimJoint({
                  DEF : new SFString("BvhUniversityWisconsionExample1_humanoid_root"),
                  name : new SFString("humanoid_root"),
                  translation : new SFVec3f([0.7849403,3.508388,8.680851]),
                  rotation : new SFRotation([-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198]),
                  scale : new SFVec3f([0.1,0.1,0.1]),
                  children : new MFNode([
                    new HAnimSegment({
                      DEF : new SFString("BvhUniversityWisconsionExample1_sacrum"),
                      name : new SFString("sacrum"),
                      children : new MFNode([
                        new Switch({
                          whichChoice : new SFInt32(0),
                          children : new MFNode([
                            new Group({
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum")}),

                                new Shape({
                                  DEF : new SFString("HAnimRootShape"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          DEF : new SFString("HAnimRootMaterial"),
                                          diffuseColor : new SFColor([0.8,0,0]),
                                          transparency : new SFFloat(0.3)}))})),
                                  geometry : new SFNode(
                                    new Sphere({
                                      DEF : new SFString("HAnimJointSphere"),
                                      radius : new SFFloat(0.254)}))})])}),

                            new Shape({
                              DEF : new SFString("HAnimJointShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("HAnimJointMaterial"),
                                      diffuseColor : new SFColor([0,0,0.8]),
                                      transparency : new SFFloat(0.3)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  USE : new SFString("HAnimJointSphere")}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                      color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0,0,0])}))}))}),

                            new Shape({
                              DEF : new SFString("HAnimSiteShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,0.5,0]),
                                      transparency : new SFFloat(0.3)}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  DEF : new SFString("DiamondIFS"),
                                  solid : new SFBool(false),
                                  creaseAngle : new SFFloat(0.5),
                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.254,0,-0.254,0,0,0,0,0.254,0.254,0,0,0,0,-0.254,0,-0.254,0])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      DEF : new SFString("HAnimSiteLineColorRGBA"),
                                      color : new MFColorRGBA([1,0.5,0,1,1,0.5,0,0.1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0,0,0,0,0])}))}))})])}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0,0,0,5.21,0])}))}))}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0,0,3.91,0,0])}))}))}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0,0,-3.91,0,0])}))}))})])}),

                    new HAnimJoint({
                      DEF : new SFString("BvhUniversityWisconsionExample1_vl5"),
                      name : new SFString("vl5"),
                      rotation : new SFRotation([0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436]),
                      center : new SFVec3f([0,5.21,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("BvhUniversityWisconsionExample1_l5"),
                          name : new SFString("l5"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([0,5.21,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint Chest vl5, HAnimSegment l5")}),
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0,0,0,18.65,0])}))}))})),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0,0,1.12,16.23,1.87])}))}))})),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0,0,-1.12,16.23,1.87])}))}))}))})])}),

                        new HAnimJoint({
                          DEF : new SFString("BvhUniversityWisconsionExample1_Neck"),
                          name : new SFString("Neck"),
                          rotation : new SFRotation([0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571]),
                          center : new SFVec3f([0,23.86,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("BvhUniversityWisconsionExample1_vl5_to_Neck"),
                              name : new SFString("vl5_to_Neck"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([0,23.86,0]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck")}),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})]),
                                  child : new SFNode(
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,0,5.45,0])}))}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("BvhUniversityWisconsionExample1_skullbase"),
                              name : new SFString("skullbase"),
                              rotation : new SFRotation([-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556]),
                              center : new SFVec3f([0,29.31,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_skull"),
                                  name : new SFString("skull"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([0,29.31,0]),
                                      children : new MFNode([
                                        new HAnimSite({
                                          DEF : new SFString("BvhUniversityWisconsionExample1_skull_tip"),
                                          name : new SFString("skull_tip"),
                                          translation : new SFVec3f([0,3.87,0]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite skull_tip")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,-3.87,0,0,0,0])}))}))})])}),

                                        new TouchSensor({
                                          description : new SFString("HAnimJoint Head skullbase, HAnimSegment skull")}),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("BvhUniversityWisconsionExample1_LeftCollar"),
                          name : new SFString("LeftCollar"),
                          rotation : new SFRotation([-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216]),
                          center : new SFVec3f([1.12,21.44,1.87]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar"),
                              name : new SFString("vl5_to_LeftCollar"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([1.12,21.44,1.87]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar")}),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})]),
                                  child : new SFNode(
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,5.54,0,0])}))}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("BvhUniversityWisconsionExample1_LeftUpArm"),
                              name : new SFString("LeftUpArm"),
                              rotation : new SFRotation([-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243]),
                              center : new SFVec3f([6.66,21.44,1.87]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"),
                                  name : new SFString("LeftCollar_to_LeftUpArm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([6.66,21.44,1.87]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm")}),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})]),
                                      child : new SFNode(
                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0,0,0,-11.96,0])}))}))}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowArm"),
                                  name : new SFString("LeftLowArm"),
                                  rotation : new SFRotation([-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941]),
                                  center : new SFVec3f([6.66,9.48,1.87]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"),
                                      name : new SFString("LeftUpArm_to_LeftLowArm"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([6.66,9.48,1.87]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm")}),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})]),
                                          child : new SFNode(
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0,0,0,-9.93,0])}))}))}))})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("BvhUniversityWisconsionExample1_LeftHand"),
                                      name : new SFString("LeftHand"),
                                      rotation : new SFRotation([0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886]),
                                      center : new SFVec3f([6.66,-0.45,1.87]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"),
                                          name : new SFString("LeftLowArm_to_LeftHand"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([6.66,-0.45,1.87]),
                                              children : new MFNode([
                                                new HAnimSite({
                                                  DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"),
                                                  name : new SFString("LeftLowArm_to_LeftHand_tip"),
                                                  translation : new SFVec3f([0,-7,0]),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite LeftLowArm_to_LeftHand_tip")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0,7,0,0,0,0])}))}))})])}),

                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand")}),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])})])})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("BvhUniversityWisconsionExample1_RightCollar"),
                          name : new SFString("RightCollar"),
                          rotation : new SFRotation([-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759]),
                          center : new SFVec3f([-1.12,21.44,1.87]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("BvhUniversityWisconsionExample1_vl5_to_RightCollar"),
                              name : new SFString("vl5_to_RightCollar"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-1.12,21.44,1.87]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar")}),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})]),
                                  child : new SFNode(
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,-6.07,0,0])}))}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("BvhUniversityWisconsionExample1_RightUpArm"),
                              name : new SFString("RightUpArm"),
                              rotation : new SFRotation([-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947]),
                              center : new SFVec3f([-7.19,21.44,1.87]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"),
                                  name : new SFString("RightCollar_to_RightUpArm"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-7.19,21.44,1.87]),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm")}),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})]),
                                      child : new SFNode(
                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0,0,0,0,-11.82,0])}))}))}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_RightLowArm"),
                                  name : new SFString("RightLowArm"),
                                  rotation : new SFRotation([-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355]),
                                  center : new SFVec3f([-7.19,9.62,1.87]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"),
                                      name : new SFString("RightUpArm_to_RightLowArm"),
                                      children : new MFNode([
                                        new Transform({
                                          translation : new SFVec3f([-7.19,9.62,1.87]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm")}),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})]),
                                          child : new SFNode(
                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,0,0,0,-10.65,0])}))}))}))})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("BvhUniversityWisconsionExample1_RightHand"),
                                      name : new SFString("RightHand"),
                                      rotation : new SFRotation([0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714]),
                                      center : new SFVec3f([-7.19,-1.03,1.87]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"),
                                          name : new SFString("RightLowArm_to_RightHand"),
                                          children : new MFNode([
                                            new Transform({
                                              translation : new SFVec3f([-7.19,-1.03,1.87]),
                                              children : new MFNode([
                                                new HAnimSite({
                                                  DEF : new SFString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"),
                                                  name : new SFString("RightLowArm_to_RightHand_tip"),
                                                  translation : new SFVec3f([0,-7,0]),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite RightLowArm_to_RightHand_tip")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0,7,0,0,0,0])}))}))})])}),

                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand")}),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      DEF : new SFString("BvhUniversityWisconsionExample1_LeftUpLeg"),
                      name : new SFString("LeftUpLeg"),
                      rotation : new SFRotation([0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567]),
                      center : new SFVec3f([3.91,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"),
                          name : new SFString("humanoid_root_to_LeftUpLeg"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([3.91,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg")}),
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0,0,0,-18.34,0])}))}))}))})])}),

                        new HAnimJoint({
                          DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg"),
                          name : new SFString("LeftLowLeg"),
                          rotation : new SFRotation([0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506]),
                          center : new SFVec3f([3.91,-18.34,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"),
                              name : new SFString("LeftUpLeg_to_LeftLowLeg"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([3.91,-18.34,0]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg")}),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})]),
                                  child : new SFNode(
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,0,-17.37,0])}))}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("BvhUniversityWisconsionExample1_LeftFoot"),
                              name : new SFString("LeftFoot"),
                              rotation : new SFRotation([1.00000000000036,0,0,0.0199134632110525]),
                              center : new SFVec3f([3.91,-35.71,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"),
                                  name : new SFString("LeftLowLeg_to_LeftFoot"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([3.91,-35.71,0]),
                                      children : new MFNode([
                                        new HAnimSite({
                                          DEF : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"),
                                          name : new SFString("LeftLowLeg_to_LeftFoot_tip"),
                                          translation : new SFVec3f([0,-3.46,0]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite LeftLowLeg_to_LeftFoot_tip")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,3.46,0,0,0,0])}))}))})])}),

                                        new TouchSensor({
                                          description : new SFString("HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot")}),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])})])})])})])}),

                    new HAnimJoint({
                      DEF : new SFString("BvhUniversityWisconsionExample1_RightUpLeg"),
                      name : new SFString("RightUpLeg"),
                      rotation : new SFRotation([-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261]),
                      center : new SFVec3f([-3.91,0,0]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"),
                          name : new SFString("humanoid_root_to_RightUpLeg"),
                          children : new MFNode([
                            new Transform({
                              translation : new SFVec3f([-3.91,0,0]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg")}),
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})]),
                              child : new SFNode(
                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0,0,0,-17.63,0])}))}))}))})])}),

                        new HAnimJoint({
                          DEF : new SFString("BvhUniversityWisconsionExample1_RightLowLeg"),
                          name : new SFString("RightLowLeg"),
                          rotation : new SFRotation([0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883]),
                          center : new SFVec3f([-3.91,-17.63,0]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"),
                              name : new SFString("RightUpLeg_to_RightLowLeg"),
                              children : new MFNode([
                                new Transform({
                                  translation : new SFVec3f([-3.91,-17.63,0]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg")}),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})]),
                                  child : new SFNode(
                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0,0,0,0,-17.14,0])}))}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("BvhUniversityWisconsionExample1_RightFoot"),
                              name : new SFString("RightFoot"),
                              rotation : new SFRotation([-1,0,0,0.446403006744384]),
                              center : new SFVec3f([-3.91,-34.77,0]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"),
                                  name : new SFString("RightLowLeg_to_RightFoot"),
                                  children : new MFNode([
                                    new Transform({
                                      translation : new SFVec3f([-3.91,-34.77,0]),
                                      children : new MFNode([
                                        new HAnimSite({
                                          DEF : new SFString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"),
                                          name : new SFString("RightLowLeg_to_RightFoot_tip"),
                                          translation : new SFVec3f([0,-3.75,0]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite RightLowLeg_to_RightFoot_tip")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0,3.75,0,0,0,0])}))}))})])}),

                                        new TouchSensor({
                                          description : new SFString("HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot")}),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])})])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_vl5")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_Neck")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_skullbase")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftCollar")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftUpArm")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowArm")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftHand")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightCollar")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightUpArm")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowArm")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightHand")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftUpLeg")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftFoot")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightUpLeg")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowLeg")}),

                new HAnimJoint({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightFoot")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_l5")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_vl5_to_Neck")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_skull")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_vl5_to_LeftCollar")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_vl5_to_RightCollar")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg")}),

                new HAnimSegment({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("BvhUniversityWisconsionExample1_humanoid_root_view"),
                  name : new SFString("humanoid_root_view"),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("BvhUniversityWisconsionExample1_humanoid_root_viewpoint"),
                      description : new SFString("BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center"),
                      position : new SFVec3f([0,0,80])})])})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_skull_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("BvhUniversityWisconsionExample1_humanoid_root_view")}))}),

            new Group({
              DEF : new SFString("BvhUniversityWisconsionExample1_MotionGroup"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("RealTimer"),
                  cycleInterval : new SFTime(0.067),
                  loop : new SFBool(true)}),

                new TimeSensor({
                  DEF : new SFString("StepTimer"),
                  enabled : new SFBool(false),
                  cycleInterval : new SFTime(2),
                  loop : new SFBool(true)}),

                new ScalarInterpolator({
                  DEF : new SFString("FrameStepper"),
                  key : new MFFloat([0,1,1]),
                  keyValue : new MFFloat([0,0,1])}),

                new PositionInterpolator({
                  DEF : new SFString("Interpolator0_humanoid_root"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFVec3f([0.803,3.501,8.836,0.781,3.51,8.647])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator1_humanoid_root"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.0118,-0.9911,-0.1325,2.8785,-0.0199,-0.993,-0.1163,2.9232])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator2_vl5"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.9093,-0.4082,0.0806,0.8073,0.9336,-0.3501,0.0768,0.824])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator3_Neck"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.9834,0.0677,0.1685,0.7761,0.9841,0.066,0.1649,0.7723])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator4_skullbase"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.9778,0.1629,-0.1317,0.736,-0.9794,0.1474,-0.1381,0.7342])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator5_LeftCollar"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.0626,0.7102,0.7012,0.2502,-0.0355,0.2109,0.9769,0.3411])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator6_LeftUpArm"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.1561,-0.2157,0.9639,1.7536,0.0022,-0.1597,0.9872,1.6521])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator7_LeftLowArm"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.9933,-0.0526,-0.103,1.6066,-0.9965,0.0822,0.0138,1.6744])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator8_LeftHand"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.0434,0.0003,0.9991,0.0121,0.4673,0.0029,0.8841,0.0138])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator9_RightCollar"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.0734,-0.5964,-0.7993,0.3057,-0.07,-0.9291,-0.3633,0.4091])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator10_RightUpArm"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.6801,-0.6074,-0.4106,2.0536,-0.765,-0.5303,-0.3654,1.9107])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator11_RightLowArm"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.9378,0.2739,0.2135,1.4058,-0.9433,0.2577,0.2091,1.3563])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator12_RightHand"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.4025,0.0061,-0.9154,0.0299,0.5037,0.0087,-0.8638,0.0329])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator13_LeftUpLeg"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.8595,-0.1039,0.5004,0.4748,0.7784,-0.0864,0.6217,0.3536])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator14_LeftLowLeg"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.9184,0.2378,0.3162,0.9291,0.9762,0.1432,0.1627,1.0525])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator15_LeftFoot"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-1,0,0,0.0199,1,0,0,0.0286])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator16_RightUpLeg"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.5548,-0.0795,-0.8282,0.3423,-0.5234,-0.0778,-0.8485,0.3468])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator17_RightLowLeg"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0.9694,-0.234,0.0739,0.9755,0.9797,-0.1864,0.0732,0.9707])}),

                new OrientationInterpolator({
                  DEF : new SFString("Interpolator18_RightFoot"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-1,0,0,0.418,-1,0,0,0.4526])})])}),

            new ROUTE({
              fromNode : new SFString("StepTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("FrameStepper"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator0_humanoid_root"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator0_humanoid_root"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator0_humanoid_root"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator1_humanoid_root"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator1_humanoid_root"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator1_humanoid_root"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator2_vl5"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator2_vl5"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator2_vl5"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator3_Neck"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator3_Neck"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator3_Neck"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_Neck"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator4_skullbase"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator4_skullbase"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator4_skullbase"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator5_LeftCollar"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator5_LeftCollar"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator5_LeftCollar"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftCollar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator6_LeftUpArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator6_LeftUpArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator6_LeftUpArm"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftUpArm"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator7_LeftLowArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator7_LeftLowArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator7_LeftLowArm"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftLowArm"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator8_LeftHand"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator8_LeftHand"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator8_LeftHand"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftHand"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator9_RightCollar"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator9_RightCollar"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator9_RightCollar"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightCollar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator10_RightUpArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator10_RightUpArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator10_RightUpArm"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightUpArm"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator11_RightLowArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator11_RightLowArm"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator11_RightLowArm"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightLowArm"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator12_RightHand"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator12_RightHand"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator12_RightHand"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightHand"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator13_LeftUpLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator13_LeftUpLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator13_LeftUpLeg"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftUpLeg"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator14_LeftLowLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator14_LeftLowLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator14_LeftLowLeg"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftLowLeg"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator15_LeftFoot"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator15_LeftFoot"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator15_LeftFoot"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_LeftFoot"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator16_RightUpLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator16_RightUpLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator16_RightUpLeg"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightUpLeg"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator17_RightLowLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator17_RightLowLeg"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator17_RightLowLeg"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightLowLeg"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RealTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Interpolator18_RightFoot"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("FrameStepper"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("Interpolator18_RightFoot"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Interpolator18_RightFoot"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("BvhUniversityWisconsionExample1_RightFoot"),
              toField : new SFString("set_rotation")})])}))});
console.log(X3D0.toXMLNode());
