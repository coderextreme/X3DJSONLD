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
              content : new SFString("HAnimSpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Animation.x3d")}),

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
              name : new SFString("reference"),
              content : new SFString("HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames")}),

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
              name : new SFString("creator"),
              content : new SFString("Matthew T. Beitler, Joe D. Williams, Don Brutzman")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3Illustrated.png")}),

            new meta({
              name : new SFString("Image"),
              content : new SFString("HAnimSpecificationLOA3IllustratedLeftSide.png")}),

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
              name : new SFString("TODO"),
              content : new SFString("move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("insert MetadataInteger nodes indicating LOA for each Joint and Segment")}),

            new meta({
              name : new SFString("warning"),
              content : new SFString("BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK")}),

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
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_eyeball_site_view")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_l_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("l_eyeball_site_viewpoint looking forward"),
                                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593])}),

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite hanim_l_eyeball_site_view Viewpoint"),
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
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_eyeball_site_view")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_r_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("r_eyeball_site_viewpoint looking forward"),
                                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593])}),

                                                                                                                                    new Anchor({
                                                                                                                                      description : new SFString("HAnimSite hanim_r_eyeball_site_view Viewpoint"),
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
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_hand_front_view")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_l_hand_front_viewpoint"),
                                                                                                                      description : new SFString("left hand front"),
                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0])}),

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite hanim_l_hand_front_view Viewpoint"),
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
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_hand_front_view")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")}),

                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_r_hand_front_viewpoint"),
                                                                                                                      description : new SFString("right hand front"),
                                                                                                                      position : new SFVec3f([0,0,0]),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0])}),

                                                                                                                    new Anchor({
                                                                                                                      description : new SFString("HAnimSite hanim_r_hand_front_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite l_inclined_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_l_inclined_viewpoint"),
                      description : new SFString("left inclined"),
                      position : new SFVec3f([0,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_l_inclined_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite r_inclined_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_r_inclined_viewpoint"),
                      description : new SFString("right inclined"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_r_inclined_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite front_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_front_viewpoint"),
                      description : new SFString("front"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_front_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite back_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_back_viewpoint"),
                      description : new SFString("back"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_back_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite l_side_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_l_side_viewpoint"),
                      description : new SFString("left side"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_l_side_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite Top_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_Top_viewpoint"),
                      description : new SFString("Top"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.9,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_Top_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_front_close_viewpoint"),
                      description : new SFString("front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1.575])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite side_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_side_close_viewpoint"),
                      description : new SFString("side close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([1.6,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_side_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite head_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_head_front_close_viewpoint"),
                      description : new SFString("head front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_head_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite chest_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_chest_front_close_viewpoint"),
                      description : new SFString("chest front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_chest_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite pelvis_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_pelvis_front_close_viewpoint"),
                      description : new SFString("pelvis front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0,1])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_pelvis_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite knees_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_knees_front_close_viewpoint"),
                      description : new SFString("knees front close"),
                      position : new SFVec3f([0,0,0]),
                      centerOfRotation : new SFVec3f([0,0.4,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_knees_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite feet_front_close_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_feet_front_close_viewpoint"),
                      description : new SFString("feet front close"),
                      position : new SFVec3f([0,0,0])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_feet_front_close_view Viewpoint"),
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
                    new TouchSensor({
                      description : new SFString("HAnimSite eye_level_view")}),

                    new Shape({
                      USE : new SFString("HAnimSiteShape")}),

                    new Viewpoint({
                      DEF : new SFString("hanim_eye_level_viewpoint"),
                      description : new SFString("eye level looking forward"),
                      position : new SFVec3f([0,0,0]),
                      orientation : new SFRotation([0,1,0,3.141593])}),

                    new Anchor({
                      description : new SFString("HAnimSite hanim_eye_level_view Viewpoint"),
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
                  USE : new SFString("hanim_r_hand_front_view")}))})])}))});
console.log(X3D0.toXMLNode());
