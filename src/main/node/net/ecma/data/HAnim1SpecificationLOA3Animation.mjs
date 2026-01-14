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
var Background = require('./x3d.mjs');
var MFColor = require('./x3d.mjs');
var NavigationInfo = require('./x3d.mjs');
var Group = require('./x3d.mjs');
var WorldInfo = require('./x3d.mjs');
var MFString = require('./x3d.mjs');
var Viewpoint = require('./x3d.mjs');
var SFVec3f = require('./x3d.mjs');
var SFRotation = require('./x3d.mjs');
var HAnimHumanoid = require('./x3d.mjs');
var HAnimJoint = require('./x3d.mjs');
var HAnimSegment = require('./x3d.mjs');
var TouchSensor = require('./x3d.mjs');
var Transform = require('./x3d.mjs');
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
var HAnimSite = require('./x3d.mjs');
var IndexedFaceSet = require('./x3d.mjs');
var SFBool = require('./x3d.mjs');
var Anchor = require('./x3d.mjs');
var LOD = require('./x3d.mjs');
var MFFloat = require('./x3d.mjs');
var TimeSensor = require('./x3d.mjs');
var SFTime = require('./x3d.mjs');
var PositionInterpolator = require('./x3d.mjs');
var OrientationInterpolator = require('./x3d.mjs');
var MFRotation = require('./x3d.mjs');
var Inline = require('./x3d.mjs');
var ProximitySensor = require('./x3d.mjs');
var Box = require('./x3d.mjs');
var IndexedLineSet = require('./x3d.mjs');
var Text = require('./x3d.mjs');
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
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimSpecificationLOA3Animation.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationExampleChangeLog.txt")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 April 2013")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("Tue, 09 Sep 2025 19:39:08 GMT")}),

            new meta({
              name : new SFString("error"),
              content : new SFString("Legacy model, not valid as X3D4 HAnim version 2.0 since HAnim version 1.0 has significant differences and is no longer directly supported")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3MotionH3DViewer.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3MotionInstantReality.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3MotionOctagaVS.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3MotionView3dscene.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA1.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA2.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("images/BonesAllSkeletonFrontViewLOA3.png")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Matthew T. Beitler, Joe D. Williams, Don Brutzman")}),

            new meta({
              name : new SFString("translator"),
              content : new SFString("Don Brutzman and Joe Williams")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit")})])})),
      Scene : new SFNode(
        new Scene({
          children : new MFNode([
            new Background({
              skyColor : new MFColor([0.3,0.3,0.3])}),

            new NavigationInfo({}),

            new Group({
              DEF : new SFString("Original_WorldInfo"),
              children : new MFNode([
                new WorldInfo({
                  title : new SFString("HANIM 200x Default Joint Centers, LOA3"),
                  info : new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "])})])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Front"),
              position : new SFVec3f([0,0.4,4]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Front Close"),
              position : new SFVec3f([0,0.8,2]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Front Closer"),
              position : new SFVec3f([0,1.2,1]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Front Face"),
              position : new SFVec3f([0,1.63,1]),
              centerOfRotation : new SFVec3f([0,1.5,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Right Side"),
              position : new SFVec3f([2.6,0.8,0]),
              orientation : new SFRotation([0,1,0,1.5708]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Right Side Close"),
              position : new SFVec3f([1,0.8,0.5]),
              orientation : new SFRotation([0,1,0,1.2]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Left Side Close"),
              position : new SFVec3f([-1,0.8,0.5]),
              orientation : new SFRotation([0,1,0,-1.2]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Left Side"),
              position : new SFVec3f([-2.6,0.8,0]),
              orientation : new SFRotation([0,1,0,-1.5708]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new Viewpoint({
              description : new SFString("Humanoid LOA 3 Top"),
              position : new SFVec3f([0,3.5,0]),
              orientation : new SFRotation([1,0,0,-1.5708]),
              centerOfRotation : new SFVec3f([0,0.9149,0.0016])}),

            new HAnimHumanoid({
              DEF : new SFString("hanim_humanoid"),
              name : new SFString("humanoid"),
              info : new MFString(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]),
              version : new SFString("1.0"),
              joints : new MFNode([
                new HAnimJoint({
                  DEF : new SFString("hanim_humanoid_root"),
                  name : new SFString("humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  children : new MFNode([
                    new HAnimSegment({
                      DEF : new SFString("hanim_sacrum"),
                      name : new SFString("sacrum"),
                      children : new MFNode([
                        new TouchSensor({
                          description : new SFString("HAnimJoint HumanoidRoot, HAnimSegment sacrum")}),

                        new Transform({
                          translation : new SFVec3f([0,0.824,0.0277]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("HAnimJointShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("HAnimJointAppearance"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,0.5,0]),
                                      transparency : new SFFloat(0.5)}))})),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.006)}))}))}),

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
                                  point : new MFVec3f([0,0.824,0.0277,0,0.9149,0.0016])}))}))}),

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776])}))}))})])}),

                    new HAnimJoint({
                      DEF : new SFString("hanim_sacroiliac"),
                      name : new SFString("sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("hanim_pelvis"),
                          name : new SFString("pelvis"),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint sacroiliac, HAnimSegment pelvis")}),

                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("HAnimJointShape")}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      DEF : new SFString("HAnimSiteLineColorRGBA"),
                                      color : new MFColorRGBA([1,0,0,1,1,0,0,0.1])})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257])}))}))}),

                            new HAnimSite({
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              name : new SFString("r_iliocristale_pt"),
                              translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_iliocristale")}),

                                new Shape({
                                  DEF : new SFString("HAnimSiteShape"),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))})),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("DiamondIFS"),
                                      solid : new SFBool(false),
                                      creaseAngle : new SFFloat(0.5),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])}))}))})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              name : new SFString("r_trochanterion_pt"),
                              translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_trochanterion")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              name : new SFString("l_iliocristale_pt"),
                              translation : new SFVec3f([0.1612,1.0537,0.0008]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_iliocristale")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              name : new SFString("l_trochanterion_pt"),
                              translation : new SFVec3f([0.1677,0.8336,0.0303]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_trochanterion")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_r_asis_pt"),
                              name : new SFString("r_asis_pt"),
                              translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_asis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_l_asis_pt"),
                              name : new SFString("l_asis_pt"),
                              translation : new SFVec3f([0.0925,0.9983,0.1052]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_asis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_r_psis_pt"),
                              name : new SFString("r_psis_pt"),
                              translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_psis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_l_psis_pt"),
                              name : new SFString("l_psis_pt"),
                              translation : new SFVec3f([0.0774,1.019,-0.1151]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_psis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_crotch_pt"),
                              name : new SFString("crotch_pt"),
                              translation : new SFVec3f([0.0034,0.8266,0.0257]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite crotch")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_l_hip"),
                          name : new SFString("l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_l_thigh"),
                              name : new SFString("l_thigh"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint l_hip, HAnimSegment l_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])}))}))}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  name : new SFString("l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_knee_crease")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_femoral_lateral_epicn_pt"),
                                  name : new SFString("l_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_lateral_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_l_femoral_medial_epicn_pt"),
                                  name : new SFString("l_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_medial_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_l_knee"),
                              name : new SFString("l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_l_calf"),
                                  name : new SFString("l_calf"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint l_knee, HAnimSegment l_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")}))}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])}))}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_l_ankle"),
                                  name : new SFString("l_ankle"),
                                  rotation : new SFRotation([-0.999999999999999,0,0,0.486193023827777]),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_l_hindfoot"),
                                      name : new SFString("l_hindfoot"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint l_ankle, HAnimSegment l_hindfoot")}),

                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])}))}))}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          name : new SFString("l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_lateral_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          name : new SFString("l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_medial_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          name : new SFString("l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_sphyrion")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_calcaneous_post_pt"),
                                          name : new SFString("l_calcaneous_post_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_calcaneous_post")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("hanim_l_subtalar"),
                                      name : new SFString("l_subtalar"),
                                      center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("hanim_l_midproximal"),
                                          name : new SFString("l_midproximal"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint l_subtalar, HAnimSegment l_midproximal")}),

                                            new Transform({
                                              translation : new SFVec3f([0.1086,0.0001,-0.0368]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])}))}))})])}),

                                        new HAnimJoint({
                                          DEF : new SFString("hanim_l_midtarsal"),
                                          name : new SFString("l_midtarsal"),
                                          center : new SFVec3f([0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              DEF : new SFString("hanim_l_middistal"),
                                              name : new SFString("l_middistal"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint l_midtarsal, HAnimSegment l_middistal")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.1086,0.0001,0.0368]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762])}))}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])}))}))}),

                                                new HAnimSite({
                                                  DEF : new SFString("hanim_l_metatarsal_pha1_pt"),
                                                  name : new SFString("l_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([0.0816,0.0232,0.0106]),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite l_metatarsal_pha1")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              DEF : new SFString("hanim_l_metatarsal"),
                                              name : new SFString("l_metatarsal"),
                                              rotation : new SFRotation([-1,0,0,0.270107235459875]),
                                              center : new SFVec3f([0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  DEF : new SFString("hanim_l_forefoot"),
                                                  name : new SFString("l_forefoot"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.1086,0,0.0762]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476])}))}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928])}))}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433])}))}))}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_l_forefoot_tip"),
                                                      name : new SFString("l_forefoot_tip"),
                                                      translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_l_metatarsal_pha5_pt"),
                                                      name : new SFString("l_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([0.1825,0.007,0.0928]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_metatarsal_pha5")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_l_digit2_pt"),
                                                      name : new SFString("l_digit2_pt"),
                                                      translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_digit2")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_r_hip"),
                          name : new SFString("r_hip"),
                          rotation : new SFRotation([0.999999999999999,0,0,0.486193023827777]),
                          center : new SFVec3f([-0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_r_thigh"),
                              name : new SFString("r_thigh"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint r_hip, HAnimSegment r_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([-0.0961,0.9124,-0.0001]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])}))}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])}))}))}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  name : new SFString("r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_knee_crease")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_femoral_lateral_epicn_pt"),
                                  name : new SFString("r_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_lateral_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  DEF : new SFString("hanim_r_femoral_medial_epicn_pt"),
                                  name : new SFString("r_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_medial_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_r_knee"),
                              name : new SFString("r_knee"),
                              rotation : new SFRotation([1,0,0,1.05341821829351]),
                              center : new SFVec3f([-0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_r_calf"),
                                  name : new SFString("r_calf"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint r_knee, HAnimSegment r_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([-0.104,0.4867,0.0308]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")}))}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])}))}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_r_ankle"),
                                  name : new SFString("r_ankle"),
                                  rotation : new SFRotation([-0.999999999999999,0,0,0.486193023827777]),
                                  center : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_r_hindfoot"),
                                      name : new SFString("r_hindfoot"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint r_ankle, HAnimSegment r_hindfoot")}),

                                        new Transform({
                                          translation : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])}))}))}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          name : new SFString("r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_lateral_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          name : new SFString("r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_medial_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          name : new SFString("r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_sphyrion")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_calcaneous_post_pt"),
                                          name : new SFString("r_calcaneous_post_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_calcaneous_post")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("hanim_r_subtalar"),
                                      name : new SFString("r_subtalar"),
                                      center : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("hanim_r_midproximal"),
                                          name : new SFString("r_midproximal"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint r_subtalar, HAnimSegment r_midproximal")}),

                                            new Transform({
                                              translation : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])}))}))})])}),

                                        new HAnimJoint({
                                          DEF : new SFString("hanim_r_midtarsal"),
                                          name : new SFString("r_midtarsal"),
                                          center : new SFVec3f([-0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              DEF : new SFString("hanim_r_middistal"),
                                              name : new SFString("r_middistal"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint r_midtarsal, HAnimSegment r_middistal")}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.1086,0.0001,0.0368]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])}))}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])}))}))}),

                                                new HAnimSite({
                                                  DEF : new SFString("hanim_r_metatarsal_pha1_pt"),
                                                  name : new SFString("r_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([-0.0521,0.026,0.0127]),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite r_metatarsal_pha1")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              DEF : new SFString("hanim_r_metatarsal"),
                                              name : new SFString("r_metatarsal"),
                                              rotation : new SFRotation([-1,0,0,0.270107235459875]),
                                              center : new SFVec3f([-0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  DEF : new SFString("hanim_r_forefoot"),
                                                  name : new SFString("r_forefoot"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.1086,0,0.0762]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145])}))}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])}))}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])}))}))}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_r_forefoot_tip"),
                                                      name : new SFString("r_forefoot_tip"),
                                                      translation : new SFVec3f([-0.1043,0.0227,0.145]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_r_metatarsal_pha5_pt"),
                                                      name : new SFString("r_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([-0.1523,0.0166,0.0895]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_metatarsal_pha5")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      DEF : new SFString("hanim_r_digit2_pt"),
                                                      name : new SFString("r_digit2_pt"),
                                                      translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_digit2")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      DEF : new SFString("hanim_vl5"),
                      name : new SFString("vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      children : new MFNode([
                        new HAnimSegment({
                          DEF : new SFString("hanim_l5"),
                          name : new SFString("l5"),
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint vl5, HAnimSegment l5")}),

                            new Transform({
                              translation : new SFVec3f([0.0028,1.0568,-0.0776]),
                              child : new SFNode(
                                new Shape({
                                  USE : new SFString("HAnimJointShape")}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])}))}))}),

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])}))}))}),

                            new HAnimSite({
                              DEF : new SFString("hanim_waist_preferred_post_pt"),
                              name : new SFString("waist_preferred_post_pt"),
                              translation : new SFVec3f([0,1.0915,-0.1091]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite waist_preferred_post")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              DEF : new SFString("hanim_navel_pt"),
                              name : new SFString("navel_pt"),
                              translation : new SFVec3f([0.0069,1.0966,0.1017]),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite navel")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          DEF : new SFString("hanim_vl4"),
                          name : new SFString("vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          children : new MFNode([
                            new HAnimSegment({
                              DEF : new SFString("hanim_l4"),
                              name : new SFString("l4"),
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint vl4, HAnimSegment l4")}),

                                new Transform({
                                  translation : new SFVec3f([0.0035,1.0925,-0.0787]),
                                  child : new SFNode(
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")}))}),

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])}))}))})])}),

                            new HAnimJoint({
                              DEF : new SFString("hanim_vl3"),
                              name : new SFString("vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              children : new MFNode([
                                new HAnimSegment({
                                  DEF : new SFString("hanim_l3"),
                                  name : new SFString("l3"),
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint vl3, HAnimSegment l3")}),

                                    new Transform({
                                      translation : new SFVec3f([0.0041,1.1276,-0.0796]),
                                      child : new SFNode(
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")}))}),

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])}))}))})])}),

                                new HAnimJoint({
                                  DEF : new SFString("hanim_vl2"),
                                  name : new SFString("vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      DEF : new SFString("hanim_l2"),
                                      name : new SFString("l2"),
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint vl2, HAnimSegment l2")}),

                                        new Transform({
                                          translation : new SFVec3f([0.0045,1.1546,-0.08]),
                                          child : new SFNode(
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])}))}))}),

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])}))}))}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_r_rib10_pt"),
                                          name : new SFString("r_rib10_pt"),
                                          translation : new SFVec3f([-0.0711,1.1941,0.1016]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_rib10")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_l_rib10_pt"),
                                          name : new SFString("l_rib10_pt"),
                                          translation : new SFVec3f([0.0871,1.1925,0.0992]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_rib10")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          DEF : new SFString("hanim_rib10_midspine_pt"),
                                          name : new SFString("rib10_midspine_pt"),
                                          translation : new SFVec3f([0.0049,1.1908,-0.1113]),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite rib10_midspine")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      DEF : new SFString("hanim_vl1"),
                                      name : new SFString("vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          DEF : new SFString("hanim_l1"),
                                          name : new SFString("l1"),
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint vl1, HAnimSegment l1")}),

                                            new Transform({
                                              translation : new SFVec3f([0.0048,1.1912,-0.0805]),
                                              child : new SFNode(
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")}))}),

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])}))}))})])}),

                                        new HAnimJoint({
                                          DEF : new SFString("hanim_vt12"),
                                          name : new SFString("vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              DEF : new SFString("hanim_t12"),
                                              name : new SFString("t12"),
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint vt12, HAnimSegment t12")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.0051,1.2278,-0.0808]),
                                                  child : new SFNode(
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")}))}),

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])}))}))})])}),

                                            new HAnimJoint({
                                              DEF : new SFString("hanim_vt11"),
                                              name : new SFString("vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  DEF : new SFString("hanim_t11"),
                                                  name : new SFString("t11"),
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint vt11, HAnimSegment t11")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0053,1.2679,-0.081]),
                                                      child : new SFNode(
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")}))}),

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])}))}))})])}),

                                                new HAnimJoint({
                                                  DEF : new SFString("hanim_vt10"),
                                                  name : new SFString("vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      DEF : new SFString("hanim_t10"),
                                                      name : new SFString("t10"),
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimJoint vt10, HAnimSegment t10")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                          child : new SFNode(
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")}))}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])}))}))}),

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])}))}))}),

                                                        new HAnimSite({
                                                          DEF : new SFString("hanim_substernale_pt"),
                                                          name : new SFString("substernale_pt"),
                                                          translation : new SFVec3f([0.0085,1.2995,0.1147]),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite substernale")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      DEF : new SFString("hanim_vt9"),
                                                      name : new SFString("vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          DEF : new SFString("hanim_t9"),
                                                          name : new SFString("t9"),
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimJoint vt9, HAnimSegment t9")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                              child : new SFNode(
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])}))}))}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])}))}))}),

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])}))}))}),

                                                            new HAnimSite({
                                                              DEF : new SFString("hanim_r_thelion_pt"),
                                                              name : new SFString("r_thelion_pt"),
                                                              translation : new SFVec3f([-0.0736,1.3385,0.1217]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_thelion")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                            new HAnimSite({
                                                              DEF : new SFString("hanim_l_thelion_pt"),
                                                              name : new SFString("l_thelion_pt"),
                                                              translation : new SFVec3f([0.0918,1.3382,0.1192]),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_thelion")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          DEF : new SFString("hanim_vt8"),
                                                          name : new SFString("vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              DEF : new SFString("hanim_t8"),
                                                              name : new SFString("t8"),
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimJoint vt8, HAnimSegment t8")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                                  child : new SFNode(
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])}))}))})])}),

                                                            new HAnimJoint({
                                                              DEF : new SFString("hanim_vt7"),
                                                              name : new SFString("vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  DEF : new SFString("hanim_t7"),
                                                                  name : new SFString("t7"),
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimJoint vt7, HAnimSegment t7")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                      child : new SFNode(
                                                                        new Shape({
                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new LineSet({
                                                                          vertexCount : new MFInt32([2]),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])}))}))})])}),

                                                                new HAnimJoint({
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  name : new SFString("vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      DEF : new SFString("hanim_t6"),
                                                                      name : new SFString("t6"),
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimJoint vt6, HAnimSegment t6")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                          child : new SFNode(
                                                                            new Shape({
                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new LineSet({
                                                                              vertexCount : new MFInt32([2]),
                                                                              color : new SFNode(
                                                                                new ColorRGBA({
                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])}))}))})])}),

                                                                    new HAnimJoint({
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      name : new SFString("vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          DEF : new SFString("hanim_t5"),
                                                                          name : new SFString("t5"),
                                                                          children : new MFNode([
                                                                            new TouchSensor({
                                                                              description : new SFString("HAnimJoint vt5, HAnimSegment t5")}),

                                                                            new Transform({
                                                                              translation : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                              child : new SFNode(
                                                                                new Shape({
                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new LineSet({
                                                                                  vertexCount : new MFInt32([2]),
                                                                                  color : new SFNode(
                                                                                    new ColorRGBA({
                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])}))}))})])}),

                                                                        new HAnimJoint({
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          name : new SFString("vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              DEF : new SFString("hanim_t4"),
                                                                              name : new SFString("t4"),
                                                                              children : new MFNode([
                                                                                new TouchSensor({
                                                                                  description : new SFString("HAnimJoint vt4, HAnimSegment t4")}),

                                                                                new Transform({
                                                                                  translation : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                                  child : new SFNode(
                                                                                    new Shape({
                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new LineSet({
                                                                                      vertexCount : new MFInt32([2]),
                                                                                      color : new SFNode(
                                                                                        new ColorRGBA({
                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])}))}))})])}),

                                                                            new HAnimJoint({
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              name : new SFString("vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  DEF : new SFString("hanim_t3"),
                                                                                  name : new SFString("t3"),
                                                                                  children : new MFNode([
                                                                                    new TouchSensor({
                                                                                      description : new SFString("HAnimJoint vt3, HAnimSegment t3")}),

                                                                                    new Transform({
                                                                                      translation : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                      child : new SFNode(
                                                                                        new Shape({
                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new LineSet({
                                                                                          vertexCount : new MFInt32([2]),
                                                                                          color : new SFNode(
                                                                                            new ColorRGBA({
                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])}))}))})])}),

                                                                                new HAnimJoint({
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  name : new SFString("vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      DEF : new SFString("hanim_t2"),
                                                                                      name : new SFString("t2"),
                                                                                      children : new MFNode([
                                                                                        new TouchSensor({
                                                                                          description : new SFString("HAnimJoint vt2, HAnimSegment t2")}),

                                                                                        new Transform({
                                                                                          translation : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                          child : new SFNode(
                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new LineSet({
                                                                                              vertexCount : new MFInt32([2]),
                                                                                              color : new SFNode(
                                                                                                new ColorRGBA({
                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])}))}))})])}),

                                                                                    new HAnimJoint({
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      name : new SFString("vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          name : new SFString("t1"),
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("HAnimJoint vt1, HAnimSegment t1")}),

                                                                                            new Transform({
                                                                                              translation : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                              child : new SFNode(
                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])}))}))}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])}))}))}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])}))}))}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])}))}))}),

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])}))}))}),

                                                                                            new HAnimSite({
                                                                                              DEF : new SFString("hanim_suprasternale_pt"),
                                                                                              name : new SFString("suprasternale_pt"),
                                                                                              translation : new SFVec3f([0.0084,1.4714,0.0551]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite suprasternale")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              DEF : new SFString("hanim_cervicale_pt"),
                                                                                              name : new SFString("cervicale_pt"),
                                                                                              translation : new SFVec3f([0.0064,1.52,-0.0815]),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite cervicale")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                        new HAnimJoint({
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          name : new SFString("vc7"),
                                                                                          rotation : new SFRotation([-0.999999999999996,0,0,0.222164034843446]),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              name : new SFString("c7"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint vc7, HAnimSegment c7")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                                  child : new SFNode(
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])}))}))}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                                  name : new SFString("r_neck_base_pt"),
                                                                                                  translation : new SFVec3f([-0.0419,1.5149,-0.022]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_neck_base")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                                  name : new SFString("l_neck_base_pt"),
                                                                                                  translation : new SFVec3f([0.0646,1.5141,-0.038]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_neck_base")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              name : new SFString("vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  DEF : new SFString("hanim_c6"),
                                                                                                  name : new SFString("c6"),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint vc6, HAnimSegment c6")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                      child : new SFNode(
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  name : new SFString("vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      DEF : new SFString("hanim_c5"),
                                                                                                      name : new SFString("c5"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint vc5, HAnimSegment c5")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      name : new SFString("vc4"),
                                                                                                      rotation : new SFRotation([1,0,0,0.302520108222961]),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          DEF : new SFString("hanim_c4"),
                                                                                                          name : new SFString("c4"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint vc4, HAnimSegment c4")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          name : new SFString("vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              DEF : new SFString("hanim_c3"),
                                                                                                              name : new SFString("c3"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint vc3, HAnimSegment c3")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              name : new SFString("vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_c2"),
                                                                                                                  name : new SFString("c2"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint vc2, HAnimSegment c2")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_c1"),
                                                                                                                      name : new SFString("c1"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint vc1, HAnimSegment c1")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      rotation : new SFRotation([-1.00000000000001,0,0,0.231096035769597]),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          name : new SFString("skull"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint skullbase, HAnimSegment skull")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033])}))}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_skull_tip"),
                                                                                                                              name : new SFString("skull_tip"),
                                                                                                                              translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite skull_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              name : new SFString("sellion_pt"),
                                                                                                                              translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite sellion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              name : new SFString("r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_infraorbitale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              name : new SFString("l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_infraorbitale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              name : new SFString("supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite supramenton")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              name : new SFString("r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_tragion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              name : new SFString("r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_gonion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              name : new SFString("l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_tragion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              name : new SFString("l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_gonion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              name : new SFString("nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite nuchale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          rotation : new SFRotation([-0.999999999999999,0,0,0.277705039416179]),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_eyeball"),
                                                                                                                              name : new SFString("l_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          DEF : new SFString("HAnimSiteViewpointLineColorRGBA"),
                                                                                                                                          color : new MFColorRGBA([0,0,1,1,0,0,1,0.1])})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_eyeball_site_view"),
                                                                                                                                  name : new SFString("l_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_l_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("l_eyeball_site_viewpoint looking forward"),
                                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593])}),

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite Viewpoint hanim_l_eyeball_site_view"),
                                                                                                                                      url : new MFString(["#hanim_l_eyeball_site_viewpoint"]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new LOD({
                                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new WorldInfo({
                                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                                            new Shape({
                                                                                                                                              DEF : new SFString("HAnimSiteViewpointShape"),
                                                                                                                                              appearance : new SFNode(
                                                                                                                                                new Appearance({
                                                                                                                                                  material : new SFNode(
                                                                                                                                                    new Material({
                                                                                                                                                      diffuseColor : new SFColor([0,0,1]),
                                                                                                                                                      transparency : new SFFloat(0.6)}))})),
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new IndexedFaceSet({
                                                                                                                                                  DEF : new SFString("SiteViewpointDiamondIFS"),
                                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                                  coord : new SFNode(
                                                                                                                                                    new Coordinate({
                                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))}))})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_eyelid"),
                                                                                                                              name : new SFString("l_eyelid"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_eyebrow"),
                                                                                                                              name : new SFString("l_eyebrow"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          rotation : new SFRotation([-0.999999999999999,0,0,0.277705039416179]),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_eyeball"),
                                                                                                                              name : new SFString("r_eyeball"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_eyeball_site_view"),
                                                                                                                                  name : new SFString("r_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([-0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_r_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("r_eyeball_site_viewpoint looking forward"),
                                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593])}),

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite Viewpoint hanim_r_eyeball_site_view"),
                                                                                                                                      url : new MFString(["#hanim_r_eyeball_site_viewpoint"]),
                                                                                                                                      children : new MFNode([
                                                                                                                                        new LOD({
                                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                                          children : new MFNode([
                                                                                                                                            new WorldInfo({
                                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                                            new Shape({
                                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_eyelid"),
                                                                                                                              name : new SFString("r_eyelid"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_eyebrow"),
                                                                                                                              name : new SFString("r_eyebrow"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1.63,0.015]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_jaw"),
                                                                                                                              name : new SFString("jaw"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint temporomandibular, HAnimSegment jaw")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0,1.63,0.015]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,0.045,1.63,0])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,-0.045,1.63,0])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_l_site_pt"),
                                                                                                                                  name : new SFString("temporomandibular_l_site_pt"),
                                                                                                                                  translation : new SFVec3f([0.045,1.63,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_l_site")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_r_site_pt"),
                                                                                                                                  name : new SFString("temporomandibular_r_site_pt"),
                                                                                                                                  translation : new SFVec3f([-0.045,1.63,0]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_r_site")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          rotation : new SFRotation([0,0,1.00000000000003,0.108042894183947]),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              DEF : new SFString("hanim_l_clavicle"),
                                                                                              name : new SFString("l_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                                  child : new SFNode(
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])}))}))}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_l_clavicale_pt"),
                                                                                                  name : new SFString("l_clavicale_pt"),
                                                                                                  translation : new SFVec3f([0.0271,1.4943,0.0394]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_clavicale")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_l_acromion_pt"),
                                                                                                  name : new SFString("l_acromion_pt"),
                                                                                                  translation : new SFVec3f([0.2032,1.476,-0.049]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_acromion")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_l_axilla_ant_pt"),
                                                                                                  name : new SFString("l_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([0.1777,1.4065,-0.0075]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_ant")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_l_axilla_post_pt"),
                                                                                                  name : new SFString("l_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([0.1706,1.4072,-0.0875]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_post")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  DEF : new SFString("hanim_l_scapula"),
                                                                                                  name : new SFString("l_scapula"),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                      child : new SFNode(
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  rotation : new SFRotation([0,0,1,0.950777468818762]),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      DEF : new SFString("hanim_l_upperarm"),
                                                                                                      name : new SFString("l_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint l_shoulder, HAnimSegment l_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])}))}))}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          DEF : new SFString("hanim_l_humeral_lateral_epicn_pt"),
                                                                                                          name : new SFString("l_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_humeral_lateral_epicn")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      rotation : new SFRotation([-1,0,0,0.297117959005863]),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          DEF : new SFString("hanim_l_forearm"),
                                                                                                          name : new SFString("l_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint l_elbow, HAnimSegment l_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                              name : new SFString("l_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radial_styloid")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                              name : new SFString("l_olecranon_pt"),
                                                                                                              translation : new SFVec3f([0.1962,1.1375,-0.1123]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_olecranon")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_l_humeral_medial_epicn_pt"),
                                                                                                              name : new SFString("l_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_humeral_medial_epicn")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                              name : new SFString("l_radiale_pt"),
                                                                                                              translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radiale")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          DEF : new SFString("hanim_l_wrist"),
                                                                                                          name : new SFString("l_wrist"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              DEF : new SFString("hanim_l_hand"),
                                                                                                              name : new SFString("l_hand"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint l_wrist, HAnimSegment l_hand")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45])}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha2_pt"),
                                                                                                                  name : new SFString("l_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha2")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                                  name : new SFString("l_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([0.2142,0.8529,-0.0648]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_ulnar_styloid")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha5_pt"),
                                                                                                                  name : new SFString("l_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha5")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_l_hand_front_view"),
                                                                                                                  name : new SFString("l_hand_front_view"),
                                                                                                                  translation : new SFVec3f([0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_l_hand_front_viewpoint"),
                                                                                                                      description : new SFString("left hand front"),
                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0])}),

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite Viewpoint hanim_l_hand_front_view"),
                                                                                                                      url : new MFString(["#hanim_l_hand_front_viewpoint"]),
                                                                                                                      children : new MFNode([
                                                                                                                        new LOD({
                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                          children : new MFNode([
                                                                                                                            new WorldInfo({
                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_l_thumb1"),
                                                                                                              name : new SFString("l_thumb1"),
                                                                                                              rotation : new SFRotation([1,0,0,0.270107235459875]),
                                                                                                              center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_l_thumb_metacarpal"),
                                                                                                                  name : new SFString("l_thumb_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_l_thumb2"),
                                                                                                                  name : new SFString("l_thumb2"),
                                                                                                                  center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_l_thumb_proximal"),
                                                                                                                      name : new SFString("l_thumb_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_l_thumb3"),
                                                                                                                      name : new SFString("l_thumb3"),
                                                                                                                      center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_l_thumb_distal"),
                                                                                                                          name : new SFString("l_thumb_distal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_l_thumb_distal_tip"),
                                                                                                                              name : new SFString("l_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([0.1982,0.8061,0.0759]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_l_index0"),
                                                                                                              name : new SFString("l_index0"),
                                                                                                              center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_l_index_metacarpal"),
                                                                                                                  name : new SFString("l_index_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_l_index1"),
                                                                                                                  name : new SFString("l_index1"),
                                                                                                                  center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_l_index_proximal"),
                                                                                                                      name : new SFString("l_index_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_index1, HAnimSegment l_index_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_l_index2"),
                                                                                                                      name : new SFString("l_index2"),
                                                                                                                      center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_l_index_middle"),
                                                                                                                          name : new SFString("l_index_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_index2, HAnimSegment l_index_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_index3"),
                                                                                                                          name : new SFString("l_index3"),
                                                                                                                          center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_index_distal"),
                                                                                                                              name : new SFString("l_index_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_index3, HAnimSegment l_index_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_index_distal_tip"),
                                                                                                                                  name : new SFString("l_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2089,0.6858,-0.0245]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                  name : new SFString("l_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_dactylion")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_l_middle0"),
                                                                                                              name : new SFString("l_middle0"),
                                                                                                              center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_l_middle_metacarpal"),
                                                                                                                  name : new SFString("l_middle_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_l_middle1"),
                                                                                                                  name : new SFString("l_middle1"),
                                                                                                                  center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_l_middle_proximal"),
                                                                                                                      name : new SFString("l_middle_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_l_middle2"),
                                                                                                                      name : new SFString("l_middle2"),
                                                                                                                      center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_l_middle_middle"),
                                                                                                                          name : new SFString("l_middle_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_middle2, HAnimSegment l_middle_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_middle3"),
                                                                                                                          name : new SFString("l_middle3"),
                                                                                                                          center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_middle_distal"),
                                                                                                                              name : new SFString("l_middle_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_middle3, HAnimSegment l_middle_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_middle_distal_tip"),
                                                                                                                                  name : new SFString("l_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.208,0.6731,-0.0491]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_l_ring0"),
                                                                                                              name : new SFString("l_ring0"),
                                                                                                              center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_l_ring_metacarpal"),
                                                                                                                  name : new SFString("l_ring_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_l_ring1"),
                                                                                                                  name : new SFString("l_ring1"),
                                                                                                                  center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_l_ring_proximal"),
                                                                                                                      name : new SFString("l_ring_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_l_ring2"),
                                                                                                                      name : new SFString("l_ring2"),
                                                                                                                      center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_l_ring_middle"),
                                                                                                                          name : new SFString("l_ring_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_ring2, HAnimSegment l_ring_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_ring3"),
                                                                                                                          name : new SFString("l_ring3"),
                                                                                                                          center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_ring_distal"),
                                                                                                                              name : new SFString("l_ring_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_ring3, HAnimSegment l_ring_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_ring_distal_tip"),
                                                                                                                                  name : new SFString("l_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2035,0.675,-0.0756]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_l_pinky0"),
                                                                                                              name : new SFString("l_pinky0"),
                                                                                                              center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_l_pinky_metacarpal"),
                                                                                                                  name : new SFString("l_pinky_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_l_pinky1"),
                                                                                                                  name : new SFString("l_pinky1"),
                                                                                                                  center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_l_pinky_proximal"),
                                                                                                                      name : new SFString("l_pinky_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_l_pinky2"),
                                                                                                                      name : new SFString("l_pinky2"),
                                                                                                                      center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_l_pinky_middle"),
                                                                                                                          name : new SFString("l_pinky_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_l_pinky3"),
                                                                                                                          name : new SFString("l_pinky3"),
                                                                                                                          center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_l_pinky_distal"),
                                                                                                                              name : new SFString("l_pinky_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_l_pinky_distal_tip"),
                                                                                                                                  name : new SFString("l_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2014,0.7009,-0.1012]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          rotation : new SFRotation([0,0,-1.00000000000003,0.108042894183947]),
                                                                                          center : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              DEF : new SFString("hanim_r_clavicle"),
                                                                                              name : new SFString("r_clavicle"),
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                                  child : new SFNode(
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])}))}))}),

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])}))}))}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_r_clavicale_pt"),
                                                                                                  name : new SFString("r_clavicale_pt"),
                                                                                                  translation : new SFVec3f([-0.0115,1.4943,0.04]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_clavicale")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_r_acromion_pt"),
                                                                                                  name : new SFString("r_acromion_pt"),
                                                                                                  translation : new SFVec3f([-0.1905,1.4791,-0.0431]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_acromion")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_r_axilla_ant_pt"),
                                                                                                  name : new SFString("r_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([-0.1626,1.4072,-0.0031]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_ant")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  DEF : new SFString("hanim_r_axilla_post_pt"),
                                                                                                  name : new SFString("r_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([-0.1603,1.4098,-0.0826]),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_post")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  DEF : new SFString("hanim_r_scapula"),
                                                                                                  name : new SFString("r_scapula"),
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                                      child : new SFNode(
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  rotation : new SFRotation([0,0,-1,0.950777468818762]),
                                                                                                  center : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      DEF : new SFString("hanim_r_upperarm"),
                                                                                                      name : new SFString("r_upperarm"),
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint r_shoulder, HAnimSegment r_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                          child : new SFNode(
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])}))}))}),

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          DEF : new SFString("hanim_r_humeral_lateral_epicn_pt"),
                                                                                                          name : new SFString("r_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_humeral_lateral_epicn")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      rotation : new SFRotation([-1,0,0,0.297117959005863]),
                                                                                                      center : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          DEF : new SFString("hanim_r_forearm"),
                                                                                                          name : new SFString("r_forearm"),
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint r_elbow, HAnimSegment r_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                              child : new SFNode(
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])}))}))}),

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                              name : new SFString("r_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radial_styloid")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                              name : new SFString("r_olecranon_pt"),
                                                                                                              translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_olecranon")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_r_humeral_medial_epicn_pt"),
                                                                                                              name : new SFString("r_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_humeral_medial_epicn")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                              name : new SFString("r_radiale_pt"),
                                                                                                              translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radiale")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          DEF : new SFString("hanim_r_wrist"),
                                                                                                          name : new SFString("r_wrist"),
                                                                                                          center : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              DEF : new SFString("hanim_r_hand"),
                                                                                                              name : new SFString("r_hand"),
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint r_wrist, HAnimSegment r_hand")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                                  child : new SFNode(
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])}))}))}),

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")})),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha2_pt"),
                                                                                                                  name : new SFString("r_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha2")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                                  name : new SFString("r_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_ulnar_styloid")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha5_pt"),
                                                                                                                  name : new SFString("r_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha5")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  DEF : new SFString("hanim_r_hand_front_view"),
                                                                                                                  name : new SFString("r_hand_front_view"),
                                                                                                                  translation : new SFVec3f([-0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_r_hand_front_viewpoint"),
                                                                                                                      description : new SFString("right hand front"),
                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0])}),

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite Viewpoint hanim_r_hand_front_view"),
                                                                                                                      url : new MFString(["#hanim_r_hand_front_viewpoint"]),
                                                                                                                      children : new MFNode([
                                                                                                                        new LOD({
                                                                                                                          forceTransitions : new SFBool(true),
                                                                                                                          range : new MFFloat([0.04]),
                                                                                                                          children : new MFNode([
                                                                                                                            new WorldInfo({
                                                                                                                              info : new MFString(["hide diamond when close"])}),

                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_r_thumb1"),
                                                                                                              name : new SFString("r_thumb1"),
                                                                                                              rotation : new SFRotation([1,0,0,0.270107235459875]),
                                                                                                              center : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_r_thumb_metacarpal"),
                                                                                                                  name : new SFString("r_thumb_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_r_thumb2"),
                                                                                                                  name : new SFString("r_thumb2"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_r_thumb_proximal"),
                                                                                                                      name : new SFString("r_thumb_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_r_thumb3"),
                                                                                                                      name : new SFString("r_thumb3"),
                                                                                                                      center : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_r_thumb_distal"),
                                                                                                                          name : new SFString("r_thumb_distal"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              DEF : new SFString("hanim_r_thumb_distal_tip"),
                                                                                                                              name : new SFString("r_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([-0.1869,0.809,0.082]),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_r_index0"),
                                                                                                              name : new SFString("r_index0"),
                                                                                                              center : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_r_index_metacarpal"),
                                                                                                                  name : new SFString("r_index_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_r_index1"),
                                                                                                                  name : new SFString("r_index1"),
                                                                                                                  rotation : new SFRotation([0,0,1.00000000000003,0.111082015766469]),
                                                                                                                  center : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_r_index_proximal"),
                                                                                                                      name : new SFString("r_index_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_index1, HAnimSegment r_index_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_r_index2"),
                                                                                                                      name : new SFString("r_index2"),
                                                                                                                      rotation : new SFRotation([0,0,0.999999999999999,0.391134387386823]),
                                                                                                                      center : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_r_index_middle"),
                                                                                                                          name : new SFString("r_index_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_index2, HAnimSegment r_index_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_index3"),
                                                                                                                          name : new SFString("r_index3"),
                                                                                                                          rotation : new SFRotation([0,0,0.999999999999997,0.211082015766472]),
                                                                                                                          center : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_index_distal"),
                                                                                                                              name : new SFString("r_index_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_index3, HAnimSegment r_index_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])}))}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_index_distal_tip"),
                                                                                                                                  name : new SFString("r_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.198,0.6883,-0.018]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                  name : new SFString("r_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_dactylion")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_r_middle0"),
                                                                                                              name : new SFString("r_middle0"),
                                                                                                              center : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_r_middle_metacarpal"),
                                                                                                                  name : new SFString("r_middle_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_r_middle1"),
                                                                                                                  name : new SFString("r_middle1"),
                                                                                                                  rotation : new SFRotation([0,0,1.00000000000003,0.111082015766469]),
                                                                                                                  center : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_r_middle_proximal"),
                                                                                                                      name : new SFString("r_middle_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_r_middle2"),
                                                                                                                      name : new SFString("r_middle2"),
                                                                                                                      rotation : new SFRotation([0,0,0.999999999999999,0.391134387386823]),
                                                                                                                      center : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_r_middle_middle"),
                                                                                                                          name : new SFString("r_middle_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_middle2, HAnimSegment r_middle_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_middle3"),
                                                                                                                          name : new SFString("r_middle3"),
                                                                                                                          rotation : new SFRotation([0,0,0.999999999999997,0.211082015766472]),
                                                                                                                          center : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_middle_distal"),
                                                                                                                              name : new SFString("r_middle_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_middle3, HAnimSegment r_middle_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_middle_distal_tip"),
                                                                                                                                  name : new SFString("r_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1969,0.6758,-0.0427]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_r_ring0"),
                                                                                                              name : new SFString("r_ring0"),
                                                                                                              center : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_r_ring_metacarpal"),
                                                                                                                  name : new SFString("r_ring_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_r_ring1"),
                                                                                                                  name : new SFString("r_ring1"),
                                                                                                                  rotation : new SFRotation([0,0,1.00000000000003,0.111082015766469]),
                                                                                                                  center : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_r_ring_proximal"),
                                                                                                                      name : new SFString("r_ring_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_r_ring2"),
                                                                                                                      name : new SFString("r_ring2"),
                                                                                                                      rotation : new SFRotation([0,0,0.999999999999999,0.391134387386823]),
                                                                                                                      center : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_r_ring_middle"),
                                                                                                                          name : new SFString("r_ring_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_ring2, HAnimSegment r_ring_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_ring3"),
                                                                                                                          name : new SFString("r_ring3"),
                                                                                                                          rotation : new SFRotation([0,0,0.999999999999997,0.211082015766472]),
                                                                                                                          center : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_ring_distal"),
                                                                                                                              name : new SFString("r_ring_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_ring3, HAnimSegment r_ring_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_ring_distal_tip"),
                                                                                                                                  name : new SFString("r_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1934,0.6778,-0.0693]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              DEF : new SFString("hanim_r_pinky0"),
                                                                                                              name : new SFString("r_pinky0"),
                                                                                                              center : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  DEF : new SFString("hanim_r_pinky_metacarpal"),
                                                                                                                  name : new SFString("r_pinky_metacarpal"),
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                                      child : new SFNode(
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")}))}),

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  DEF : new SFString("hanim_r_pinky1"),
                                                                                                                  name : new SFString("r_pinky1"),
                                                                                                                  rotation : new SFRotation([0,0,1.00000000000003,0.111082015766469]),
                                                                                                                  center : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      DEF : new SFString("hanim_r_pinky_proximal"),
                                                                                                                      name : new SFString("r_pinky_proximal"),
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                          child : new SFNode(
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")}))}),

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      DEF : new SFString("hanim_r_pinky2"),
                                                                                                                      name : new SFString("r_pinky2"),
                                                                                                                      rotation : new SFRotation([0,0,0.999999999999999,0.391134387386823]),
                                                                                                                      center : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          DEF : new SFString("hanim_r_pinky_middle"),
                                                                                                                          name : new SFString("r_pinky_middle"),
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                              child : new SFNode(
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")}))}),

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")})),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          DEF : new SFString("hanim_r_pinky3"),
                                                                                                                          name : new SFString("r_pinky3"),
                                                                                                                          rotation : new SFRotation([0,0,0.999999999999997,0.211082015766472]),
                                                                                                                          center : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              DEF : new SFString("hanim_r_pinky_distal"),
                                                                                                                              name : new SFString("r_pinky_distal"),
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                                  child : new SFNode(
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")}))}),

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")})),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  DEF : new SFString("hanim_r_pinky_distal_tip"),
                                                                                                                                  name : new SFString("r_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1938,0.7035,-0.0949]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),

                new HAnimJoint({
                  USE : new SFString("hanim_humanoid_root")}),

                new HAnimJoint({
                  USE : new SFString("hanim_sacroiliac")}),

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
                  USE : new SFString("hanim_temporomandibular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_acromioclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ankle")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_elbow")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyeball_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyebrow_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_eyelid_joint")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_hip")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_index0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_index1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_index2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_index3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_index3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_knee")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_metatarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_metatarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_middle0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_middle0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_middle1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_middle1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_middle2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_middle2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_middle3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_middle3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_midtarsal")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_pinky3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_pinky3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ring0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ring0")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ring1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ring1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ring2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ring2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_ring3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_ring3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_shoulder")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_sternoclavicular")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_subtalar")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_subtalar")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb1")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb2")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_thumb3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_thumb3")}),

                new HAnimJoint({
                  USE : new SFString("hanim_l_wrist")}),

                new HAnimJoint({
                  USE : new SFString("hanim_r_wrist")}),
              segments : new MFNode([
                new HAnimSegment({
                  USE : new SFString("hanim_pelvis")}),

                new HAnimSegment({
                  USE : new SFString("hanim_skull")}),

                new HAnimSegment({
                  USE : new SFString("hanim_jaw")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_c7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t6")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t7")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t8")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t9")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t10")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t11")}),

                new HAnimSegment({
                  USE : new SFString("hanim_t12")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l1")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l2")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l3")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l4")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l5")}),

                new HAnimSegment({
                  USE : new SFString("hanim_sacrum")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_calf")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_clavicle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyeball")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyeball")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyebrow")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyebrow")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_eyelid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_eyelid")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forearm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_forefoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_forefoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hand")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_hindfoot")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_index_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_index_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_index_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_index_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_index_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middistal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middistal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middle_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middle_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middle_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middle_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middle_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middle_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_middle_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_middle_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_midproximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_midproximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_pinky_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_pinky_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_pinky_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_pinky_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_pinky_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_pinky_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_pinky_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_pinky_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_ring_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_ring_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_ring_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_ring_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_ring_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_ring_middle")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_ring_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_ring_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_scapula")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thigh")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thumb_distal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thumb_metacarpal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_thumb_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_thumb_proximal")}),

                new HAnimSegment({
                  USE : new SFString("hanim_l_upperarm")}),

                new HAnimSegment({
                  USE : new SFString("hanim_r_upperarm")}),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_crotch_pt")})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_skull_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_sellion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_supramenton_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_nuchale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_suprasternale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_cervicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_substernale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_rib10_midspine_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_waist_preferred_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_navel_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_acromion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_asis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_ant_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_ant_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_axilla_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_axilla_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_calcaneous_post_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_clavicale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_dactylion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_digit2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_femoral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_forefoot_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_gonion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_lateral_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_humeral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_humeral_medial_epicn_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_iliocristale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_index_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_index_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_infraorbitale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_knee_crease_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_lateral_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_medial_malleolus_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha2_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metacarpal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha1_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_metatarsal_pha5_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_middle_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_middle_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_neck_base_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_olecranon_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_pinky_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_pinky_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_psis_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radial_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_radiale_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_rib10_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ring_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ring_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_l_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_temporomandibular_r_site_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_sphyrion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thelion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_thumb_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_thumb_distal_tip")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_tragion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_trochanterion_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_ulnar_styloid_pt")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_l_inclined_view"),
                  name : new SFString("l_inclined_view"),
                  translation : new SFVec3f([1.62,1.05,2.06]),
                  rotation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_inclined_viewpoint"),
                      description : new SFString("left inclined"),
                      position : new SFVec3f([0,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_l_inclined_view"),
                      url : new MFString(["#hanim_l_inclined_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_r_inclined_view"),
                  name : new SFString("r_inclined_view"),
                  translation : new SFVec3f([-1.62,1.05,2.06]),
                  rotation : new SFRotation([-0.113,-0.993,0.0347,0.671]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_r_inclined_viewpoint"),
                      description : new SFString("right inclined"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_r_inclined_view"),
                      url : new MFString(["#hanim_r_inclined_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_front_view"),
                  name : new SFString("front_view"),
                  translation : new SFVec3f([0,0.85,2.58]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_viewpoint"),
                      description : new SFString("front"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_front_view"),
                      url : new MFString(["#hanim_front_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_back_view"),
                  name : new SFString("back_view"),
                  translation : new SFVec3f([0,0.85,-2.58]),
                  rotation : new SFRotation([0,1,0,3.14]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_back_viewpoint"),
                      description : new SFString("back"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_back_view"),
                      url : new MFString(["#hanim_back_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_l_side_view"),
                  name : new SFString("l_side_view"),
                  translation : new SFVec3f([2.6,0.854,0]),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_side_viewpoint"),
                      description : new SFString("left side"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_l_side_view"),
                      url : new MFString(["#hanim_l_side_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_Top_view"),
                  name : new SFString("Top_view"),
                  translation : new SFVec3f([0,3.5,0]),
                  rotation : new SFRotation([1,0,0,-1.57]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_Top_viewpoint"),
                      description : new SFString("Top"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_Top_view"),
                      url : new MFString(["#hanim_Top_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_front_close_view"),
                  name : new SFString("front_close_view"),
                  translation : new SFVec3f([0,0.854,1.575]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_close_viewpoint"),
                      description : new SFString("front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1.575])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_front_close_view"),
                      url : new MFString(["#hanim_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_side_close_view"),
                  name : new SFString("side_close_view"),
                  translation : new SFVec3f([1.56,0.854,0]),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_side_close_viewpoint"),
                      description : new SFString("side close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([1.6,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_side_close_view"),
                      url : new MFString(["#hanim_side_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_head_front_close_view"),
                  name : new SFString("head_front_close_view"),
                  translation : new SFVec3f([0,1.5,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_head_front_close_viewpoint"),
                      description : new SFString("head front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_head_front_close_view"),
                      url : new MFString(["#hanim_head_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_chest_front_close_view"),
                  name : new SFString("chest_front_close_view"),
                  translation : new SFVec3f([0,1.2,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_chest_front_close_viewpoint"),
                      description : new SFString("chest front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_chest_front_close_view"),
                      url : new MFString(["#hanim_chest_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_pelvis_front_close_view"),
                  name : new SFString("pelvis_front_close_view"),
                  translation : new SFVec3f([0,0.8,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_pelvis_front_close_viewpoint"),
                      description : new SFString("pelvis front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_pelvis_front_close_view"),
                      url : new MFString(["#hanim_pelvis_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_knees_front_close_view"),
                  name : new SFString("knees_front_close_view"),
                  translation : new SFVec3f([0,0.4,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_knees_front_close_viewpoint"),
                      description : new SFString("knees front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.4,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_knees_front_close_view"),
                      url : new MFString(["#hanim_knees_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_feet_front_close_view"),
                  name : new SFString("feet_front_close_view"),
                  translation : new SFVec3f([0,0,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_feet_front_close_viewpoint"),
                      description : new SFString("feet front close"),
                      position : new SFVec3f([0,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_feet_front_close_view"),
                      url : new MFString(["#hanim_feet_front_close_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  DEF : new SFString("hanim_eye_level_view"),
                  name : new SFString("eye_level_view"),
                  translation : new SFVec3f([0,1.6332,0.0502]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_eye_level_viewpoint"),
                      description : new SFString("eye level looking forward"),
                      position : new SFVec3f([0,0,0]),
                      orientation : new SFRotation([0,1,0,3.141593])}),

                    new Anchor({
                      description : new SFString("HAnimSite Viewpoint hanim_eye_level_view"),
                      url : new MFString(["#hanim_eye_level_viewpoint"]),
                      children : new MFNode([
                        new LOD({
                          forceTransitions : new SFBool(true),
                          range : new MFFloat([0.04]),
                          children : new MFNode([
                            new WorldInfo({
                              info : new MFString(["hide diamond when close"])}),

                            new Shape({
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_eyeball_site_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_l_hand_front_view")})),
              viewpoints : new SFNode(
                new HAnimSite({
                  USE : new SFString("hanim_r_hand_front_view")}))}),

            new Group({
              DEF : new SFString("StopAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StopTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new PositionInterpolator({
                  DEF : new SFString("Stop_HumanoidRoot_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_HumanoidRoot_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_sacroiliac_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_subtalar_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_midtarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_metatarsal_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vl1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt12_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt11_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt10_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt9_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt8_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vt1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc7_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc6_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc5_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc4_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_vc1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_skullbase_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_eyeball_joint_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_l_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_sternoclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_acromioclavicular_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_thumb3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_index3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_middle3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_ring3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky0_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky1_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky2_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stop_r_pinky3_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("StandAnimation"),
              children : new MFNode([
                new TimeSensor({
                  DEF : new SFString("StandTimer"),
                  cycleInterval : new SFTime(5.73),
                  loop : new SFBool(true)}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.015,1,0,0,0.17,-1,0,0,0.025,1,0,0,0.01,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,0.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_eyeball_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_eyeball_RotationInterpolator"),
                  key : new MFFloat([0,0.4,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5,1,0,0,0.45,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Stand_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,-1,0,0,0,0,-1,0,0,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,0.1,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index1_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.1,0,0,1,0.2,0,0,1,0.3,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index2_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.4,0,0,1,0.32,0,0,1,0.25,0,0,1,0.2,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Stand_r_index3_RollInterpolator"),
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
                  DEF : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.5,0,0,1,0,-1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.5,0,0,1,0,1,0,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.55,-1,0,0,1.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitches_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Pitches_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0,0,-0.15,0,0,-0.7,0,0,-0.15,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Pitch_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,1,0,1.5,0,0,1,0,0,-1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,-1,0,1.5,0,0,1,0,0,1,0,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaws_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Yaws_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,0,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Yaw_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Roll_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,-1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,1,0,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,-1,1.5,0,0,-1,3,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,0,0,0,-1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.5,0,0,1,3,0,0,1,1.5,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_head_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.25,0,0,1,0,0,0,-1,1.25,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Rolls_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Rolls_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0,0,-0.25,0,0,-0.8,0,0,-0.25,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Roll_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Walk_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.2612,1,0,0,0.1268,-1,0,0,0.01793,-1,0,0,0.05824,-1,0,0,0.2398,-1,0,0,0.35,-1,0,0,0.3322,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.09354,1,0,0,0.08558,1,0,0,0.2475,1,0,0,0.8573])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.5831,0.03511,0.8116,0.1481,-0.995,0.02296,0.09674,0.4683,-1,0.00192,0.007964,0.4732,-0.998,-0.0158,-0.06102,0.5079,-0.9911,-0.03541,-0.1286,0.5419,-0.9131,-0.06243,-0.403,0.3361,-0.4306,-0.07962,-0.899,0.07038,1,0,0,0.2571,0.9891,-0.02805,0.1444,0.3879,-0.5831,0.03511,0.8116,0.1481])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.06714,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.1222,-1,0,0,0.06714])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.08678,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.09961,1,0,0,0.3942,1,0,0,0.3226])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]),
                  keyValue : new MFRotation([-0.873,0.06094,0.484,0.2865,0.9963,-0.01057,0.08481,0.2488,0.9965,0.01591,-0.08222,0.3836,-0.7018,-0.03223,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.02231,0.0817,0.5351,-0.9809,0.04912,0.1881,0.5204,-0.873,0.06094,0.484,0.2865])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,-1,0.1056,0,0,1,0.09018,0,0,-1,0.1056])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.02582,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.411508,-1,0,0,0.0925011,-1,0,0,0.572568,-1,0,0,0.411508])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.09346,1,0,0,0.3197,-1,0,0,0.1564,-1,0,0,0.09346])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.461076,-0.330195,-0.927451,0.175516,0.538852,0.0327774,-0.999314,-0.0172185,0.492033,0,-1,0,0.461076])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([-1,0,0,0.0659878,-1,0,0,0.488383,-1,0,0,0.0177536,-1,0,0,0.0659878])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.9167,1]),
                  keyValue : new MFRotation([1,0,0,0.1189,-1,0,0,0.1861,1,0,0,0.3357,1,0,0,0.1189])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_head_RotationInterpolator"),
                  key : new MFFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]),
                  keyValue : new MFRotation([0,-1,0,0.08642,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.04391,0,-1,0,0.03119,0,-1,0,0.07936,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.08642])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_neck_RotationInterpolator"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.2083,0.375,0.75,0.8333,1]),
                  keyValue : new MFRotation([0,1,0,0.0826,-0.01972,-0.5974,0.8017,0.08231,0.009296,-0.9648,0.2627,0.1734,-0.01238,0.9549,-0.2968,0.08732,-0.008125,0.9691,-0.2463,0.158,0,1,0,0.0826])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Walk_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]),
                  keyValue : new MFVec3f([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Walk_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Run_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_hip_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-0.99,0.033,0.04,1.42,-0.99,0.1328,0.067,0.42,0.99,0.014,0.009,0.9,-0.99,0.0703,0.05,0.7,-0.99,0.033,0.04,1.42])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_knee_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([1,0,0,1.01,1,0,0,0.426,1,0,0,0.705,1,0,0,2.179,1,0,0,1.01])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_ankle_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.22,0.3,0.4,1]),
                  keyValue : new MFRotation([1,0,0,0.0374,-1,0,0,0.1037,-1,0,0,0.4328,1,0,0,0.1929,1,0,0,0.03574])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_hip_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.99,-0.014,0.009,0.9,-0.99,-0.0703,-0.05,0.7,-0.99,-0.033,0.04,1.42,-0.99,-0.1328,-0.067,0.42,0.99,-0.014,0.009,0.9])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_knee_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.705,1,0,0,2.179,1,0,0,1.01,1,0,0,0.426,1,0,0,0.705])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_ankle_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.4,0.71,0.8,0.82,1]),
                  keyValue : new MFRotation([1,0,0,0.2323,-1,0,0,0.07843,-1,0,0,0.32,-1,0,0,0.374,-1,0,0,0.3478,1,0,0,0.2323])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0.99,-0.074,0.25,1.5,0.99,-0.092,0.44,0.3,-0.99,0.136,0.25,0.85,0.99,-0.081,0.38,0.4,0.99,-0.074,0.25,1.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_elbow_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([-1,0,0,1.85,-0.99,-0.19,0.18,1.35,-1,0,0,0.975,-0.99,-0.09,-0.02,1.55,-1,0,0,1.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_wrist_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([-0.25,-1,0.08,0.14,0.25,1,0.08,0.14,0,0,1,0,-0.25,1,0.08,-0.14,-0.25,1,0.08,0.14])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-0.99,-0.136,-0.25,0.85,0.99,0.081,-0.38,0.4,0.99,0.074,-0.25,1.5,0.99,0.081,-0.38,0.4,-0.99,-0.136,-0.25,0.85])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_elbow_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([-1,0,0,0.975,-0.99,0.09,0.02,1.55,-1,0,0,1.85,-0.99,0.19,-0.18,1.35,-1,0,0,0.975])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_wrist_RotationInterpolator_Run"),
                  key : new MFFloat([0,1]),
                  keyValue : new MFRotation([-0.917742,-0.237244,-0.318536,0.214273,-0.917742,-0.237244,-0.318536,0.214273])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_lower_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2182,0.4909,0.7455,1]),
                  keyValue : new MFRotation([0,-1,0,0.125,0,0,1,0,0,1,0,0.125,0,0,1,0,0,-1,0,0.125])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_head_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([1,0,0,0.08,1,0,0,0.12,1,0,0,0.3,1,0,0,0.3,1,0,0,0.08])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_neck_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7091,1]),
                  keyValue : new MFRotation([0.7,0,0,0.4,-0.7,-0.7,0,0.4,0,0,0,0.4,-0.7,0.7,0,0.4,0.7,0,0,0.4])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_upper_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.2545,0.4909,0.7636,1]),
                  keyValue : new MFRotation([0.97,0.65,0.086,0.5,0.9,0.003,-0.02,0.38,0.95,-0.68,-0.086,0.5,0.9,0.004,-0.025,0.4,0.97,0.65,0.086,0.5])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_whole_body_RotationInterpolator_Run"),
                  key : new MFFloat([0,0.25,0.5,0.75,1]),
                  keyValue : new MFRotation([1,0,0,0.06,1,0,0,0.167,1,0,0,0.06,1,0,0,0.168,1,0,0,0.06])}),

                new PositionInterpolator({
                  DEF : new SFString("Run_whole_body_TranslationInterpolator_Run"),
                  key : new MFFloat([0,0.22,0.3,0.31,0.5,0.69,0.7,0.78,1]),
                  keyValue : new MFVec3f([0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0,0,-0.037,0,0,-0.049,0,0,-0.037,0,0,-0.01,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Run_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Jump_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.1,0.15,0.25,0.28,0.32,0.35,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.6735,-1,0,0,0.6735,-1,0,0,0.3527,-1,0,0,0.3038,-1,0,0,0.07964,1,0,0,1.3,1,0,0,0.6509,1,0,0,0.3001,-1,0,0,0.2087,-1,0,0,0.3756,-1,0,0,0.3279,-1,0,0,0.1193,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.2,0.25,0.3,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.5,1,0,0,1.7,0,0,1,0,1,0,0,0.9507,1,0,0,0.5845,1,0,0,0.9054,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.18,0.24,0.26,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.63,-1,0,0,1.7,-1,0,0,1.55,-1,0,0,0.8943,-1,0,0,0.3698,0,0,1,0,-1,0,0,0.4963,-1,0,0,0.3829,-1,0,0,0.5169,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_ankle_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.625,-1,0,0,0.625,-1,0,0,0.3364,-1,0,0,0.2742,-1,0,0,0.05078,1,0,0,0.2833,1,0,0,0.6667,1,0,0,0.2833,-1,0,0,0.2108,-1,0,0,0.375,-1,0,0,0.3146,-1,0,0,0.1174,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_knee_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,2.047,1,0,0,2.047,0,0,1,0,1,0,0,1.566,1,0,0,0.5913,1,0,0,0.9235,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_hip_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.36,0.4,0.44,0.48,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,4.349,1,0,0,4.349,1,0,0,4.615,-1,0,0,0.9136,-1,0,0,0.3614,0,0,1,0,-1,0,0,0.7869,-1,0,0,0.3918,-1,0,0,0.5433,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.1892,1,0,0,0.1892,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.0585279,0.983903,-0.168849,1.85956,-0.0585279,0.983903,-0.168849,1.85956,-0.00222418,0.99801,-0.0630095,1.46072,0,1,0,0.497349,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.04151,-1,0,0,0.04151,-1,0,0,0.5855,-1,0,0,0.5852,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.9992,0.02042,0.03558,4.688,0.9992,0.02042,0.03558,4.688,0.9989,-0.04623,0.005159,4.079,-0.8687,-0.2525,-0.4261,1.501,-0.941,-0.2893,-0.1754,0.4788,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_wrist_RotationInterpolator"),
                  key : new MFFloat([0,0.48,0.52,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,0.0672928,0.989475,-0.128107,4.15574,0.0672928,0.989475,-0.128107,4.15574,0.00364942,0.999901,0.0135896,4.5822,0,-1,0,0.655922,-0.00050618,-0.999999,0.0012782,1.28397,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_elbow_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.58,0.72,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,1.13,-1,0,0,1.7,-1,0,0,1.7,-1,0,0,0.4,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_shoulder_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.64,0.76,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,-0.9987,0.02554,0.04498,1.57,-0.9987,0.02554,0.04498,1.57,1,0.0004113,0.003055,4.114,-0.8413,0.3238,0.4329,1.453,-0.877,0.4198,0.2337,0.6009,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_head_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.5989,-1,0,0,0.5989,-1,0,0,0.3216,1,0,0,0.06503,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.1942,-1,0,0,0.1942,0,0,1,0,1,0,0,0.2284,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.22,0.28,0.34,0.71,0.88,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.05,1,0,0,1.051,-1,0,0,0.257,1,0,0,0.2171,1,0,0,0.3465,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.28,0.32,0.48,0.64,0.76,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.3273,1,0,0,0.3273,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Jump_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.04,0.07,0.11,0.15,0.19,0.22,0.25,0.27,0.31,0.33,0.35,0.38,0.53,0.544,0.76,0.8,0.84,0.88,0.92,0.96,1]),
                  keyValue : new MFVec3f([0,0,0,0,-0.01264,-0.01289,0,-0.04712,-0.03738,-0.0003345,-0.1049,-0.05353,-0.0005712,-0.1892,-0.06561,-0.0008233,-0.286,-0.06276,-0.0009591,-0.3795,-0.05148,-0.00106,-0.4484,-0.03656,-0.00106,-0.4484,-0.03656,-0.001122,-0.25,-0.1499,-0.0008616,-0.05,-0.06358,-0.0005128,0.15,-0.05488,0.0004779,0.55,0.02732,0.0001728,1.385,0.006873,0.00017,1.395,0.0069,0,0.35,0.02148,0,-0.01299,-0.01057,0,-0.06932,-0.01064,0.0001365,-0.1037,-0.005059,0.0001279,-0.07198,-0.007596,0.000141,-0.01626,-0.004935,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,-0.1,0,1,0,0,0,1,0,0,1,0,0,0.6,0,1,0,0.1,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,1,0,0.8,0,1,0,0,0,1,0,0,-1,0,0,0.6,0,-1,0,0.8,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Jump_r_thumb1_PitchInterpolator"),
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
                  DEF : new SFString("Kick_l_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.22,0,0,1,0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_shoulder_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,1.76,-0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_ForeArm_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,-1,0.25,0,2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_wrist_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_sternoclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-0.2,0,0,1,-0.22,0,0,1,-0.2,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_acromioclavicular_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_shoulder_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,-1.76,0.25,0,1,-1.76,0,0,1,-1.256,0,0,1,-0.05,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_ForeArm_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,-0.55,1,0.25,0,-2.55,1,0,0,0,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_wrist_RollInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_thumb1_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_hip_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.9,-1,0,0,1.75,-1,0,0,2.25,-1,0,0,2,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_knee_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,1.95,1,0,0,1.75,-1,0,0,0.28,1,0,0,0,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_hip_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.3,0.5,0.6,0.9,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_l_knee_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_ankle_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([0,0,1,0,-1,0,0,0.9,-1,0,0,0.95,1,0,0,0.75,-1,0,0,0.05,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_r_metatarsal_PitchInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.7,1]),
                  keyValue : new MFRotation([1,0,0,0,-1,0,0,0.5,-1,0,0,0.7,1,0,0,0.75,-1,0,0,0.2,1,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_sacroiliac_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.6,0.8,1]),
                  keyValue : new MFRotation([0,1,0,0,0,-1,0,0.1,0,1,0,0,0,1,-1,0.24,0,-1,0,0.4,0,1,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vl5_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_vc6_YawInterpolator"),
                  key : new MFFloat([0,0.2,0.4,0.5,0.6,0.8,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_lower_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_upper_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_whole_body_RotationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new PositionInterpolator({
                  DEF : new SFString("Kick_whole_body_TranslationInterpolator"),
                  key : new MFFloat([0,0.5,1]),
                  keyValue : new MFVec3f([0,0,0,0,0,0,0,0,0])}),

                new OrientationInterpolator({
                  DEF : new SFString("Kick_neck_RotationInterpolator"),
                  key : new MFFloat([0,0.25,0.55,1]),
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0])})])}),

            new Group({
              DEF : new SFString("UserInterface"),
              children : new MFNode([
                new Transform({
                  DEF : new SFString("CoordinateAxesAdjustedScale"),
                  scale : new SFVec3f([0.175,0.175,0.175]),
                  children : new MFNode([
                    new Inline({
                      DEF : new SFString("CoordinateAxes"),
                      global : new SFBool(true),
                      url : new MFString(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])})])}),

                new Transform({
                  DEF : new SFString("cordsys"),
                  scale : new SFVec3f([0.175,0.175,0.175])}),

                new ProximitySensor({
                  DEF : new SFString("HudProximitySensor"),
                  size : new SFVec3f([500,100,500]),
                  center : new SFVec3f([0,20,0])}),

                new Transform({
                  DEF : new SFString("Stage"),
                  translation : new SFVec3f([0,-0.0125,0]),
                  scale : new SFVec3f([1,0.0125,1]),
                  child : new SFNode(
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(0.6)}))})),
                      geometry : new SFNode(
                        new Box({}))})),
                  children : new MFNode([
                    new Transform({
                      DEF : new SFString("Circle0"),
                      scale : new SFVec3f([1.175,1,1.175]),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.9,0,0.7]),
                                  emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              DEF : new SFString("Orbit1"),
                              coordIndex : new MFInt32([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0])}))}))}))}),

                    new Transform({
                      DEF : new SFString("Circle1"),
                      scale : new SFVec3f([0.5,1,0.5]),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.9,0,0.7]),
                                  emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))}))}),

                    new Transform({
                      DEF : new SFString("Circle2"),
                      scale : new SFVec3f([0.25,1,0.25]),
                      child : new SFNode(
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.9,0,0.7]),
                                  emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))}))})])}),

                new Transform({
                  DEF : new SFString("HudXform"),
                  translation : new SFVec3f([1.705442,1.042139,1.989742]),
                  rotation : new SFRotation([-0.09996068,0.9942513,0.03837026,0.7131352]),
                  children : new MFNode([
                    new Transform({
                      translation : new SFVec3f([-0.42,-0.2,-0.75]),
                      scale : new SFVec3f([0.035,0.035,0.035]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("StandTransform"),
                          translation : new SFVec3f([0,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stand_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("StandTextShape"),
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
                                  string : new MFString(["Stand"])}))})]),
                          child : new SFNode(
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
                                      point : new MFVec3f([-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01])}))}))}))}),

                        new Transform({
                          DEF : new SFString("PitchTransform"),
                          translation : new SFVec3f([3,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Pitch_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("PitchTextShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pitch"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Pitch_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("YawTransform"),
                          translation : new SFVec3f([6,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Yaw_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("YawText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Yaw"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Yaw_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("RollTransform"),
                          translation : new SFVec3f([9,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Roll_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("_RollInterpolator"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Roll"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Roll_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("WalkTransform"),
                          translation : new SFVec3f([12,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Walk_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("WalkText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Walk"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Walk_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("RunTransform"),
                          translation : new SFVec3f([15,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Run_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("RunText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Run"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Run_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("JumpTransform"),
                          translation : new SFVec3f([18,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Jump_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Jump"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Jump"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Jump_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("KickTransform"),
                          translation : new SFVec3f([21,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Kick_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("KickText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Kick"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Kick_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))}),

                        new Transform({
                          DEF : new SFString("Stop_Text"),
                          translation : new SFVec3f([0,1.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stop_Touch"),
                              description : new SFString("touch to select")}),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("StopText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Stop","Default Pose"])}))})]),
                          child : new SFNode(
                            new Shape({
                              DEF : new SFString("Stop_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))}))})])})])})])}),

            new Group({
              DEF : new SFString("BehaviorSynchronization")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_HumanoidRoot_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_HumanoidRoot_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_sacroiliac_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_subtalar_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_midtarsal_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_metatarsal_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_subtalar_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_midtarsal_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_metatarsal_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl5_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl4_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vl1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt12_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt11_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt10_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt9_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt8_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt7_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt6_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt5_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt4_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vt1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc7_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc6_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc5_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc4_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_vc1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_skullbase_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_eyeball_joint_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_eyeball_joint_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_sternoclavicular_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_acromioclavicular_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_thumb3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_index3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_middle3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_ring3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_l_pinky3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_sternoclavicular_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_acromioclavicular_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_thumb3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_index3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_middle3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_ring3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky0_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky1_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky2_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StopTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stop_r_pinky3_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Stop_HumanoidRoot_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Stop_HumanoidRoot_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_sacroiliac_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_subtalar_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_subtalar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_midtarsal_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_midtarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_metatarsal_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_subtalar_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_subtalar"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_midtarsal_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_midtarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_metatarsal_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl5_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl4_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vl1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt12_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt12"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt11_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt11"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt10_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt10"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt9_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt9"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt8_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt8"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt7_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt6_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt5_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt4_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vt1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vt1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc7_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc6_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc5_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc4_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_vc1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_skullbase_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_eyeball_joint_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_eyeball_joint_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_sternoclavicular_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_acromioclavicular_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_thumb3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_index3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_middle3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_ring3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_l_pinky3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_sternoclavicular_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_acromioclavicular_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_thumb3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_index3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_middle3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_ring3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky0_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky0"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky1_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky2_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stop_r_pinky3_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_eyeball_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_eyeball_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index1_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index2_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("StandTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Stand_r_index3_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc7"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_eyeball_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_eyeball_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_eyeball_joint"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index3_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_index3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index3_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_middle3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index3_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ring3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index1_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index2_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky2"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Stand_r_index3_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_pinky3"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitches_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("PitchTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Pitch_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitches_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Pitch_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaws_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("YawTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Yaw_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaws_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Yaw_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Rolls_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RollTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Roll_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Rolls_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Roll_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("WalkTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Walk_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Walk_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_ankle_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_knee_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_hip_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_ankle_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_knee_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_hip_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_lower_body_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_wrist_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_elbow_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_wrist_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_elbow_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_head_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_neck_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_upper_body_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_whole_body_RotationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_whole_body_TranslationInterpolator_Run"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("RunTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Run_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Run_r_ankle_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_knee_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_hip_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_ankle_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_knee_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_hip_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_wrist_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_elbow_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_wrist_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_elbow_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_lower_body_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_head_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_neck_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_upper_body_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_whole_body_RotationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_whole_body_TranslationInterpolator_Run"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Run_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_ankle_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_knee_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_hip_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_wrist_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_elbow_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_shoulder_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_head_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("JumpTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Jump_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_ankle_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_knee_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_hip_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_wrist_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_elbow_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_shoulder_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_head_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_skullbase"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Jump_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_shoulder_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_ForeArm_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_wrist_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_sternoclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_acromioclavicular_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_shoulder_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_ForeArm_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_wrist_RollInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_thumb1_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_hip_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_knee_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_hip_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_l_knee_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_ankle_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_r_metatarsal_PitchInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_sacroiliac_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_vl5_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_vc6_YawInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_lower_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_upper_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_whole_body_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_whole_body_TranslationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("KickTimer"),
              fromField : new SFString("fraction_changed"),
              toNode : new SFString("Kick_neck_RotationInterpolator"),
              toField : new SFString("set_fraction")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_shoulder_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_ForeArm_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_wrist_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_sternoclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_sternoclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_acromioclavicular_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_acromioclavicular"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_shoulder_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_shoulder"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_ForeArm_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_elbow"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_wrist_RollInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_wrist"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_thumb1_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_thumb1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_hip_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_knee_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_r_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_hip_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_hip"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_l_knee_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_knee"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_ankle"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_r_metatarsal_PitchInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_l_metatarsal"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_sacroiliac_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_vl5_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl5"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_vc6_YawInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc6"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_upper_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vl1"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_lower_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_sacroiliac"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_whole_body_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("Kick_whole_body_TranslationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_humanoid_root"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("Kick_neck_RotationInterpolator"),
              fromField : new SFString("value_changed"),
              toNode : new SFString("hanim_vc4"),
              toField : new SFString("set_rotation")}),

            new ROUTE({
              fromNode : new SFString("HudProximitySensor"),
              fromField : new SFString("position_changed"),
              toNode : new SFString("HudXform"),
              toField : new SFString("set_translation")}),

            new ROUTE({
              fromNode : new SFString("HudProximitySensor"),
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
