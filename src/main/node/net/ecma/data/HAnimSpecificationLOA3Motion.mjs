'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { component } from './x3d.mjs';
import { SFInt32 } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { Group } from './x3d.mjs';
import { WorldInfo } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { SFVec3f } from './x3d.mjs';
import { SFRotation } from './x3d.mjs';
import { HAnimHumanoid } from './x3d.mjs';
import { HAnimJoint } from './x3d.mjs';
import { HAnimSegment } from './x3d.mjs';
import { TouchSensor } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Sphere } from './x3d.mjs';
import { SFFloat } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
import { LineSet } from './x3d.mjs';
import { MFInt32 } from './x3d.mjs';
import { Coordinate } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { ColorRGBA } from './x3d.mjs';
import { MFColorRGBA } from './x3d.mjs';
import { HAnimSite } from './x3d.mjs';
import { IndexedFaceSet } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { LOD } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { TimeSensor } from './x3d.mjs';
import { SFTime } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Inline } from './x3d.mjs';
import { ProximitySensor } from './x3d.mjs';
import { Box } from './x3d.mjs';
import { IndexedLineSet } from './x3d.mjs';
import { Text } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.3"),
      head : new SFNode(
        new head({
          component : new SFNode(
            new component({
              name : new SFString("HAnim"),
              level : new SFInt32(1)})),
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("HAnimSpecificationLOA3Motion.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, plus motion animations. Geometry visualizations are derived from HAnimSpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("24 April 2013")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("4 July 2020")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Convert to X3D4 HAnim2")}),

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
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Illustrated.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationLOA3Invisible.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("HAnimSpecificationExampleChangeLog.txt")}),

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
              name : new SFString("reference"),
              content : new SFString("Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.cis.upenn.edu/~badler/anthro/89-71.ps")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf")}),

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
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.wrl")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginal.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnimSpecificationLOA3Motion.x3d")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
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
                  info : new MFString([" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "]),
                  title : new SFString("HANIM 200x Default Joint Centers, LOA3")})])}),
          /*TODO move viewpoints to be internal to HAnimHumanoid*/
          /*Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.*/

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front"),
              position : new SFVec3f([0,0.4,4])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Close"),
              position : new SFVec3f([0,0.8,2])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Closer"),
              position : new SFVec3f([0,1.2,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,1.5,0.0016]),
              description : new SFString("Humanoid LOA 3 Front Face"),
              position : new SFVec3f([0,1.63,1])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side"),
              orientation : new SFRotation([0,1,0,1.5708]),
              position : new SFVec3f([2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Right Side Close"),
              orientation : new SFRotation([0,1,0,1.2]),
              position : new SFVec3f([1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side Close"),
              orientation : new SFRotation([0,1,0,-1.2]),
              position : new SFVec3f([-1,0.8,0.5])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Left Side"),
              orientation : new SFRotation([0,1,0,-1.5708]),
              position : new SFVec3f([-2.6,0.8,0])}),

            new Viewpoint({
              centerOfRotation : new SFVec3f([0,0.9149,0.0016]),
              description : new SFString("Humanoid LOA 3 Top"),
              orientation : new SFRotation([1,0,0,-1.5708]),
              position : new SFVec3f([0,3.5,0])}),

            new HAnimHumanoid({
              name : new SFString("humanoid"),
              DEF : new SFString("hanim_humanoid"),
              info : new MFString(["authorName=Matthew T. Beitler Joe D. Williams Don Brutzman","authorEmail=HAnim@web3D.org","copyright=none","creationDate=12 May 1999","usageRestrictions=none","humanoidVersion=2.0","height=1.7504"]),
              version : new SFString("1.0"),
              joints : new MFNode([
                new HAnimJoint({
                  name : new SFString("humanoid_root"),
                  DEF : new SFString("hanim_humanoid_root"),
                  center : new SFVec3f([0,0.824,0.0277]),
                  children : new MFNode([
                    new HAnimSegment({
                      name : new SFString("sacrum"),
                      DEF : new SFString("hanim_sacrum"),
                      /*<HAnimJoint name='humanoid_root'/> visualization sphere within <HAnimSegment name='sacrum'/>*/
                      children : new MFNode([
                        new TouchSensor({
                          description : new SFString("HAnimJoint HumanoidRoot, HAnimSegment sacrum")}),

                        new Transform({
                          translation : new SFVec3f([0,0.824,0.0277]),
                          children : new MFNode([
                            new Shape({
                              DEF : new SFString("HAnimJointShape"),
                              geometry : new SFNode(
                                new Sphere({
                                  radius : new SFFloat(0.006)})),
                              appearance : new SFNode(
                                new Appearance({
                                  DEF : new SFString("HAnimJointAppearance"),
                                  material : new SFNode(
                                    new Material({
                                      diffuseColor : new SFColor([1,0.5,0]),
                                      transparency : new SFFloat(0.5)}))}))})])}),
                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>*/

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0,0.9149,0.0016])})),
                              color : new SFNode(
                                new ColorRGBA({
                                  DEF : new SFString("HAnimSegmentLineColorRGBA"),
                                  color : new MFColorRGBA([1,1,0,1,1,1,0,0.1])}))}))}),
                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>*/

                        new Shape({
                          geometry : new SFNode(
                            new LineSet({
                              vertexCount : new MFInt32([2]),
                              coord : new SFNode(
                                new Coordinate({
                                  point : new MFVec3f([0,0.824,0.0277,0.0028,1.0568,-0.0776])})),
                              color : new SFNode(
                                new ColorRGBA({
                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                    new HAnimJoint({
                      name : new SFString("sacroiliac"),
                      DEF : new SFString("hanim_sacroiliac"),
                      center : new SFVec3f([0,0.9149,0.0016]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("pelvis"),
                          DEF : new SFString("hanim_pelvis"),
                          /*<HAnimJoint name='sacroiliac'/> visualization sphere within <HAnimSegment name='pelvis'/>*/
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint sacroiliac, HAnimSegment pelvis")}),

                            new Transform({
                              translation : new SFVec3f([0,0.9149,0.0016]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})])}),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0961,0.9124,-0.0001])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0961,0.9124,-0.0001])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1525,1.0628,0.0035])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      DEF : new SFString("HAnimSiteLineColorRGBA"),
                                      color : new MFColorRGBA([1,0,0,1,1,0,0,0.1])}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.1689,0.8419,0.0352])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1612,1.0537,0.0008])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.1677,0.8336,0.0303])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0887,1.0021,0.1112])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0925,0.9983,0.1052])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,-0.0716,1.019,-0.1138])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0774,1.019,-0.1151])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0,0.9149,0.0016,0.0034,0.8266,0.0257])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("r_iliocristale_pt"),
                              DEF : new SFString("hanim_r_iliocristale_pt"),
                              translation : new SFVec3f([-0.1525,1.0628,0.0035]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_iliocristale")}),

                                new Shape({
                                  DEF : new SFString("HAnimSiteShape"),
                                  geometry : new SFNode(
                                    new IndexedFaceSet({
                                      DEF : new SFString("DiamondIFS"),
                                      coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                      creaseAngle : new SFFloat(0.5),
                                      solid : new SFBool(false),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0,0.008,0,-0.008,0,0,0,0,0.008,0.008,0,0,0,0,-0.008,0,-0.008,0])}))})),
                                  appearance : new SFNode(
                                    new Appearance({
                                      material : new SFNode(
                                        new Material({
                                          diffuseColor : new SFColor([1,0,0])}))}))})])}),

                            new HAnimSite({
                              name : new SFString("r_trochanterion_pt"),
                              DEF : new SFString("hanim_r_trochanterion_pt"),
                              translation : new SFVec3f([-0.1689,0.8419,0.0352]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_trochanterion")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_iliocristale_pt"),
                              DEF : new SFString("hanim_l_iliocristale_pt"),
                              translation : new SFVec3f([0.1612,1.0537,0.0008]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_iliocristale")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_trochanterion_pt"),
                              DEF : new SFString("hanim_l_trochanterion_pt"),
                              translation : new SFVec3f([0.1677,0.8336,0.0303]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_trochanterion")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_asis_pt"),
                              DEF : new SFString("hanim_r_asis_pt"),
                              translation : new SFVec3f([-0.0887,1.0021,0.1112]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_asis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_asis_pt"),
                              DEF : new SFString("hanim_l_asis_pt"),
                              translation : new SFVec3f([0.0925,0.9983,0.1052]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_asis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("r_psis_pt"),
                              DEF : new SFString("hanim_r_psis_pt"),
                              translation : new SFVec3f([-0.0716,1.019,-0.1138]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite r_psis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("l_psis_pt"),
                              DEF : new SFString("hanim_l_psis_pt"),
                              translation : new SFVec3f([0.0774,1.019,-0.1151]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite l_psis")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("crotch_pt"),
                              DEF : new SFString("hanim_crotch_pt"),
                              translation : new SFVec3f([0.0034,0.8266,0.0257]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite crotch")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          name : new SFString("l_hip"),
                          DEF : new SFString("hanim_l_hip"),
                          center : new SFVec3f([0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l_thigh"),
                              DEF : new SFString("hanim_l_thigh"),
                              /*<HAnimJoint name='l_hip'/> visualization sphere within <HAnimSegment name='l_thigh'/>*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint l_hip, HAnimSegment l_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.104,0.4867,0.0308])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0993,0.4881,-0.0309])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.1598,0.4967,0.0297])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0961,0.9124,-0.0001,0.0398,0.4946,0.0303])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("l_knee_crease_pt"),
                                  DEF : new SFString("hanim_l_knee_crease_pt"),
                                  translation : new SFVec3f([0.0993,0.4881,-0.0309]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_knee_crease")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([0.1598,0.4967,0.0297]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_lateral_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("l_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_l_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([0.0398,0.4946,0.0303]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite l_femoral_medial_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("l_knee"),
                              DEF : new SFString("hanim_l_knee"),
                              center : new SFVec3f([0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l_calf"),
                                  DEF : new SFString("hanim_l_calf"),
                                  /*<HAnimJoint name='l_knee'/> visualization sphere within <HAnimSegment name='l_calf'/>*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint l_knee, HAnimSegment l_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>*/

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.104,0.4867,0.0308,0.1101,0.0656,-0.0736])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("l_ankle"),
                                  DEF : new SFString("hanim_l_ankle"),
                                  center : new SFVec3f([0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l_hindfoot"),
                                      DEF : new SFString("hanim_l_hindfoot"),
                                      /*<HAnimJoint name='l_ankle'/> visualization sphere within <HAnimSegment name='l_hindfoot'/>*/
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint l_ankle, HAnimSegment l_hindfoot")}),

                                        new Transform({
                                          translation : new SFVec3f([0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1086,0.0001,-0.0368])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.1308,0.0597,-0.1032])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0716,-0.0881])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.089,0.0575,-0.0943])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.1101,0.0656,-0.0736,0.0974,0.0259,-0.1171])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("l_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_l_lateral_malleolus_pt"),
                                          translation : new SFVec3f([0.1308,0.0597,-0.1032]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_lateral_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_l_medial_malleolus_pt"),
                                          translation : new SFVec3f([0.089,0.0716,-0.0881]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_medial_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_sphyrion_pt"),
                                          DEF : new SFString("hanim_l_sphyrion_pt"),
                                          translation : new SFVec3f([0.089,0.0575,-0.0943]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_sphyrion")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_l_calcaneous_post_pt"),
                                          translation : new SFVec3f([0.0974,0.0259,-0.1171]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_calcaneous_post")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("l_subtalar"),
                                      DEF : new SFString("hanim_l_subtalar"),
                                      center : new SFVec3f([0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l_midproximal"),
                                          DEF : new SFString("hanim_l_midproximal"),
                                          /*<HAnimJoint name='l_subtalar'/> visualization sphere within <HAnimSegment name='l_midproximal'/>*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint l_subtalar, HAnimSegment l_midproximal")}),

                                            new Transform({
                                              translation : new SFVec3f([0.1086,0.0001,-0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>*/

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.1086,0.0001,-0.0368,0.1086,0.0001,0.0368])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("l_midtarsal"),
                                          DEF : new SFString("hanim_l_midtarsal"),
                                          center : new SFVec3f([0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("l_middistal"),
                                              DEF : new SFString("hanim_l_middistal"),
                                              /*<HAnimJoint name='l_midtarsal'/> visualization sphere within <HAnimSegment name='l_middistal'/>*/
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint l_midtarsal, HAnimSegment l_middistal")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.1086,0.0001,0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>*/

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.1086,0,0.0762])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>*/

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.1086,0.0001,0.0368,0.0816,0.0232,0.0106])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                new HAnimSite({
                                                  name : new SFString("l_metatarsal_pha1_pt"),
                                                  DEF : new SFString("hanim_l_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([0.0816,0.0232,0.0106]),
                                                  /*HAnimSite visualization shape*/
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite l_metatarsal_pha1")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("l_metatarsal"),
                                              DEF : new SFString("hanim_l_metatarsal"),
                                              center : new SFVec3f([0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("l_forefoot"),
                                                  DEF : new SFString("hanim_l_forefoot"),
                                                  /*<HAnimJoint name='l_metatarsal'/> visualization sphere within <HAnimSegment name='l_forefoot'/>*/
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint l_metatarsal, HAnimSegment l_forefoot")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.1086,0,0.0762]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1354,0.0016,0.1476])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1825,0.007,0.0928])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.1086,0,0.0762,0.1195,0.0079,0.1433])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("l_forefoot_tip"),
                                                      DEF : new SFString("hanim_l_forefoot_tip"),
                                                      translation : new SFVec3f([0.1354,0.0016,0.1476]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_metatarsal_pha5_pt"),
                                                      DEF : new SFString("hanim_l_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([0.1825,0.007,0.0928]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_metatarsal_pha5")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("l_digit2_pt"),
                                                      DEF : new SFString("hanim_l_digit2_pt"),
                                                      translation : new SFVec3f([0.1195,0.0079,0.1433]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite l_digit2")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])}),

                        new HAnimJoint({
                          name : new SFString("r_hip"),
                          DEF : new SFString("hanim_r_hip"),
                          center : new SFVec3f([-0.0961,0.9124,-0.0001]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("r_thigh"),
                              DEF : new SFString("hanim_r_thigh"),
                              /*<HAnimJoint name='r_hip'/> visualization sphere within <HAnimSegment name='r_thigh'/>*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint r_hip, HAnimSegment r_thigh")}),

                                new Transform({
                                  translation : new SFVec3f([-0.0961,0.9124,-0.0001]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.104,0.4867,0.0308])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0825,0.4932,-0.0326])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.1421,0.4992,0.031])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([-0.0961,0.9124,-0.0001,-0.0221,0.5014,0.0289])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                new HAnimSite({
                                  name : new SFString("r_knee_crease_pt"),
                                  DEF : new SFString("hanim_r_knee_crease_pt"),
                                  translation : new SFVec3f([-0.0825,0.4932,-0.0326]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_knee_crease")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_lateral_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_lateral_epicn_pt"),
                                  translation : new SFVec3f([-0.1421,0.4992,0.031]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_lateral_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])}),

                                new HAnimSite({
                                  name : new SFString("r_femoral_medial_epicn_pt"),
                                  DEF : new SFString("hanim_r_femoral_medial_epicn_pt"),
                                  translation : new SFVec3f([-0.0221,0.5014,0.0289]),
                                  /*HAnimSite visualization shape*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimSite r_femoral_medial_epicn")}),

                                    new Shape({
                                      USE : new SFString("HAnimSiteShape")})])})])}),

                            new HAnimJoint({
                              name : new SFString("r_knee"),
                              DEF : new SFString("hanim_r_knee"),
                              center : new SFVec3f([-0.104,0.4867,0.0308]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("r_calf"),
                                  DEF : new SFString("hanim_r_calf"),
                                  /*<HAnimJoint name='r_knee'/> visualization sphere within <HAnimSegment name='r_calf'/>*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint r_knee, HAnimSegment r_calf")}),

                                    new Transform({
                                      translation : new SFVec3f([-0.104,0.4867,0.0308]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>*/

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([-0.104,0.4867,0.0308,-0.1101,0.0656,-0.0736])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("r_ankle"),
                                  DEF : new SFString("hanim_r_ankle"),
                                  center : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("r_hindfoot"),
                                      DEF : new SFString("hanim_r_hindfoot"),
                                      /*<HAnimJoint name='r_ankle'/> visualization sphere within <HAnimSegment name='r_hindfoot'/>*/
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint r_ankle, HAnimSegment r_hindfoot")}),

                                        new Transform({
                                          translation : new SFVec3f([-0.1101,0.0656,-0.0736]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1086,0.0001,-0.0368])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.1006,0.0658,-0.1075])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0591,0.076,-0.0928])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0603,0.061,-0.1002])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([-0.1101,0.0656,-0.0736,-0.0692,0.0297,-0.1221])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("r_lateral_malleolus_pt"),
                                          DEF : new SFString("hanim_r_lateral_malleolus_pt"),
                                          translation : new SFVec3f([-0.1006,0.0658,-0.1075]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_lateral_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_medial_malleolus_pt"),
                                          DEF : new SFString("hanim_r_medial_malleolus_pt"),
                                          translation : new SFVec3f([-0.0591,0.076,-0.0928]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_medial_malleolus")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_sphyrion_pt"),
                                          DEF : new SFString("hanim_r_sphyrion_pt"),
                                          translation : new SFVec3f([-0.0603,0.061,-0.1002]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_sphyrion")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("r_calcaneous_post_pt"),
                                          DEF : new SFString("hanim_r_calcaneous_post_pt"),
                                          translation : new SFVec3f([-0.0692,0.0297,-0.1221]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_calcaneous_post")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("r_subtalar"),
                                      DEF : new SFString("hanim_r_subtalar"),
                                      center : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("r_midproximal"),
                                          DEF : new SFString("hanim_r_midproximal"),
                                          /*<HAnimJoint name='r_subtalar'/> visualization sphere within <HAnimSegment name='r_midproximal'/>*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint r_subtalar, HAnimSegment r_midproximal")}),

                                            new Transform({
                                              translation : new SFVec3f([-0.1086,0.0001,-0.0368]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>*/

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([-0.1086,0.0001,-0.0368,-0.1086,0.0001,0.0368])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("r_midtarsal"),
                                          DEF : new SFString("hanim_r_midtarsal"),
                                          center : new SFVec3f([-0.1086,0.0001,0.0368]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("r_middistal"),
                                              DEF : new SFString("hanim_r_middistal"),
                                              /*<HAnimJoint name='r_midtarsal'/> visualization sphere within <HAnimSegment name='r_middistal'/>*/
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint r_midtarsal, HAnimSegment r_middistal")}),

                                                new Transform({
                                                  translation : new SFVec3f([-0.1086,0.0001,0.0368]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>*/

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.1086,0,0.0762])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>*/

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([-0.1086,0.0001,0.0368,-0.0521,0.026,0.0127])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                new HAnimSite({
                                                  name : new SFString("r_metatarsal_pha1_pt"),
                                                  DEF : new SFString("hanim_r_metatarsal_pha1_pt"),
                                                  translation : new SFVec3f([-0.0521,0.026,0.0127]),
                                                  /*HAnimSite visualization shape*/
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimSite r_metatarsal_pha1")}),

                                                    new Shape({
                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                            new HAnimJoint({
                                              name : new SFString("r_metatarsal"),
                                              DEF : new SFString("hanim_r_metatarsal"),
                                              center : new SFVec3f([-0.1086,0,0.0762]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("r_forefoot"),
                                                  DEF : new SFString("hanim_r_forefoot"),
                                                  /*<HAnimJoint name='r_metatarsal'/> visualization sphere within <HAnimSegment name='r_forefoot'/>*/
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint r_metatarsal, HAnimSegment r_forefoot")}),

                                                    new Transform({
                                                      translation : new SFVec3f([-0.1086,0,0.0762]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1043,0.0227,0.145])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.1523,0.0166,0.0895])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([-0.1086,0,0.0762,-0.0883,0.0134,0.1383])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                    new HAnimSite({
                                                      name : new SFString("r_forefoot_tip"),
                                                      DEF : new SFString("hanim_r_forefoot_tip"),
                                                      translation : new SFVec3f([-0.1043,0.0227,0.145]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_forefoot_tip")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_metatarsal_pha5_pt"),
                                                      DEF : new SFString("hanim_r_metatarsal_pha5_pt"),
                                                      translation : new SFVec3f([-0.1523,0.0166,0.0895]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_metatarsal_pha5")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])}),

                                                    new HAnimSite({
                                                      name : new SFString("r_digit2_pt"),
                                                      DEF : new SFString("hanim_r_digit2_pt"),
                                                      translation : new SFVec3f([-0.0883,0.0134,0.1383]),
                                                      /*HAnimSite visualization shape*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimSite r_digit2")}),

                                                        new Shape({
                                                          USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])}),

                    new HAnimJoint({
                      name : new SFString("vl5"),
                      DEF : new SFString("hanim_vl5"),
                      center : new SFVec3f([0.0028,1.0568,-0.0776]),
                      children : new MFNode([
                        new HAnimSegment({
                          name : new SFString("l5"),
                          DEF : new SFString("hanim_l5"),
                          /*<HAnimJoint name='vl5'/> visualization sphere within <HAnimSegment name='l5'/>*/
                          children : new MFNode([
                            new TouchSensor({
                              description : new SFString("HAnimJoint vl5, HAnimSegment l5")}),

                            new Transform({
                              translation : new SFVec3f([0.0028,1.0568,-0.0776]),
                              children : new MFNode([
                                new Shape({
                                  USE : new SFString("HAnimJointShape")})])}),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0035,1.0925,-0.0787])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0,1.0915,-0.1091])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>*/

                            new Shape({
                              geometry : new SFNode(
                                new LineSet({
                                  vertexCount : new MFInt32([2]),
                                  coord : new SFNode(
                                    new Coordinate({
                                      point : new MFVec3f([0.0028,1.0568,-0.0776,0.0069,1.0966,0.1017])})),
                                  color : new SFNode(
                                    new ColorRGBA({
                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                            new HAnimSite({
                              name : new SFString("waist_preferred_post_pt"),
                              DEF : new SFString("hanim_waist_preferred_post_pt"),
                              translation : new SFVec3f([0,1.0915,-0.1091]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite waist_preferred_post")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])}),

                            new HAnimSite({
                              name : new SFString("navel_pt"),
                              DEF : new SFString("hanim_navel_pt"),
                              translation : new SFVec3f([0.0069,1.0966,0.1017]),
                              /*HAnimSite visualization shape*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimSite navel")}),

                                new Shape({
                                  USE : new SFString("HAnimSiteShape")})])})])}),

                        new HAnimJoint({
                          name : new SFString("vl4"),
                          DEF : new SFString("hanim_vl4"),
                          center : new SFVec3f([0.0035,1.0925,-0.0787]),
                          children : new MFNode([
                            new HAnimSegment({
                              name : new SFString("l4"),
                              DEF : new SFString("hanim_l4"),
                              /*<HAnimJoint name='vl4'/> visualization sphere within <HAnimSegment name='l4'/>*/
                              children : new MFNode([
                                new TouchSensor({
                                  description : new SFString("HAnimJoint vl4, HAnimSegment l4")}),

                                new Transform({
                                  translation : new SFVec3f([0.0035,1.0925,-0.0787]),
                                  children : new MFNode([
                                    new Shape({
                                      USE : new SFString("HAnimJointShape")})])}),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>*/

                                new Shape({
                                  geometry : new SFNode(
                                    new LineSet({
                                      vertexCount : new MFInt32([2]),
                                      coord : new SFNode(
                                        new Coordinate({
                                          point : new MFVec3f([0.0035,1.0925,-0.0787,0.0041,1.1276,-0.0796])})),
                                      color : new SFNode(
                                        new ColorRGBA({
                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                            new HAnimJoint({
                              name : new SFString("vl3"),
                              DEF : new SFString("hanim_vl3"),
                              center : new SFVec3f([0.0041,1.1276,-0.0796]),
                              children : new MFNode([
                                new HAnimSegment({
                                  name : new SFString("l3"),
                                  DEF : new SFString("hanim_l3"),
                                  /*<HAnimJoint name='vl3'/> visualization sphere within <HAnimSegment name='l3'/>*/
                                  children : new MFNode([
                                    new TouchSensor({
                                      description : new SFString("HAnimJoint vl3, HAnimSegment l3")}),

                                    new Transform({
                                      translation : new SFVec3f([0.0041,1.1276,-0.0796]),
                                      children : new MFNode([
                                        new Shape({
                                          USE : new SFString("HAnimJointShape")})])}),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>*/

                                    new Shape({
                                      geometry : new SFNode(
                                        new LineSet({
                                          vertexCount : new MFInt32([2]),
                                          coord : new SFNode(
                                            new Coordinate({
                                              point : new MFVec3f([0.0041,1.1276,-0.0796,0.0045,1.1546,-0.08])})),
                                          color : new SFNode(
                                            new ColorRGBA({
                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                new HAnimJoint({
                                  name : new SFString("vl2"),
                                  DEF : new SFString("hanim_vl2"),
                                  center : new SFVec3f([0.0045,1.1546,-0.08]),
                                  children : new MFNode([
                                    new HAnimSegment({
                                      name : new SFString("l2"),
                                      DEF : new SFString("hanim_l2"),
                                      /*<HAnimJoint name='vl2'/> visualization sphere within <HAnimSegment name='l2'/>*/
                                      children : new MFNode([
                                        new TouchSensor({
                                          description : new SFString("HAnimJoint vl2, HAnimSegment l2")}),

                                        new Transform({
                                          translation : new SFVec3f([0.0045,1.1546,-0.08]),
                                          children : new MFNode([
                                            new Shape({
                                              USE : new SFString("HAnimJointShape")})])}),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0048,1.1912,-0.0805])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,-0.0711,1.1941,0.1016])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0871,1.1925,0.0992])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>*/

                                        new Shape({
                                          geometry : new SFNode(
                                            new LineSet({
                                              vertexCount : new MFInt32([2]),
                                              coord : new SFNode(
                                                new Coordinate({
                                                  point : new MFVec3f([0.0045,1.1546,-0.08,0.0049,1.1908,-0.1113])})),
                                              color : new SFNode(
                                                new ColorRGBA({
                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                        new HAnimSite({
                                          name : new SFString("r_rib10_pt"),
                                          DEF : new SFString("hanim_r_rib10_pt"),
                                          translation : new SFVec3f([-0.0711,1.1941,0.1016]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite r_rib10")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("l_rib10_pt"),
                                          DEF : new SFString("hanim_l_rib10_pt"),
                                          translation : new SFVec3f([0.0871,1.1925,0.0992]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite l_rib10")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])}),

                                        new HAnimSite({
                                          name : new SFString("rib10_midspine_pt"),
                                          DEF : new SFString("hanim_rib10_midspine_pt"),
                                          translation : new SFVec3f([0.0049,1.1908,-0.1113]),
                                          /*HAnimSite visualization shape*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimSite rib10_midspine")}),

                                            new Shape({
                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                    new HAnimJoint({
                                      name : new SFString("vl1"),
                                      DEF : new SFString("hanim_vl1"),
                                      center : new SFVec3f([0.0048,1.1912,-0.0805]),
                                      children : new MFNode([
                                        new HAnimSegment({
                                          name : new SFString("l1"),
                                          DEF : new SFString("hanim_l1"),
                                          /*<HAnimJoint name='vl1'/> visualization sphere within <HAnimSegment name='l1'/>*/
                                          children : new MFNode([
                                            new TouchSensor({
                                              description : new SFString("HAnimJoint vl1, HAnimSegment l1")}),

                                            new Transform({
                                              translation : new SFVec3f([0.0048,1.1912,-0.0805]),
                                              children : new MFNode([
                                                new Shape({
                                                  USE : new SFString("HAnimJointShape")})])}),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>*/

                                            new Shape({
                                              geometry : new SFNode(
                                                new LineSet({
                                                  vertexCount : new MFInt32([2]),
                                                  coord : new SFNode(
                                                    new Coordinate({
                                                      point : new MFVec3f([0.0048,1.1912,-0.0805,0.0051,1.2278,-0.0808])})),
                                                  color : new SFNode(
                                                    new ColorRGBA({
                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                        new HAnimJoint({
                                          name : new SFString("vt12"),
                                          DEF : new SFString("hanim_vt12"),
                                          center : new SFVec3f([0.0051,1.2278,-0.0808]),
                                          children : new MFNode([
                                            new HAnimSegment({
                                              name : new SFString("t12"),
                                              DEF : new SFString("hanim_t12"),
                                              /*<HAnimJoint name='vt12'/> visualization sphere within <HAnimSegment name='t12'/>*/
                                              children : new MFNode([
                                                new TouchSensor({
                                                  description : new SFString("HAnimJoint vt12, HAnimSegment t12")}),

                                                new Transform({
                                                  translation : new SFVec3f([0.0051,1.2278,-0.0808]),
                                                  children : new MFNode([
                                                    new Shape({
                                                      USE : new SFString("HAnimJointShape")})])}),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>*/

                                                new Shape({
                                                  geometry : new SFNode(
                                                    new LineSet({
                                                      vertexCount : new MFInt32([2]),
                                                      coord : new SFNode(
                                                        new Coordinate({
                                                          point : new MFVec3f([0.0051,1.2278,-0.0808,0.0053,1.2679,-0.081])})),
                                                      color : new SFNode(
                                                        new ColorRGBA({
                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                            new HAnimJoint({
                                              name : new SFString("vt11"),
                                              DEF : new SFString("hanim_vt11"),
                                              center : new SFVec3f([0.0053,1.2679,-0.081]),
                                              children : new MFNode([
                                                new HAnimSegment({
                                                  name : new SFString("t11"),
                                                  DEF : new SFString("hanim_t11"),
                                                  /*<HAnimJoint name='vt11'/> visualization sphere within <HAnimSegment name='t11'/>*/
                                                  children : new MFNode([
                                                    new TouchSensor({
                                                      description : new SFString("HAnimJoint vt11, HAnimSegment t11")}),

                                                    new Transform({
                                                      translation : new SFVec3f([0.0053,1.2679,-0.081]),
                                                      children : new MFNode([
                                                        new Shape({
                                                          USE : new SFString("HAnimJointShape")})])}),
                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>*/

                                                    new Shape({
                                                      geometry : new SFNode(
                                                        new LineSet({
                                                          vertexCount : new MFInt32([2]),
                                                          coord : new SFNode(
                                                            new Coordinate({
                                                              point : new MFVec3f([0.0053,1.2679,-0.081,0.0056,1.2848,-0.0822])})),
                                                          color : new SFNode(
                                                            new ColorRGBA({
                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                new HAnimJoint({
                                                  name : new SFString("vt10"),
                                                  DEF : new SFString("hanim_vt10"),
                                                  center : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                  children : new MFNode([
                                                    new HAnimSegment({
                                                      name : new SFString("t10"),
                                                      DEF : new SFString("hanim_t10"),
                                                      /*<HAnimJoint name='vt10'/> visualization sphere within <HAnimSegment name='t10'/>*/
                                                      children : new MFNode([
                                                        new TouchSensor({
                                                          description : new SFString("HAnimJoint vt10, HAnimSegment t10")}),

                                                        new Transform({
                                                          translation : new SFVec3f([0.0056,1.2848,-0.0822]),
                                                          children : new MFNode([
                                                            new Shape({
                                                              USE : new SFString("HAnimJointShape")})])}),
                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>*/

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0057,1.3126,-0.0838])})),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>*/

                                                        new Shape({
                                                          geometry : new SFNode(
                                                            new LineSet({
                                                              vertexCount : new MFInt32([2]),
                                                              coord : new SFNode(
                                                                new Coordinate({
                                                                  point : new MFVec3f([0.0056,1.2848,-0.0822,0.0085,1.2995,0.1147])})),
                                                              color : new SFNode(
                                                                new ColorRGBA({
                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                        new HAnimSite({
                                                          name : new SFString("substernale_pt"),
                                                          DEF : new SFString("hanim_substernale_pt"),
                                                          translation : new SFVec3f([0.0085,1.2995,0.1147]),
                                                          /*HAnimSite visualization shape*/
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimSite substernale")}),

                                                            new Shape({
                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                    new HAnimJoint({
                                                      name : new SFString("vt9"),
                                                      DEF : new SFString("hanim_vt9"),
                                                      center : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                      children : new MFNode([
                                                        new HAnimSegment({
                                                          name : new SFString("t9"),
                                                          DEF : new SFString("hanim_t9"),
                                                          /*<HAnimJoint name='vt9'/> visualization sphere within <HAnimSegment name='t9'/>*/
                                                          children : new MFNode([
                                                            new TouchSensor({
                                                              description : new SFString("HAnimJoint vt9, HAnimSegment t9")}),

                                                            new Transform({
                                                              translation : new SFVec3f([0.0057,1.3126,-0.0838]),
                                                              children : new MFNode([
                                                                new Shape({
                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>*/

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0057,1.3382,-0.0845])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>*/

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,-0.0736,1.3385,0.1217])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>*/

                                                            new Shape({
                                                              geometry : new SFNode(
                                                                new LineSet({
                                                                  vertexCount : new MFInt32([2]),
                                                                  coord : new SFNode(
                                                                    new Coordinate({
                                                                      point : new MFVec3f([0.0057,1.3126,-0.0838,0.0918,1.3382,0.1192])})),
                                                                  color : new SFNode(
                                                                    new ColorRGBA({
                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                            new HAnimSite({
                                                              name : new SFString("r_thelion_pt"),
                                                              DEF : new SFString("hanim_r_thelion_pt"),
                                                              translation : new SFVec3f([-0.0736,1.3385,0.1217]),
                                                              /*HAnimSite visualization shape*/
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite r_thelion")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                            new HAnimSite({
                                                              name : new SFString("l_thelion_pt"),
                                                              DEF : new SFString("hanim_l_thelion_pt"),
                                                              translation : new SFVec3f([0.0918,1.3382,0.1192]),
                                                              /*HAnimSite visualization shape*/
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimSite l_thelion")}),

                                                                new Shape({
                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                        new HAnimJoint({
                                                          name : new SFString("vt8"),
                                                          DEF : new SFString("hanim_vt8"),
                                                          center : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                          children : new MFNode([
                                                            new HAnimSegment({
                                                              name : new SFString("t8"),
                                                              DEF : new SFString("hanim_t8"),
                                                              /*<HAnimJoint name='vt8'/> visualization sphere within <HAnimSegment name='t8'/>*/
                                                              children : new MFNode([
                                                                new TouchSensor({
                                                                  description : new SFString("HAnimJoint vt8, HAnimSegment t8")}),

                                                                new Transform({
                                                                  translation : new SFVec3f([0.0057,1.3382,-0.0845]),
                                                                  children : new MFNode([
                                                                    new Shape({
                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>*/

                                                                new Shape({
                                                                  geometry : new SFNode(
                                                                    new LineSet({
                                                                      vertexCount : new MFInt32([2]),
                                                                      coord : new SFNode(
                                                                        new Coordinate({
                                                                          point : new MFVec3f([0.0057,1.3382,-0.0845,0.0058,1.3625,-0.0833])})),
                                                                      color : new SFNode(
                                                                        new ColorRGBA({
                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                            new HAnimJoint({
                                                              name : new SFString("vt7"),
                                                              DEF : new SFString("hanim_vt7"),
                                                              center : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                              children : new MFNode([
                                                                new HAnimSegment({
                                                                  name : new SFString("t7"),
                                                                  DEF : new SFString("hanim_t7"),
                                                                  /*<HAnimJoint name='vt7'/> visualization sphere within <HAnimSegment name='t7'/>*/
                                                                  children : new MFNode([
                                                                    new TouchSensor({
                                                                      description : new SFString("HAnimJoint vt7, HAnimSegment t7")}),

                                                                    new Transform({
                                                                      translation : new SFVec3f([0.0058,1.3625,-0.0833]),
                                                                      children : new MFNode([
                                                                        new Shape({
                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>*/

                                                                    new Shape({
                                                                      geometry : new SFNode(
                                                                        new LineSet({
                                                                          vertexCount : new MFInt32([2]),
                                                                          coord : new SFNode(
                                                                            new Coordinate({
                                                                              point : new MFVec3f([0.0058,1.3625,-0.0833,0.0059,1.3866,-0.08])})),
                                                                          color : new SFNode(
                                                                            new ColorRGBA({
                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                new HAnimJoint({
                                                                  name : new SFString("vt6"),
                                                                  DEF : new SFString("hanim_vt6"),
                                                                  center : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                  children : new MFNode([
                                                                    new HAnimSegment({
                                                                      name : new SFString("t6"),
                                                                      DEF : new SFString("hanim_t6"),
                                                                      /*<HAnimJoint name='vt6'/> visualization sphere within <HAnimSegment name='t6'/>*/
                                                                      children : new MFNode([
                                                                        new TouchSensor({
                                                                          description : new SFString("HAnimJoint vt6, HAnimSegment t6")}),

                                                                        new Transform({
                                                                          translation : new SFVec3f([0.0059,1.3866,-0.08]),
                                                                          children : new MFNode([
                                                                            new Shape({
                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>*/

                                                                        new Shape({
                                                                          geometry : new SFNode(
                                                                            new LineSet({
                                                                              vertexCount : new MFInt32([2]),
                                                                              coord : new SFNode(
                                                                                new Coordinate({
                                                                                  point : new MFVec3f([0.0059,1.3866,-0.08,0.006,1.4102,-0.0745])})),
                                                                              color : new SFNode(
                                                                                new ColorRGBA({
                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                    new HAnimJoint({
                                                                      name : new SFString("vt5"),
                                                                      DEF : new SFString("hanim_vt5"),
                                                                      center : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                      children : new MFNode([
                                                                        new HAnimSegment({
                                                                          name : new SFString("t5"),
                                                                          DEF : new SFString("hanim_t5"),
                                                                          /*<HAnimJoint name='vt5'/> visualization sphere within <HAnimSegment name='t5'/>*/
                                                                          children : new MFNode([
                                                                            new TouchSensor({
                                                                              description : new SFString("HAnimJoint vt5, HAnimSegment t5")}),

                                                                            new Transform({
                                                                              translation : new SFVec3f([0.006,1.4102,-0.0745]),
                                                                              children : new MFNode([
                                                                                new Shape({
                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>*/

                                                                            new Shape({
                                                                              geometry : new SFNode(
                                                                                new LineSet({
                                                                                  vertexCount : new MFInt32([2]),
                                                                                  coord : new SFNode(
                                                                                    new Coordinate({
                                                                                      point : new MFVec3f([0.006,1.4102,-0.0745,0.0061,1.432,-0.0675])})),
                                                                                  color : new SFNode(
                                                                                    new ColorRGBA({
                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                        new HAnimJoint({
                                                                          name : new SFString("vt4"),
                                                                          DEF : new SFString("hanim_vt4"),
                                                                          center : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                          children : new MFNode([
                                                                            new HAnimSegment({
                                                                              name : new SFString("t4"),
                                                                              DEF : new SFString("hanim_t4"),
                                                                              /*<HAnimJoint name='vt4'/> visualization sphere within <HAnimSegment name='t4'/>*/
                                                                              children : new MFNode([
                                                                                new TouchSensor({
                                                                                  description : new SFString("HAnimJoint vt4, HAnimSegment t4")}),

                                                                                new Transform({
                                                                                  translation : new SFVec3f([0.0061,1.432,-0.0675]),
                                                                                  children : new MFNode([
                                                                                    new Shape({
                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>*/

                                                                                new Shape({
                                                                                  geometry : new SFNode(
                                                                                    new LineSet({
                                                                                      vertexCount : new MFInt32([2]),
                                                                                      coord : new SFNode(
                                                                                        new Coordinate({
                                                                                          point : new MFVec3f([0.0061,1.432,-0.0675,0.0062,1.4583,-0.057])})),
                                                                                      color : new SFNode(
                                                                                        new ColorRGBA({
                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                            new HAnimJoint({
                                                                              name : new SFString("vt3"),
                                                                              DEF : new SFString("hanim_vt3"),
                                                                              center : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                              children : new MFNode([
                                                                                new HAnimSegment({
                                                                                  name : new SFString("t3"),
                                                                                  DEF : new SFString("hanim_t3"),
                                                                                  /*<HAnimJoint name='vt3'/> visualization sphere within <HAnimSegment name='t3'/>*/
                                                                                  children : new MFNode([
                                                                                    new TouchSensor({
                                                                                      description : new SFString("HAnimJoint vt3, HAnimSegment t3")}),

                                                                                    new Transform({
                                                                                      translation : new SFVec3f([0.0062,1.4583,-0.057]),
                                                                                      children : new MFNode([
                                                                                        new Shape({
                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>*/

                                                                                    new Shape({
                                                                                      geometry : new SFNode(
                                                                                        new LineSet({
                                                                                          vertexCount : new MFInt32([2]),
                                                                                          coord : new SFNode(
                                                                                            new Coordinate({
                                                                                              point : new MFVec3f([0.0062,1.4583,-0.057,0.0063,1.4761,-0.0484])})),
                                                                                          color : new SFNode(
                                                                                            new ColorRGBA({
                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                new HAnimJoint({
                                                                                  name : new SFString("vt2"),
                                                                                  DEF : new SFString("hanim_vt2"),
                                                                                  center : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                  children : new MFNode([
                                                                                    new HAnimSegment({
                                                                                      name : new SFString("t2"),
                                                                                      DEF : new SFString("hanim_t2"),
                                                                                      /*<HAnimJoint name='vt2'/> visualization sphere within <HAnimSegment name='t2'/>*/
                                                                                      children : new MFNode([
                                                                                        new TouchSensor({
                                                                                          description : new SFString("HAnimJoint vt2, HAnimSegment t2")}),

                                                                                        new Transform({
                                                                                          translation : new SFVec3f([0.0063,1.4761,-0.0484]),
                                                                                          children : new MFNode([
                                                                                            new Shape({
                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>*/

                                                                                        new Shape({
                                                                                          geometry : new SFNode(
                                                                                            new LineSet({
                                                                                              vertexCount : new MFInt32([2]),
                                                                                              coord : new SFNode(
                                                                                                new Coordinate({
                                                                                                  point : new MFVec3f([0.0063,1.4761,-0.0484,0.0065,1.4951,-0.0387])})),
                                                                                              color : new SFNode(
                                                                                                new ColorRGBA({
                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                    new HAnimJoint({
                                                                                      name : new SFString("vt1"),
                                                                                      DEF : new SFString("hanim_vt1"),
                                                                                      center : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                      children : new MFNode([
                                                                                        new HAnimSegment({
                                                                                          name : new SFString("t1"),
                                                                                          DEF : new SFString("hanim_t1"),
                                                                                          /*<HAnimJoint name='vt1'/> visualization sphere within <HAnimSegment name='t1'/>*/
                                                                                          children : new MFNode([
                                                                                            new TouchSensor({
                                                                                              description : new SFString("HAnimJoint vt1, HAnimSegment t1")}),

                                                                                            new Transform({
                                                                                              translation : new SFVec3f([0.0065,1.4951,-0.0387]),
                                                                                              children : new MFNode([
                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>*/

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0066,1.5132,-0.0301])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>*/

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.082,1.4488,-0.0353])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>*/

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,-0.082,1.4488,-0.0353])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>*/

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0084,1.4714,0.0551])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>*/

                                                                                            new Shape({
                                                                                              geometry : new SFNode(
                                                                                                new LineSet({
                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                  coord : new SFNode(
                                                                                                    new Coordinate({
                                                                                                      point : new MFVec3f([0.0065,1.4951,-0.0387,0.0064,1.52,-0.0815])})),
                                                                                                  color : new SFNode(
                                                                                                    new ColorRGBA({
                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("suprasternale_pt"),
                                                                                              DEF : new SFString("hanim_suprasternale_pt"),
                                                                                              translation : new SFVec3f([0.0084,1.4714,0.0551]),
                                                                                              /*HAnimSite visualization shape*/
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite suprasternale")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                            new HAnimSite({
                                                                                              name : new SFString("cervicale_pt"),
                                                                                              DEF : new SFString("hanim_cervicale_pt"),
                                                                                              translation : new SFVec3f([0.0064,1.52,-0.0815]),
                                                                                              /*HAnimSite visualization shape*/
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimSite cervicale")}),

                                                                                                new Shape({
                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("vc7"),
                                                                                          DEF : new SFString("hanim_vc7"),
                                                                                          center : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("c7"),
                                                                                              DEF : new SFString("hanim_c7"),
                                                                                              /*<HAnimJoint name='vc7'/> visualization sphere within <HAnimSegment name='c7'/>*/
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint vc7, HAnimSegment c7")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.0066,1.5132,-0.0301]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0066,1.5357,-0.0143])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,-0.0419,1.5149,-0.022])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.0066,1.5132,-0.0301,0.0646,1.5141,-0.038])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_neck_base_pt"),
                                                                                                  DEF : new SFString("hanim_r_neck_base_pt"),
                                                                                                  translation : new SFVec3f([-0.0419,1.5149,-0.022]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_neck_base")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_neck_base_pt"),
                                                                                                  DEF : new SFString("hanim_l_neck_base_pt"),
                                                                                                  translation : new SFVec3f([0.0646,1.5141,-0.038]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_neck_base")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("vc6"),
                                                                                              DEF : new SFString("hanim_vc6"),
                                                                                              center : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("c6"),
                                                                                                  DEF : new SFString("hanim_c6"),
                                                                                                  /*<HAnimJoint name='vc6'/> visualization sphere within <HAnimSegment name='c6'/>*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint vc6, HAnimSegment c6")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0066,1.5357,-0.0143]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>*/

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0066,1.5357,-0.0143,0.0066,1.552,-0.0082])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("vc5"),
                                                                                                  DEF : new SFString("hanim_vc5"),
                                                                                                  center : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("c5"),
                                                                                                      DEF : new SFString("hanim_c5"),
                                                                                                      /*<HAnimJoint name='vc5'/> visualization sphere within <HAnimSegment name='c5'/>*/
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint vc5, HAnimSegment c5")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.0066,1.552,-0.0082]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>*/

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.0066,1.552,-0.0082,0.0066,1.5662,-0.0084])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("vc4"),
                                                                                                      DEF : new SFString("hanim_vc4"),
                                                                                                      center : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("c4"),
                                                                                                          DEF : new SFString("hanim_c4"),
                                                                                                          /*<HAnimJoint name='vc4'/> visualization sphere within <HAnimSegment name='c4'/>*/
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint vc4, HAnimSegment c4")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.0066,1.5662,-0.0084]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.0066,1.5662,-0.0084,0.0066,1.58,-0.0103])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("vc3"),
                                                                                                          DEF : new SFString("hanim_vc3"),
                                                                                                          center : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("c3"),
                                                                                                              DEF : new SFString("hanim_c3"),
                                                                                                              /*<HAnimJoint name='vc3'/> visualization sphere within <HAnimSegment name='c3'/>*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint vc3, HAnimSegment c3")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.0066,1.58,-0.0103]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.0066,1.58,-0.0103,0.0066,1.5928,-0.0103])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("vc2"),
                                                                                                              DEF : new SFString("hanim_vc2"),
                                                                                                              center : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("c2"),
                                                                                                                  DEF : new SFString("hanim_c2"),
                                                                                                                  /*<HAnimJoint name='vc2'/> visualization sphere within <HAnimSegment name='c2'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint vc2, HAnimSegment c2")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.0066,1.5928,-0.0103]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.0066,1.5928,-0.0103,0.0066,1.6144,-0.0034])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("vc1"),
                                                                                                                  DEF : new SFString("hanim_vc1"),
                                                                                                                  center : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("c1"),
                                                                                                                      DEF : new SFString("hanim_c1"),
                                                                                                                      /*<HAnimJoint name='vc1'/> visualization sphere within <HAnimSegment name='c1'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint vc1, HAnimSegment c1")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.0066,1.6144,-0.0034]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.0066,1.6144,-0.0034,0.0044,1.6209,0.0236])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("skullbase"),
                                                                                                                      DEF : new SFString("hanim_skullbase"),
                                                                                                                      center : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("skull"),
                                                                                                                          DEF : new SFString("hanim_skull"),
                                                                                                                          /*<HAnimJoint name='skullbase'/> visualization sphere within <HAnimSegment name='skull'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint skullbase, HAnimSegment skull")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.0044,1.6209,0.0236]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0336,1.635,0.0506])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.6332,0.0502])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0336,1.635,0.0506])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0,1.63,0.015])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.005,1.7504,0.0055])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0058,1.6316,0.0852])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0237,1.6171,0.0752])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0341,1.6171,0.0752])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0061,1.541,0.0805])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.0646,1.6347,0.0302])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,-0.052,1.5529,0.0347])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0739,1.6348,0.0282])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0631,1.553,0.033])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.0044,1.6209,0.0236,0.0039,1.5972,-0.0796])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                          /*TODO move skull_tip x to zero*/

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("skull_tip"),
                                                                                                                              DEF : new SFString("hanim_skull_tip"),
                                                                                                                              translation : new SFVec3f([0.005,1.7504,0.0055]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite skull_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("sellion_pt"),
                                                                                                                              DEF : new SFString("hanim_sellion_pt"),
                                                                                                                              translation : new SFVec3f([0.0058,1.6316,0.0852]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite sellion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_r_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([-0.0237,1.6171,0.0752]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_infraorbitale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_infraorbitale_pt"),
                                                                                                                              DEF : new SFString("hanim_l_infraorbitale_pt"),
                                                                                                                              translation : new SFVec3f([0.0341,1.6171,0.0752]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_infraorbitale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("supramenton_pt"),
                                                                                                                              DEF : new SFString("hanim_supramenton_pt"),
                                                                                                                              translation : new SFVec3f([0.0061,1.541,0.0805]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite supramenton")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_tragion_pt"),
                                                                                                                              translation : new SFVec3f([-0.0646,1.6347,0.0302]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_tragion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_r_gonion_pt"),
                                                                                                                              translation : new SFVec3f([-0.052,1.5529,0.0347]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_gonion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_tragion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_tragion_pt"),
                                                                                                                              translation : new SFVec3f([0.0739,1.6348,0.0282]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_tragion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_gonion_pt"),
                                                                                                                              DEF : new SFString("hanim_l_gonion_pt"),
                                                                                                                              translation : new SFVec3f([0.0631,1.553,0.033]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_gonion")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("nuchale_pt"),
                                                                                                                              DEF : new SFString("hanim_nuchale_pt"),
                                                                                                                              translation : new SFVec3f([0.0039,1.5972,-0.0796]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite nuchale")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyeball_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyeball"),
                                                                                                                              DEF : new SFString("hanim_l_eyeball"),
                                                                                                                              /*<HAnimJoint name='l_eyeball_joint'/> visualization sphere within <HAnimSegment name='l_eyeball'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.0336,1.6332,0.0502,0.034,1.64,0.05])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          DEF : new SFString("HAnimSiteViewpointLineColorRGBA"),
                                                                                                                                          color : new MFColorRGBA([0,0,1,1,0,0,1,0.1])}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_eyeball_site_view"),
                                                                                                                                  DEF : new SFString("hanim_l_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_l_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("l_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

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
                                                                                                                                              geometry : new SFNode(
                                                                                                                                                new IndexedFaceSet({
                                                                                                                                                  DEF : new SFString("SiteViewpointDiamondIFS"),
                                                                                                                                                  coordIndex : new MFInt32([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]),
                                                                                                                                                  creaseAngle : new SFFloat(0.5),
                                                                                                                                                  coord : new SFNode(
                                                                                                                                                    new Coordinate({
                                                                                                                                                      point : new MFVec3f([0,0.01,0,-0.01,0,0,0,0,0.01,0.01,0,0,0,0,-0.01,0,-0.01,0])}))})),
                                                                                                                                              appearance : new SFNode(
                                                                                                                                                new Appearance({
                                                                                                                                                  material : new SFNode(
                                                                                                                                                    new Material({
                                                                                                                                                      diffuseColor : new SFColor([0,0,1]),
                                                                                                                                                      transparency : new SFFloat(0.6)}))}))})])})])})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyelid_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyelid"),
                                                                                                                              DEF : new SFString("hanim_l_eyelid"),
                                                                                                                              /*<HAnimJoint name='l_eyelid_joint'/> visualization sphere within <HAnimSegment name='l_eyelid'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_l_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_l_eyebrow"),
                                                                                                                              /*<HAnimJoint name='l_eyebrow_joint'/> visualization sphere within <HAnimSegment name='l_eyebrow'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.0336,1.635,0.0506]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyeball_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyeball_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyeball"),
                                                                                                                              DEF : new SFString("hanim_r_eyeball"),
                                                                                                                              /*<HAnimJoint name='r_eyeball_joint'/> visualization sphere within <HAnimSegment name='r_eyeball'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.0336,1.6332,0.0502,-0.034,1.64,0.05])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_eyeball_site_view"),
                                                                                                                                  DEF : new SFString("hanim_r_eyeball_site_view"),
                                                                                                                                  translation : new SFVec3f([-0.034,1.64,0.05]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Viewpoint({
                                                                                                                                      DEF : new SFString("hanim_r_eyeball_site_viewpoint"),
                                                                                                                                      description : new SFString("r_eyeball_site_viewpoint looking forward"),
                                                                                                                                      orientation : new SFRotation([0,1,0,3.141593]),
                                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

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
                                                                                                                          name : new SFString("r_eyelid_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyelid_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyelid"),
                                                                                                                              DEF : new SFString("hanim_r_eyelid"),
                                                                                                                              /*<HAnimJoint name='r_eyelid_joint'/> visualization sphere within <HAnimSegment name='r_eyelid'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.6332,0.0502]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_eyebrow_joint"),
                                                                                                                          DEF : new SFString("hanim_r_eyebrow_joint"),
                                                                                                                          center : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_eyebrow"),
                                                                                                                              DEF : new SFString("hanim_r_eyebrow"),
                                                                                                                              /*<HAnimJoint name='r_eyebrow_joint'/> visualization sphere within <HAnimSegment name='r_eyebrow'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.0336,1.635,0.0506]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])})])})])}),
                                                                                                                      /*Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint*/

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("temporomandibular"),
                                                                                                                          DEF : new SFString("hanim_temporomandibular"),
                                                                                                                          center : new SFVec3f([0,1.63,0.015]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("jaw"),
                                                                                                                              DEF : new SFString("hanim_jaw"),
                                                                                                                              /*<HAnimJoint name='temporomandibular'/> visualization sphere within <HAnimSegment name='jaw'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint temporomandibular, HAnimSegment jaw")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0,1.63,0.015]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,0.045,1.63,0])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0,1.63,0.015,-0.045,1.63,0])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_l_site_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_l_site_pt"),
                                                                                                                                  translation : new SFVec3f([0.045,1.63,0]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_l_site")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("temporomandibular_r_site_pt"),
                                                                                                                                  DEF : new SFString("hanim_temporomandibular_r_site_pt"),
                                                                                                                                  translation : new SFVec3f([-0.045,1.63,0]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite temporomandibular_r_site")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("l_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_l_sternoclavicular"),
                                                                                          center : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("l_clavicle"),
                                                                                              DEF : new SFString("hanim_l_clavicle"),
                                                                                              /*<HAnimJoint name='l_sternoclavicular'/> visualization sphere within <HAnimSegment name='l_clavicle'/>*/
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([0.082,1.4488,-0.0353]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.0271,1.4943,0.0394])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.2032,1.476,-0.049])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1777,1.4065,-0.0075])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([0.082,1.4488,-0.0353,0.1706,1.4072,-0.0875])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_clavicale_pt"),
                                                                                                  DEF : new SFString("hanim_l_clavicale_pt"),
                                                                                                  translation : new SFVec3f([0.0271,1.4943,0.0394]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_clavicale")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_acromion_pt"),
                                                                                                  DEF : new SFString("hanim_l_acromion_pt"),
                                                                                                  translation : new SFVec3f([0.2032,1.476,-0.049]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_acromion")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_ant_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([0.1777,1.4065,-0.0075]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_ant")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("l_axilla_post_pt"),
                                                                                                  DEF : new SFString("hanim_l_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([0.1706,1.4072,-0.0875]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite l_axilla_post")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("l_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_l_acromioclavicular"),
                                                                                              center : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("l_scapula"),
                                                                                                  DEF : new SFString("hanim_l_scapula"),
                                                                                                  /*<HAnimJoint name='l_acromioclavicular'/> visualization sphere within <HAnimSegment name='l_scapula'/>*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint l_acromioclavicular, HAnimSegment l_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([0.0962,1.4269,-0.0424]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>*/

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([0.0962,1.4269,-0.0424,0.2029,1.4376,-0.0387])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("l_shoulder"),
                                                                                                  DEF : new SFString("hanim_l_shoulder"),
                                                                                                  center : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("l_upperarm"),
                                                                                                      DEF : new SFString("hanim_l_upperarm"),
                                                                                                      /*<HAnimJoint name='l_shoulder'/> visualization sphere within <HAnimSegment name='l_upperarm'/>*/
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint l_shoulder, HAnimSegment l_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([0.2029,1.4376,-0.0387]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>*/

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.2014,1.1357,-0.0682])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>*/

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([0.2029,1.4376,-0.0387,0.228,1.1482,-0.11])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("l_humeral_lateral_epicn_pt"),
                                                                                                          DEF : new SFString("hanim_l_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([0.228,1.1482,-0.11]),
                                                                                                          /*HAnimSite visualization shape*/
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite l_humeral_lateral_epicn")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("l_elbow"),
                                                                                                      DEF : new SFString("hanim_l_elbow"),
                                                                                                      center : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("l_forearm"),
                                                                                                          DEF : new SFString("hanim_l_forearm"),
                                                                                                          /*<HAnimJoint name='l_elbow'/> visualization sphere within <HAnimSegment name='l_forearm'/>*/
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint l_elbow, HAnimSegment l_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([0.2014,1.1357,-0.0682]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1984,0.8663,-0.0583])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1901,0.8645,-0.0415])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1962,1.1375,-0.1123])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.1735,1.1272,-0.1113])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([0.2014,1.1357,-0.0682,0.2182,1.1212,-0.1167])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radial_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_l_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([0.1901,0.8645,-0.0415]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radial_styloid")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_olecranon_pt"),
                                                                                                              DEF : new SFString("hanim_l_olecranon_pt"),
                                                                                                              translation : new SFVec3f([0.1962,1.1375,-0.1123]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_olecranon")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_humeral_medial_epicn_pt"),
                                                                                                              DEF : new SFString("hanim_l_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([0.1735,1.1272,-0.1113]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_humeral_medial_epicn")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("l_radiale_pt"),
                                                                                                              DEF : new SFString("hanim_l_radiale_pt"),
                                                                                                              translation : new SFVec3f([0.2182,1.1212,-0.1167]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite l_radiale")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("l_wrist"),
                                                                                                          DEF : new SFString("hanim_l_wrist"),
                                                                                                          center : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("l_hand"),
                                                                                                              DEF : new SFString("hanim_l_hand"),
                                                                                                              /*<HAnimJoint name='l_wrist'/> visualization sphere within <HAnimSegment name='l_hand'/>*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint l_wrist, HAnimSegment l_hand")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([0.1984,0.8663,-0.0583]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1924,0.8472,-0.0534])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1983,0.8024,-0.028])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1987,0.8029,-0.053])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1956,0.8019,-0.0794])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1925,0.8066,-0.1036])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2009,0.8139,-0.0237])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.2142,0.8529,-0.0648])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.1929,0.786,-0.1122])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([0.1984,0.8663,-0.0583,0.3,0.75,0.45])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_pha2_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([0.2009,0.8139,-0.0237]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha2")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_ulnar_styloid_pt"),
                                                                                                                  DEF : new SFString("hanim_l_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([0.2142,0.8529,-0.0648]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_ulnar_styloid")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_metacarpal_pha5_pt"),
                                                                                                                  DEF : new SFString("hanim_l_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([0.1929,0.786,-0.1122]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite l_metacarpal_pha5")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("l_hand_front_view"),
                                                                                                                  DEF : new SFString("hanim_l_hand_front_view"),
                                                                                                                  translation : new SFVec3f([0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_l_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("left hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

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
                                                                                                              name : new SFString("l_thumb1"),
                                                                                                              DEF : new SFString("hanim_l_thumb1"),
                                                                                                              center : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_thumb_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_l_thumb_metacarpal"),
                                                                                                                  /*<HAnimJoint name='l_thumb1'/> visualization sphere within <HAnimSegment name='l_thumb_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1924,0.8472,-0.0534]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_thumb2"),
                                                                                                                  DEF : new SFString("hanim_l_thumb2"),
                                                                                                                  center : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_thumb_proximal"),
                                                                                                                      DEF : new SFString("hanim_l_thumb_proximal"),
                                                                                                                      /*<HAnimJoint name='l_thumb2'/> visualization sphere within <HAnimSegment name='l_thumb_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1951,0.8226,0.0246]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_thumb3"),
                                                                                                                      DEF : new SFString("hanim_l_thumb3"),
                                                                                                                      center : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_thumb_distal"),
                                                                                                                          DEF : new SFString("hanim_l_thumb_distal"),
                                                                                                                          /*<HAnimJoint name='l_thumb3'/> visualization sphere within <HAnimSegment name='l_thumb_distal'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_thumb3, HAnimSegment l_thumb_distal")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1955,0.8159,0.0464]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("l_thumb_distal_tip"),
                                                                                                                              DEF : new SFString("hanim_l_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([0.1982,0.8061,0.0759]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite l_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_index0"),
                                                                                                              DEF : new SFString("hanim_l_index0"),
                                                                                                              center : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_index_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_l_index_metacarpal"),
                                                                                                                  /*<HAnimJoint name='l_index0'/> visualization sphere within <HAnimSegment name='l_index_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_index0, HAnimSegment l_index_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1983,0.8024,-0.028]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_index1"),
                                                                                                                  DEF : new SFString("hanim_l_index1"),
                                                                                                                  center : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_index_proximal"),
                                                                                                                      DEF : new SFString("hanim_l_index_proximal"),
                                                                                                                      /*<HAnimJoint name='l_index1'/> visualization sphere within <HAnimSegment name='l_index_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_index1, HAnimSegment l_index_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1983,0.7815,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_index2"),
                                                                                                                      DEF : new SFString("hanim_l_index2"),
                                                                                                                      center : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_index_middle"),
                                                                                                                          DEF : new SFString("hanim_l_index_middle"),
                                                                                                                          /*<HAnimJoint name='l_index2'/> visualization sphere within <HAnimSegment name='l_index_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_index2, HAnimSegment l_index_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2017,0.7363,-0.0248]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_index3"),
                                                                                                                          DEF : new SFString("hanim_l_index3"),
                                                                                                                          center : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_index_distal"),
                                                                                                                              DEF : new SFString("hanim_l_index_distal"),
                                                                                                                              /*<HAnimJoint name='l_index3'/> visualization sphere within <HAnimSegment name='l_index_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_index3, HAnimSegment l_index_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2028,0.7139,-0.0236]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2028,0.7139,-0.0236,0.2056,0.6743,-0.0482])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_index_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2089,0.6858,-0.0245]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_l_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([0.2056,0.6743,-0.0482]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_dactylion")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_middle0"),
                                                                                                              DEF : new SFString("hanim_l_middle0"),
                                                                                                              center : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_middle_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_l_middle_metacarpal"),
                                                                                                                  /*<HAnimJoint name='l_middle0'/> visualization sphere within <HAnimSegment name='l_middle_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1987,0.8029,-0.053]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_middle1"),
                                                                                                                  DEF : new SFString("hanim_l_middle1"),
                                                                                                                  center : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_middle_proximal"),
                                                                                                                      DEF : new SFString("hanim_l_middle_proximal"),
                                                                                                                      /*<HAnimJoint name='l_middle1'/> visualization sphere within <HAnimSegment name='l_middle_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_middle1, HAnimSegment l_middle_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1987,0.7818,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_middle2"),
                                                                                                                      DEF : new SFString("hanim_l_middle2"),
                                                                                                                      center : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_middle_middle"),
                                                                                                                          DEF : new SFString("hanim_l_middle_middle"),
                                                                                                                          /*<HAnimJoint name='l_middle2'/> visualization sphere within <HAnimSegment name='l_middle_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_middle2, HAnimSegment l_middle_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.2013,0.7273,-0.0503]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_middle3"),
                                                                                                                          DEF : new SFString("hanim_l_middle3"),
                                                                                                                          center : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_middle_distal"),
                                                                                                                              DEF : new SFString("hanim_l_middle_distal"),
                                                                                                                              /*<HAnimJoint name='l_middle3'/> visualization sphere within <HAnimSegment name='l_middle_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_middle3, HAnimSegment l_middle_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.2026,0.7011,-0.0494]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_middle_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.208,0.6731,-0.0491]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_ring0"),
                                                                                                              DEF : new SFString("hanim_l_ring0"),
                                                                                                              center : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_ring_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_l_ring_metacarpal"),
                                                                                                                  /*<HAnimJoint name='l_ring0'/> visualization sphere within <HAnimSegment name='l_ring_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1956,0.8019,-0.0794]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_ring1"),
                                                                                                                  DEF : new SFString("hanim_l_ring1"),
                                                                                                                  center : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_ring_proximal"),
                                                                                                                      DEF : new SFString("hanim_l_ring_proximal"),
                                                                                                                      /*<HAnimJoint name='l_ring1'/> visualization sphere within <HAnimSegment name='l_ring_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_ring1, HAnimSegment l_ring_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1956,0.7815,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_ring2"),
                                                                                                                      DEF : new SFString("hanim_l_ring2"),
                                                                                                                      center : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_ring_middle"),
                                                                                                                          DEF : new SFString("hanim_l_ring_middle"),
                                                                                                                          /*<HAnimJoint name='l_ring2'/> visualization sphere within <HAnimSegment name='l_ring_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_ring2, HAnimSegment l_ring_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1973,0.7287,-0.0777]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_ring3"),
                                                                                                                          DEF : new SFString("hanim_l_ring3"),
                                                                                                                          center : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_ring_distal"),
                                                                                                                              DEF : new SFString("hanim_l_ring_distal"),
                                                                                                                              /*<HAnimJoint name='l_ring3'/> visualization sphere within <HAnimSegment name='l_ring_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_ring3, HAnimSegment l_ring_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1983,0.7045,-0.0767]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_ring_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2035,0.675,-0.0756]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("l_pinky0"),
                                                                                                              DEF : new SFString("hanim_l_pinky0"),
                                                                                                              center : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("l_pinky_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_l_pinky_metacarpal"),
                                                                                                                  /*<HAnimJoint name='l_pinky0'/> visualization sphere within <HAnimSegment name='l_pinky_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([0.1925,0.8066,-0.1036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("l_pinky1"),
                                                                                                                  DEF : new SFString("hanim_l_pinky1"),
                                                                                                                  center : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("l_pinky_proximal"),
                                                                                                                      DEF : new SFString("hanim_l_pinky_proximal"),
                                                                                                                      /*<HAnimJoint name='l_pinky1'/> visualization sphere within <HAnimSegment name='l_pinky_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([0.1925,0.7866,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("l_pinky2"),
                                                                                                                      DEF : new SFString("hanim_l_pinky2"),
                                                                                                                      center : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("l_pinky_middle"),
                                                                                                                          DEF : new SFString("hanim_l_pinky_middle"),
                                                                                                                          /*<HAnimJoint name='l_pinky2'/> visualization sphere within <HAnimSegment name='l_pinky_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint l_pinky2, HAnimSegment l_pinky_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([0.1938,0.7452,-0.1024]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("l_pinky3"),
                                                                                                                          DEF : new SFString("hanim_l_pinky3"),
                                                                                                                          center : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("l_pinky_distal"),
                                                                                                                              DEF : new SFString("hanim_l_pinky_distal"),
                                                                                                                              /*<HAnimJoint name='l_pinky3'/> visualization sphere within <HAnimSegment name='l_pinky_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint l_pinky3, HAnimSegment l_pinky_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([0.1948,0.7277,-0.1017]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("l_pinky_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_l_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([0.2014,0.7009,-0.1012]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite l_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])}),

                                                                                        new HAnimJoint({
                                                                                          name : new SFString("r_sternoclavicular"),
                                                                                          DEF : new SFString("hanim_r_sternoclavicular"),
                                                                                          center : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                          children : new MFNode([
                                                                                            new HAnimSegment({
                                                                                              name : new SFString("r_clavicle"),
                                                                                              DEF : new SFString("hanim_r_clavicle"),
                                                                                              /*<HAnimJoint name='r_sternoclavicular'/> visualization sphere within <HAnimSegment name='r_clavicle'/>*/
                                                                                              children : new MFNode([
                                                                                                new TouchSensor({
                                                                                                  description : new SFString("HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle")}),

                                                                                                new Transform({
                                                                                                  translation : new SFVec3f([-0.082,1.4488,-0.0353]),
                                                                                                  children : new MFNode([
                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0962,1.4269,-0.0424])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.0115,1.4943,0.04])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1905,1.4791,-0.0431])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1626,1.4072,-0.0031])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>*/

                                                                                                new Shape({
                                                                                                  geometry : new SFNode(
                                                                                                    new LineSet({
                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                      coord : new SFNode(
                                                                                                        new Coordinate({
                                                                                                          point : new MFVec3f([-0.082,1.4488,-0.0353,-0.1603,1.4098,-0.0826])})),
                                                                                                      color : new SFNode(
                                                                                                        new ColorRGBA({
                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_clavicale_pt"),
                                                                                                  DEF : new SFString("hanim_r_clavicale_pt"),
                                                                                                  translation : new SFVec3f([-0.0115,1.4943,0.04]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_clavicale")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_acromion_pt"),
                                                                                                  DEF : new SFString("hanim_r_acromion_pt"),
                                                                                                  translation : new SFVec3f([-0.1905,1.4791,-0.0431]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_acromion")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_ant_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_ant_pt"),
                                                                                                  translation : new SFVec3f([-0.1626,1.4072,-0.0031]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_ant")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                new HAnimSite({
                                                                                                  name : new SFString("r_axilla_post_pt"),
                                                                                                  DEF : new SFString("hanim_r_axilla_post_pt"),
                                                                                                  translation : new SFVec3f([-0.1603,1.4098,-0.0826]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimSite r_axilla_post")}),

                                                                                                    new Shape({
                                                                                                      USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                            new HAnimJoint({
                                                                                              name : new SFString("r_acromioclavicular"),
                                                                                              DEF : new SFString("hanim_r_acromioclavicular"),
                                                                                              center : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                              children : new MFNode([
                                                                                                new HAnimSegment({
                                                                                                  name : new SFString("r_scapula"),
                                                                                                  DEF : new SFString("hanim_r_scapula"),
                                                                                                  /*<HAnimJoint name='r_acromioclavicular'/> visualization sphere within <HAnimSegment name='r_scapula'/>*/
                                                                                                  children : new MFNode([
                                                                                                    new TouchSensor({
                                                                                                      description : new SFString("HAnimJoint r_acromioclavicular, HAnimSegment r_scapula")}),

                                                                                                    new Transform({
                                                                                                      translation : new SFVec3f([-0.0962,1.4269,-0.0424]),
                                                                                                      children : new MFNode([
                                                                                                        new Shape({
                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>*/

                                                                                                    new Shape({
                                                                                                      geometry : new SFNode(
                                                                                                        new LineSet({
                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                          coord : new SFNode(
                                                                                                            new Coordinate({
                                                                                                              point : new MFVec3f([-0.0962,1.4269,-0.0424,-0.2029,1.4376,-0.0387])})),
                                                                                                          color : new SFNode(
                                                                                                            new ColorRGBA({
                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                new HAnimJoint({
                                                                                                  name : new SFString("r_shoulder"),
                                                                                                  DEF : new SFString("hanim_r_shoulder"),
                                                                                                  center : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                  children : new MFNode([
                                                                                                    new HAnimSegment({
                                                                                                      name : new SFString("r_upperarm"),
                                                                                                      DEF : new SFString("hanim_r_upperarm"),
                                                                                                      /*<HAnimJoint name='r_shoulder'/> visualization sphere within <HAnimSegment name='r_upperarm'/>*/
                                                                                                      children : new MFNode([
                                                                                                        new TouchSensor({
                                                                                                          description : new SFString("HAnimJoint r_shoulder, HAnimSegment r_upperarm")}),

                                                                                                        new Transform({
                                                                                                          translation : new SFVec3f([-0.2029,1.4376,-0.0387]),
                                                                                                          children : new MFNode([
                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>*/

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2014,1.1357,-0.0682])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>*/

                                                                                                        new Shape({
                                                                                                          geometry : new SFNode(
                                                                                                            new LineSet({
                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                              coord : new SFNode(
                                                                                                                new Coordinate({
                                                                                                                  point : new MFVec3f([-0.2029,1.4376,-0.0387,-0.2224,1.1517,-0.1033])})),
                                                                                                              color : new SFNode(
                                                                                                                new ColorRGBA({
                                                                                                                  USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                        new HAnimSite({
                                                                                                          name : new SFString("r_humeral_lateral_epicn_pt"),
                                                                                                          DEF : new SFString("hanim_r_humeral_lateral_epicn_pt"),
                                                                                                          translation : new SFVec3f([-0.2224,1.1517,-0.1033]),
                                                                                                          /*HAnimSite visualization shape*/
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimSite r_humeral_lateral_epicn")}),

                                                                                                            new Shape({
                                                                                                              USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                    new HAnimJoint({
                                                                                                      name : new SFString("r_elbow"),
                                                                                                      DEF : new SFString("hanim_r_elbow"),
                                                                                                      center : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                      children : new MFNode([
                                                                                                        new HAnimSegment({
                                                                                                          name : new SFString("r_forearm"),
                                                                                                          DEF : new SFString("hanim_r_forearm"),
                                                                                                          /*<HAnimJoint name='r_elbow'/> visualization sphere within <HAnimSegment name='r_forearm'/>*/
                                                                                                          children : new MFNode([
                                                                                                            new TouchSensor({
                                                                                                              description : new SFString("HAnimJoint r_elbow, HAnimSegment r_forearm")}),

                                                                                                            new Transform({
                                                                                                              translation : new SFVec3f([-0.2014,1.1357,-0.0682]),
                                                                                                              children : new MFNode([
                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1984,0.8663,-0.0583])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1884,0.8676,-0.036])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.1907,1.1405,-0.1065])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.168,1.1298,-0.1062])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>*/

                                                                                                            new Shape({
                                                                                                              geometry : new SFNode(
                                                                                                                new LineSet({
                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                  coord : new SFNode(
                                                                                                                    new Coordinate({
                                                                                                                      point : new MFVec3f([-0.2014,1.1357,-0.0682,-0.213,1.1305,-0.1091])})),
                                                                                                                  color : new SFNode(
                                                                                                                    new ColorRGBA({
                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radial_styloid_pt"),
                                                                                                              DEF : new SFString("hanim_r_radial_styloid_pt"),
                                                                                                              translation : new SFVec3f([-0.1884,0.8676,-0.036]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radial_styloid")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_olecranon_pt"),
                                                                                                              DEF : new SFString("hanim_r_olecranon_pt"),
                                                                                                              translation : new SFVec3f([-0.1907,1.1405,-0.1065]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_olecranon")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_humeral_medial_epicn_pt"),
                                                                                                              DEF : new SFString("hanim_r_humeral_medial_epicn_pt"),
                                                                                                              translation : new SFVec3f([-0.168,1.1298,-0.1062]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_humeral_medial_epicn")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])}),

                                                                                                            new HAnimSite({
                                                                                                              name : new SFString("r_radiale_pt"),
                                                                                                              DEF : new SFString("hanim_r_radiale_pt"),
                                                                                                              translation : new SFVec3f([-0.213,1.1305,-0.1091]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimSite r_radiale")}),

                                                                                                                new Shape({
                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])}),

                                                                                                        new HAnimJoint({
                                                                                                          name : new SFString("r_wrist"),
                                                                                                          DEF : new SFString("hanim_r_wrist"),
                                                                                                          center : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                          children : new MFNode([
                                                                                                            new HAnimSegment({
                                                                                                              name : new SFString("r_hand"),
                                                                                                              DEF : new SFString("hanim_r_hand"),
                                                                                                              /*<HAnimJoint name='r_wrist'/> visualization sphere within <HAnimSegment name='r_hand'/>*/
                                                                                                              children : new MFNode([
                                                                                                                new TouchSensor({
                                                                                                                  description : new SFString("HAnimJoint r_wrist, HAnimSegment r_hand")}),

                                                                                                                new Transform({
                                                                                                                  translation : new SFVec3f([-0.1984,0.8663,-0.0583]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1924,0.8472,-0.0534])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1983,0.8024,-0.028])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1987,0.8029,-0.053])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1956,0.8019,-0.0794])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1925,0.8066,-0.1036])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSegmentLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1977,0.8169,-0.0177])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.2117,0.8562,-0.0584])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.1929,0.789,-0.1064])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>*/

                                                                                                                new Shape({
                                                                                                                  geometry : new SFNode(
                                                                                                                    new LineSet({
                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                      coord : new SFNode(
                                                                                                                        new Coordinate({
                                                                                                                          point : new MFVec3f([-0.1984,0.8663,-0.0583,-0.3,0.75,0.45])})),
                                                                                                                      color : new SFNode(
                                                                                                                        new ColorRGBA({
                                                                                                                          USE : new SFString("HAnimSiteViewpointLineColorRGBA")}))}))}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_pha2_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha2_pt"),
                                                                                                                  translation : new SFVec3f([-0.1977,0.8169,-0.0177]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha2")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_ulnar_styloid_pt"),
                                                                                                                  DEF : new SFString("hanim_r_ulnar_styloid_pt"),
                                                                                                                  translation : new SFVec3f([-0.2117,0.8562,-0.0584]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_ulnar_styloid")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_metacarpal_pha5_pt"),
                                                                                                                  DEF : new SFString("hanim_r_metacarpal_pha5_pt"),
                                                                                                                  translation : new SFVec3f([-0.1929,0.789,-0.1064]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimSite r_metacarpal_pha5")}),

                                                                                                                    new Shape({
                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                new HAnimSite({
                                                                                                                  name : new SFString("r_hand_front_view"),
                                                                                                                  DEF : new SFString("hanim_r_hand_front_view"),
                                                                                                                  translation : new SFVec3f([-0.3,0.75,0.45]),
                                                                                                                  children : new MFNode([
                                                                                                                    new Viewpoint({
                                                                                                                      DEF : new SFString("hanim_r_hand_front_viewpoint"),
                                                                                                                      centerOfRotation : new SFVec3f([0,0.7,0]),
                                                                                                                      description : new SFString("right hand front"),
                                                                                                                      position : new SFVec3f([0,0,0])}),
                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

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
                                                                                                              name : new SFString("r_thumb1"),
                                                                                                              DEF : new SFString("hanim_r_thumb1"),
                                                                                                              center : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_thumb_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_r_thumb_metacarpal"),
                                                                                                                  /*<HAnimJoint name='r_thumb1'/> visualization sphere within <HAnimSegment name='r_thumb_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1924,0.8472,-0.0534]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1924,0.8472,-0.0534,-0.1951,0.8226,0.0246])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_thumb2"),
                                                                                                                  DEF : new SFString("hanim_r_thumb2"),
                                                                                                                  center : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_thumb_proximal"),
                                                                                                                      DEF : new SFString("hanim_r_thumb_proximal"),
                                                                                                                      /*<HAnimJoint name='r_thumb2'/> visualization sphere within <HAnimSegment name='r_thumb_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1951,0.8226,0.0246]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1951,0.8226,0.0246,-0.1955,0.8159,0.0464])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_thumb3"),
                                                                                                                      DEF : new SFString("hanim_r_thumb3"),
                                                                                                                      center : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_thumb_distal"),
                                                                                                                          DEF : new SFString("hanim_r_thumb_distal"),
                                                                                                                          /*<HAnimJoint name='r_thumb3'/> visualization sphere within <HAnimSegment name='r_thumb_distal'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_thumb3, HAnimSegment r_thumb_distal")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1955,0.8159,0.0464]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1955,0.8159,0.0464,-0.1869,0.809,0.082])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                            new HAnimSite({
                                                                                                                              name : new SFString("r_thumb_distal_tip"),
                                                                                                                              DEF : new SFString("hanim_r_thumb_distal_tip"),
                                                                                                                              translation : new SFVec3f([-0.1869,0.809,0.082]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimSite r_thumb_distal_tip")}),

                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimSiteShape")})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_index0"),
                                                                                                              DEF : new SFString("hanim_r_index0"),
                                                                                                              center : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_index_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_r_index_metacarpal"),
                                                                                                                  /*<HAnimJoint name='r_index0'/> visualization sphere within <HAnimSegment name='r_index_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_index0, HAnimSegment r_index_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1983,0.8024,-0.028]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1983,0.8024,-0.028,-0.1983,0.7815,-0.028])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_index1"),
                                                                                                                  DEF : new SFString("hanim_r_index1"),
                                                                                                                  center : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_index_proximal"),
                                                                                                                      DEF : new SFString("hanim_r_index_proximal"),
                                                                                                                      /*<HAnimJoint name='r_index1'/> visualization sphere within <HAnimSegment name='r_index_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_index1, HAnimSegment r_index_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1983,0.7815,-0.028]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1983,0.7815,-0.028,-0.2017,0.7363,-0.0248])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_index2"),
                                                                                                                      DEF : new SFString("hanim_r_index2"),
                                                                                                                      center : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_index_middle"),
                                                                                                                          DEF : new SFString("hanim_r_index_middle"),
                                                                                                                          /*<HAnimJoint name='r_index2'/> visualization sphere within <HAnimSegment name='r_index_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_index2, HAnimSegment r_index_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2017,0.7363,-0.0248]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2017,0.7363,-0.0248,-0.2028,0.7139,-0.0236])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_index3"),
                                                                                                                          DEF : new SFString("hanim_r_index3"),
                                                                                                                          center : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_index_distal"),
                                                                                                                              DEF : new SFString("hanim_r_index_distal"),
                                                                                                                              /*<HAnimJoint name='r_index3'/> visualization sphere within <HAnimSegment name='r_index_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_index3, HAnimSegment r_index_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2028,0.7139,-0.0236]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.198,0.6883,-0.018])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2028,0.7139,-0.0236,-0.1941,0.6772,-0.0423])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_index_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_index_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.198,0.6883,-0.018]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_index_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_dactylion_pt"),
                                                                                                                                  DEF : new SFString("hanim_r_dactylion_pt"),
                                                                                                                                  translation : new SFVec3f([-0.1941,0.6772,-0.0423]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_dactylion")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_middle0"),
                                                                                                              DEF : new SFString("hanim_r_middle0"),
                                                                                                              center : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_middle_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_r_middle_metacarpal"),
                                                                                                                  /*<HAnimJoint name='r_middle0'/> visualization sphere within <HAnimSegment name='r_middle_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1987,0.8029,-0.053]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1987,0.8029,-0.053,-0.1987,0.7818,-0.053])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_middle1"),
                                                                                                                  DEF : new SFString("hanim_r_middle1"),
                                                                                                                  center : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_middle_proximal"),
                                                                                                                      DEF : new SFString("hanim_r_middle_proximal"),
                                                                                                                      /*<HAnimJoint name='r_middle1'/> visualization sphere within <HAnimSegment name='r_middle_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_middle1, HAnimSegment r_middle_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1987,0.7818,-0.053]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1987,0.7818,-0.053,-0.2013,0.7273,-0.0503])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_middle2"),
                                                                                                                      DEF : new SFString("hanim_r_middle2"),
                                                                                                                      center : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_middle_middle"),
                                                                                                                          DEF : new SFString("hanim_r_middle_middle"),
                                                                                                                          /*<HAnimJoint name='r_middle2'/> visualization sphere within <HAnimSegment name='r_middle_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_middle2, HAnimSegment r_middle_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.2013,0.7273,-0.0503]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.2013,0.7273,-0.0503,-0.2026,0.7011,-0.0494])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_middle3"),
                                                                                                                          DEF : new SFString("hanim_r_middle3"),
                                                                                                                          center : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_middle_distal"),
                                                                                                                              DEF : new SFString("hanim_r_middle_distal"),
                                                                                                                              /*<HAnimJoint name='r_middle3'/> visualization sphere within <HAnimSegment name='r_middle_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_middle3, HAnimSegment r_middle_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.2026,0.7011,-0.0494]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.2026,0.7011,-0.0494,-0.1969,0.6758,-0.0427])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_middle_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_middle_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1969,0.6758,-0.0427]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_middle_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_ring0"),
                                                                                                              DEF : new SFString("hanim_r_ring0"),
                                                                                                              center : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_ring_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_r_ring_metacarpal"),
                                                                                                                  /*<HAnimJoint name='r_ring0'/> visualization sphere within <HAnimSegment name='r_ring_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1956,0.8019,-0.0794]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1956,0.8019,-0.0794,-0.1956,0.7815,-0.0794])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_ring1"),
                                                                                                                  DEF : new SFString("hanim_r_ring1"),
                                                                                                                  center : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_ring_proximal"),
                                                                                                                      DEF : new SFString("hanim_r_ring_proximal"),
                                                                                                                      /*<HAnimJoint name='r_ring1'/> visualization sphere within <HAnimSegment name='r_ring_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_ring1, HAnimSegment r_ring_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1956,0.7815,-0.0794]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1956,0.7815,-0.0794,-0.1973,0.7287,-0.0777])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_ring2"),
                                                                                                                      DEF : new SFString("hanim_r_ring2"),
                                                                                                                      center : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_ring_middle"),
                                                                                                                          DEF : new SFString("hanim_r_ring_middle"),
                                                                                                                          /*<HAnimJoint name='r_ring2'/> visualization sphere within <HAnimSegment name='r_ring_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_ring2, HAnimSegment r_ring_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1973,0.7287,-0.0777]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1973,0.7287,-0.0777,-0.1983,0.7045,-0.0767])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_ring3"),
                                                                                                                          DEF : new SFString("hanim_r_ring3"),
                                                                                                                          center : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_ring_distal"),
                                                                                                                              DEF : new SFString("hanim_r_ring_distal"),
                                                                                                                              /*<HAnimJoint name='r_ring3'/> visualization sphere within <HAnimSegment name='r_ring_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_ring3, HAnimSegment r_ring_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1983,0.7045,-0.0767]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1983,0.7045,-0.0767,-0.1934,0.6778,-0.0693])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_ring_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_ring_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1934,0.6778,-0.0693]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_ring_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])}),

                                                                                                            new HAnimJoint({
                                                                                                              name : new SFString("r_pinky0"),
                                                                                                              DEF : new SFString("hanim_r_pinky0"),
                                                                                                              center : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                              children : new MFNode([
                                                                                                                new HAnimSegment({
                                                                                                                  name : new SFString("r_pinky_metacarpal"),
                                                                                                                  DEF : new SFString("hanim_r_pinky_metacarpal"),
                                                                                                                  /*<HAnimJoint name='r_pinky0'/> visualization sphere within <HAnimSegment name='r_pinky_metacarpal'/>*/
                                                                                                                  children : new MFNode([
                                                                                                                    new TouchSensor({
                                                                                                                      description : new SFString("HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal")}),

                                                                                                                    new Transform({
                                                                                                                      translation : new SFVec3f([-0.1925,0.8066,-0.1036]),
                                                                                                                      children : new MFNode([
                                                                                                                        new Shape({
                                                                                                                          USE : new SFString("HAnimJointShape")})])}),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>*/

                                                                                                                    new Shape({
                                                                                                                      geometry : new SFNode(
                                                                                                                        new LineSet({
                                                                                                                          vertexCount : new MFInt32([2]),
                                                                                                                          coord : new SFNode(
                                                                                                                            new Coordinate({
                                                                                                                              point : new MFVec3f([-0.1925,0.8066,-0.1036,-0.1925,0.7866,-0.1036])})),
                                                                                                                          color : new SFNode(
                                                                                                                            new ColorRGBA({
                                                                                                                              USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                new HAnimJoint({
                                                                                                                  name : new SFString("r_pinky1"),
                                                                                                                  DEF : new SFString("hanim_r_pinky1"),
                                                                                                                  center : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                  children : new MFNode([
                                                                                                                    new HAnimSegment({
                                                                                                                      name : new SFString("r_pinky_proximal"),
                                                                                                                      DEF : new SFString("hanim_r_pinky_proximal"),
                                                                                                                      /*<HAnimJoint name='r_pinky1'/> visualization sphere within <HAnimSegment name='r_pinky_proximal'/>*/
                                                                                                                      children : new MFNode([
                                                                                                                        new TouchSensor({
                                                                                                                          description : new SFString("HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal")}),

                                                                                                                        new Transform({
                                                                                                                          translation : new SFVec3f([-0.1925,0.7866,-0.1036]),
                                                                                                                          children : new MFNode([
                                                                                                                            new Shape({
                                                                                                                              USE : new SFString("HAnimJointShape")})])}),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>*/

                                                                                                                        new Shape({
                                                                                                                          geometry : new SFNode(
                                                                                                                            new LineSet({
                                                                                                                              vertexCount : new MFInt32([2]),
                                                                                                                              coord : new SFNode(
                                                                                                                                new Coordinate({
                                                                                                                                  point : new MFVec3f([-0.1925,0.7866,-0.1036,-0.1938,0.7452,-0.1024])})),
                                                                                                                              color : new SFNode(
                                                                                                                                new ColorRGBA({
                                                                                                                                  USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                    new HAnimJoint({
                                                                                                                      name : new SFString("r_pinky2"),
                                                                                                                      DEF : new SFString("hanim_r_pinky2"),
                                                                                                                      center : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                      children : new MFNode([
                                                                                                                        new HAnimSegment({
                                                                                                                          name : new SFString("r_pinky_middle"),
                                                                                                                          DEF : new SFString("hanim_r_pinky_middle"),
                                                                                                                          /*<HAnimJoint name='r_pinky2'/> visualization sphere within <HAnimSegment name='r_pinky_middle'/>*/
                                                                                                                          children : new MFNode([
                                                                                                                            new TouchSensor({
                                                                                                                              description : new SFString("HAnimJoint r_pinky2, HAnimSegment r_pinky_middle")}),

                                                                                                                            new Transform({
                                                                                                                              translation : new SFVec3f([-0.1938,0.7452,-0.1024]),
                                                                                                                              children : new MFNode([
                                                                                                                                new Shape({
                                                                                                                                  USE : new SFString("HAnimJointShape")})])}),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>*/

                                                                                                                            new Shape({
                                                                                                                              geometry : new SFNode(
                                                                                                                                new LineSet({
                                                                                                                                  vertexCount : new MFInt32([2]),
                                                                                                                                  coord : new SFNode(
                                                                                                                                    new Coordinate({
                                                                                                                                      point : new MFVec3f([-0.1938,0.7452,-0.1024,-0.1948,0.7277,-0.1017])})),
                                                                                                                                  color : new SFNode(
                                                                                                                                    new ColorRGBA({
                                                                                                                                      USE : new SFString("HAnimSegmentLineColorRGBA")}))}))})])}),

                                                                                                                        new HAnimJoint({
                                                                                                                          name : new SFString("r_pinky3"),
                                                                                                                          DEF : new SFString("hanim_r_pinky3"),
                                                                                                                          center : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                          children : new MFNode([
                                                                                                                            new HAnimSegment({
                                                                                                                              name : new SFString("r_pinky_distal"),
                                                                                                                              DEF : new SFString("hanim_r_pinky_distal"),
                                                                                                                              /*<HAnimJoint name='r_pinky3'/> visualization sphere within <HAnimSegment name='r_pinky_distal'/>*/
                                                                                                                              children : new MFNode([
                                                                                                                                new TouchSensor({
                                                                                                                                  description : new SFString("HAnimJoint r_pinky3, HAnimSegment r_pinky_distal")}),

                                                                                                                                new Transform({
                                                                                                                                  translation : new SFVec3f([-0.1948,0.7277,-0.1017]),
                                                                                                                                  children : new MFNode([
                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimJointShape")})])}),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>*/

                                                                                                                                new Shape({
                                                                                                                                  geometry : new SFNode(
                                                                                                                                    new LineSet({
                                                                                                                                      vertexCount : new MFInt32([2]),
                                                                                                                                      coord : new SFNode(
                                                                                                                                        new Coordinate({
                                                                                                                                          point : new MFVec3f([-0.1948,0.7277,-0.1017,-0.1938,0.7035,-0.0949])})),
                                                                                                                                      color : new SFNode(
                                                                                                                                        new ColorRGBA({
                                                                                                                                          USE : new SFString("HAnimSiteLineColorRGBA")}))}))}),

                                                                                                                                new HAnimSite({
                                                                                                                                  name : new SFString("r_pinky_distal_tip"),
                                                                                                                                  DEF : new SFString("hanim_r_pinky_distal_tip"),
                                                                                                                                  translation : new SFVec3f([-0.1938,0.7035,-0.0949]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children : new MFNode([
                                                                                                                                    new TouchSensor({
                                                                                                                                      description : new SFString("HAnimSite r_pinky_distal_tip")}),

                                                                                                                                    new Shape({
                                                                                                                                      USE : new SFString("HAnimSiteShape")})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])})])}),
              /*USE nodes for inverse kinematics (IK) engines and other tools*/
              /*Top-level HAnimSite/Viewpoint nodes for viewing the humanoid without being affected by body motion*/
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("l_inclined_view"),
                  DEF : new SFString("hanim_l_inclined_view"),
                  rotation : new SFRotation([-0.113,0.993,0.0347,0.671]),
                  translation : new SFVec3f([1.62,1.05,2.06]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_inclined_viewpoint"),
                      description : new SFString("left inclined"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                              USE : new SFString("HAnimSiteViewpointShape")})])})])})])})]),
              viewpoints : new SFNode(
                new HAnimSite({
                  name : new SFString("r_inclined_view"),
                  DEF : new SFString("hanim_r_inclined_view"),
                  rotation : new SFRotation([-0.113,-0.993,0.0347,0.671]),
                  translation : new SFVec3f([-1.62,1.05,2.06]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_r_inclined_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("right inclined"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("front_view"),
                  DEF : new SFString("hanim_front_view"),
                  translation : new SFVec3f([0,0.85,2.58]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("front"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("back_view"),
                  DEF : new SFString("hanim_back_view"),
                  rotation : new SFRotation([0,1,0,3.14]),
                  translation : new SFVec3f([0,0.85,-2.58]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_back_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("back"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("l_side_view"),
                  DEF : new SFString("hanim_l_side_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([2.6,0.854,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_l_side_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("left side"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("Top_view"),
                  DEF : new SFString("hanim_Top_view"),
                  rotation : new SFRotation([1,0,0,-1.57]),
                  translation : new SFVec3f([0,3.5,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_Top_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.9,0]),
                      description : new SFString("Top"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("front_close_view"),
                  DEF : new SFString("hanim_front_close_view"),
                  translation : new SFVec3f([0,0.854,1.575]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1.575]),
                      description : new SFString("front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("side_close_view"),
                  DEF : new SFString("hanim_side_close_view"),
                  rotation : new SFRotation([0,1,0,1.5708]),
                  translation : new SFVec3f([1.56,0.854,0]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_side_close_viewpoint"),
                      centerOfRotation : new SFVec3f([1.6,0,0]),
                      description : new SFString("side close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("head_front_close_view"),
                  DEF : new SFString("hanim_head_front_close_view"),
                  translation : new SFVec3f([0,1.5,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_head_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("head front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("chest_front_close_view"),
                  DEF : new SFString("hanim_chest_front_close_view"),
                  translation : new SFVec3f([0,1.2,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_chest_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("chest front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("pelvis_front_close_view"),
                  DEF : new SFString("hanim_pelvis_front_close_view"),
                  translation : new SFVec3f([0,0.8,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_pelvis_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0,1]),
                      description : new SFString("pelvis front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("knees_front_close_view"),
                  DEF : new SFString("hanim_knees_front_close_view"),
                  translation : new SFVec3f([0,0.4,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_knees_front_close_viewpoint"),
                      centerOfRotation : new SFVec3f([0,0.4,0]),
                      description : new SFString("knees front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("feet_front_close_view"),
                  DEF : new SFString("hanim_feet_front_close_view"),
                  translation : new SFVec3f([0,0,1]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_feet_front_close_viewpoint"),
                      description : new SFString("feet front close"),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  name : new SFString("eye_level_view"),
                  DEF : new SFString("hanim_eye_level_view"),
                  translation : new SFVec3f([0,1.6332,0.0502]),
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("hanim_eye_level_viewpoint"),
                      description : new SFString("eye level looking forward"),
                      orientation : new SFRotation([0,1,0,3.141593]),
                      position : new SFVec3f([0,0,0])}),
                  /*HAnimSite/Viewpoint visualization shape*/

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
                  USE : new SFString("hanim_r_hand_front_view")})),

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
                  USE : new SFString("hanim_r_ulnar_styloid_pt")}))}),

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
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_HumanoidRoot_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_HumanoidRoot_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_sacroiliac_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_subtalar_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_midtarsal_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_metatarsal_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_subtalar_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_midtarsal_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_metatarsal_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vl5_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vl4_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vl3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vl2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vl1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt12_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt11_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt10_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt9_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt8_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt7_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt6_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt5_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt4_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vt1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc7_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc6_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc5_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc4_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_vc1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_skullbase_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_eyeball_joint_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_eyeball_joint_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_sternoclavicular_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_acromioclavicular_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_thumb1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_thumb2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_thumb3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_index0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_index1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_index2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_index3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_middle0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_middle1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_middle2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_middle3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_ring0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_ring1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_ring2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_ring3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_pinky0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_pinky1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_pinky2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_l_pinky3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_sternoclavicular_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_acromioclavicular_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_thumb1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_thumb2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_thumb3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_index0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_index1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_index2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_index3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_middle0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_middle1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_middle2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_middle3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_ring0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_ring1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_ring2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_ring3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_pinky0_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_pinky1_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_pinky2_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StopTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stop_r_pinky3_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_HumanoidRoot_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_HumanoidRoot_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_sacroiliac_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_subtalar_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_subtalar")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_midtarsal_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_midtarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_metatarsal_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_subtalar_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_subtalar")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_midtarsal_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_midtarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_metatarsal_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vl5_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vl4_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vl3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vl2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vl1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt12_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt12")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt11_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt11")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt10_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt10")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt9_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt9")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt8_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt8")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt7_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt7")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt6_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt5_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt4_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vt1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vt1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc7_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc7")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc6_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc5_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc4_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_vc1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_skullbase_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_eyeball_joint_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_eyeball_joint")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_eyeball_joint_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_eyeball_joint")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_sternoclavicular_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_acromioclavicular_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_thumb1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_thumb2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_thumb3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_index0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_index0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_index1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_index1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_index2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_index2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_index3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_index3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_middle0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_middle0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_middle1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_middle1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_middle2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_middle2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_middle3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_middle3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_ring0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ring0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_ring1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ring1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_ring2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ring2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_ring3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ring3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_pinky0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_pinky0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_pinky1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_pinky1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_pinky2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_pinky2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_l_pinky3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_pinky3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_sternoclavicular_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_acromioclavicular_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_thumb1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_thumb2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_thumb3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_index0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_index1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_index2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_index3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_middle0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_middle1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_middle2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_middle3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_ring0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_ring1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_ring2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_ring3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_pinky0_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky0")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_pinky1_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_pinky2_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stop_r_pinky3_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky3")})])}),

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
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0.2,0,0,1,0.3,0,0,1,0.35,0,0,1,0.2,0,0,1,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_eyeball_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_eyeball_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_index1_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_index2_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("StandTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Stand_r_index3_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc7")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_eyeball_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_eyeball_joint")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_eyeball_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_eyeball_joint")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index1_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index2_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index3_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_index3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index1_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index2_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index3_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_middle3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index1_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index2_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index3_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ring3")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index1_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index2_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky2")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Stand_r_index3_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_pinky3")})])}),

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
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.3,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitches_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("PitchTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Pitch_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitches_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Pitch_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaws_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("YawTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Yaw_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaws_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Yaw_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Rolls_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RollTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Roll_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Rolls_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Roll_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.5,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("WalkTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Walk_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Walk_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.25,1,0,0,0.7,1,0,0,0.27,1,0,0,0.2,1,0,0,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_ankle_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_knee_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_hip_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_ankle_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_knee_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_hip_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_lower_body_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_wrist_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_elbow_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_shoulder_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_wrist_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_elbow_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_shoulder_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_head_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_neck_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_upper_body_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_whole_body_RotationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_whole_body_TranslationInterpolator_Run")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("RunTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Run_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_ankle_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_knee_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_hip_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_ankle_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_knee_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_hip_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_wrist_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_elbow_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_shoulder_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_wrist_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_elbow_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_shoulder_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_lower_body_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_head_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_neck_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_upper_body_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_whole_body_RotationInterpolator_Run"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_whole_body_TranslationInterpolator_Run"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Run_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([1,0,0,0,1,0,0,0.5,1,0,0,1.1,1,0,0,0.7,1,0,0,0.2,1,0,0,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_ankle_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_knee_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_hip_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_wrist_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_elbow_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_shoulder_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_head_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("JumpTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Jump_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_ankle_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_knee_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_hip_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_wrist_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_elbow_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_shoulder_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_head_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_skullbase")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Jump_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")})])}),

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
                  keyValue : new MFRotation([0,0,1,0,1,0,0,0.7,1,0,0,0.5,0,0,1,0])}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_shoulder_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_ForeArm_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_wrist_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_sternoclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_acromioclavicular_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_shoulder_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_ForeArm_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_wrist_RollInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_thumb1_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_hip_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_knee_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_hip_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_l_knee_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_ankle_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_r_metatarsal_PitchInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_sacroiliac_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_vl5_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_vc6_YawInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_lower_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_upper_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_whole_body_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_whole_body_TranslationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("fraction_changed"),
                  fromNode : new SFString("KickTimer"),
                  toField : new SFString("set_fraction"),
                  toNode : new SFString("Kick_neck_RotationInterpolator")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_shoulder_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_ForeArm_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_wrist_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_sternoclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_sternoclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_acromioclavicular_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_acromioclavicular")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_shoulder_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_shoulder")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_ForeArm_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_elbow")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_wrist_RollInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_wrist")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_thumb1_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_thumb1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_hip_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_knee_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_r_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_hip_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_hip")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_l_knee_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_knee")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_ankle_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_ankle")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_r_metatarsal_PitchInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_l_metatarsal")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_sacroiliac_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_vl5_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl5")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_vc6_YawInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc6")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_upper_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vl1")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_lower_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_sacroiliac")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_whole_body_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_whole_body_TranslationInterpolator"),
                  toField : new SFString("translation"),
                  toNode : new SFString("hanim_humanoid_root")}),

                new ROUTE({
                  fromField : new SFString("value_changed"),
                  fromNode : new SFString("Kick_neck_RotationInterpolator"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("hanim_vc4")})])}),

            new Group({
              DEF : new SFString("UserInterface"),
              /*Authoring hint: these axes are aligned within local coordinate system*/
              children : new MFNode([
                new Transform({
                  DEF : new SFString("CoordinateAxesAdjustedScale"),
                  scale : new SFVec3f([0.175,0.175,0.175]),
                  children : new MFNode([
                    new Inline({
                      DEF : new SFString("CoordinateAxes"),
                      url : new MFString(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl"])})])}),

                new Transform({
                  DEF : new SFString("cordsys"),
                  scale : new SFVec3f([0.175,0.175,0.175]),
                  /*<Inline bboxCenter='0.05143541 0.07883984 0.04731131' bboxSize='2.202872 2.25768 2.194624' url='\"JointCoordinateAxes.x3dv\"'/>*/}),

                new ProximitySensor({
                  DEF : new SFString("HudProximitySensor"),
                  center : new SFVec3f([0,20,0]),
                  size : new SFVec3f([500,100,500])}),

                new Transform({
                  DEF : new SFString("Stage"),
                  scale : new SFVec3f([1,0.0125,1]),
                  translation : new SFVec3f([0,-0.0125,0]),
                  children : new MFNode([
                    new Shape({
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              transparency : new SFFloat(0.6)}))})),
                      geometry : new SFNode(
                        new Box({}))}),

                    new Transform({
                      DEF : new SFString("Circle0"),
                      scale : new SFVec3f([1.175,1,1.175]),
                      children : new MFNode([
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
                                  point : new MFVec3f([1,0,0,0.995,0,-0.105,0.979,0,-0.208,0.951,0,-0.309,0.914,0,-0.407,0.866,0,-0.5,0.809,0,-0.588,0.743,0,-0.669,0.669,0,-0.743,0.588,0,-0.809,0.5,0,-0.866,0.407,0,-0.914,0.309,0,-0.951,0.208,0,-0.978,0.105,0,-0.995,0,0,-1,-0.105,0,-0.994522,-0.208,0,-0.978,-0.309,0,-0.951,-0.407,0,-0.914,-0.5,0,-0.866,-0.588,0,-0.809,-0.669,0,-0.743,-0.743,0,-0.669,-0.809,0,-0.588,-0.866,0,-0.5,-0.914,0,-0.407,-0.951,0,-0.309,-0.978,0,-0.208,-0.995,0,-0.105,-1,0,0,-0.995,0,0.105,-0.978,0,0.208,-0.951,0,0.309,-0.914,0,0.407,-0.866,0,0.5,-0.809,0,0.588,-0.743,0,0.669,-0.669,0,0.743,-0.588,0,0.809,-0.5,0,0.866,-0.407,0,0.914,-0.309,0,0.951,-0.208,0,0.978,-0.105,0,0.995,0,0,1,0.105,0,0.995,0.208,0,0.978,0.309,0,0.951,0.407,0,0.914,0.5,0,0.866,0.588,0,0.809,0.669,0,0.743,0.743,0,0.669,0.809,0,0.588,0.866,0,0.5,0.914,0,0.407,0.951,0,0.309,0.978,0,0.208,0.995,0,0.104,1,0,0])}))}))})])}),

                    new Transform({
                      DEF : new SFString("Circle1"),
                      scale : new SFVec3f([0.5,1,0.5]),
                      children : new MFNode([
                        new Shape({
                          appearance : new SFNode(
                            new Appearance({
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.9,0,0.7]),
                                  emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
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
                              material : new SFNode(
                                new Material({
                                  diffuseColor : new SFColor([0.9,0,0.7]),
                                  emissiveColor : new SFColor([0.424956,0.483976,1])}))})),
                          geometry : new SFNode(
                            new IndexedLineSet({
                              USE : new SFString("Orbit1")}))})])})])}),

                new Transform({
                  DEF : new SFString("HudXform"),
                  rotation : new SFRotation([-0.09996068,0.9942513,0.03837026,0.7131352]),
                  translation : new SFVec3f([1.705442,1.042139,1.989742]),
                  children : new MFNode([
                    new Transform({
                      scale : new SFVec3f([0.035,0.035,0.035]),
                      translation : new SFVec3f([-0.42,-0.2,-0.75]),
                      children : new MFNode([
                        new Transform({
                          DEF : new SFString("StandTransform"),
                          translation : new SFVec3f([0,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stand_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("StandTextShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      DEF : new SFString("text_color"),
                                      ambientIntensity : new SFFloat(1),
                                      diffuseColor : new SFColor([0.819,0.521,0.169]),
                                      emissiveColor : new SFColor([0.819,0.521,0.169]),
                                      specularColor : new SFColor([0.819,0.521,0.169])}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Stand"])}))}),

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
                                      point : new MFVec3f([-0.2,-1.2,-0.01,2.5,-1.2,-0.01,2.5,0.75,-0.01,-0.2,0.75,-0.01])}))}))})])}),

                        new Transform({
                          DEF : new SFString("PitchTransform"),
                          translation : new SFVec3f([3,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Pitch_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("PitchTextShape"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Pitch"])}))}),

                            new Shape({
                              DEF : new SFString("Pitch_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("YawTransform"),
                          translation : new SFVec3f([6,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Yaw_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("YawText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Yaw"])}))}),

                            new Shape({
                              DEF : new SFString("Yaw_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("RollTransform"),
                          translation : new SFVec3f([9,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Roll_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("_RollInterpolator"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Roll"])}))}),

                            new Shape({
                              DEF : new SFString("Roll_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("WalkTransform"),
                          translation : new SFVec3f([12,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Walk_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("WalkText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Walk"])}))}),

                            new Shape({
                              DEF : new SFString("Walk_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("RunTransform"),
                          translation : new SFVec3f([15,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Run_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("RunText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Run"])}))}),

                            new Shape({
                              DEF : new SFString("Run_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("JumpTransform"),
                          translation : new SFVec3f([18,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Jump_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("Jump"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Jump"])}))}),

                            new Shape({
                              DEF : new SFString("Jump_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("KickTransform"),
                          translation : new SFVec3f([21,-1,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Kick_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("KickText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Kick"])}))}),

                            new Shape({
                              DEF : new SFString("Kick_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])}),

                        new Transform({
                          DEF : new SFString("Stop_Text"),
                          translation : new SFVec3f([0,1.4,0]),
                          children : new MFNode([
                            new TouchSensor({
                              DEF : new SFString("Stop_Touch"),
                              description : new SFString("touch to select")}),

                            new Shape({
                              DEF : new SFString("StopText"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("text_color")}))})),
                              geometry : new SFNode(
                                new Text({
                                  string : new MFString(["Stop","Default Pose"])}))}),

                            new Shape({
                              DEF : new SFString("Stop_Back"),
                              appearance : new SFNode(
                                new Appearance({
                                  material : new SFNode(
                                    new Material({
                                      USE : new SFString("Clear")}))})),
                              geometry : new SFNode(
                                new IndexedFaceSet({
                                  USE : new SFString("Backing")}))})])})])})])}),

                new ROUTE({
                  fromField : new SFString("position_changed"),
                  fromNode : new SFString("HudProximitySensor"),
                  toField : new SFString("translation"),
                  toNode : new SFString("HudXform")}),

                new ROUTE({
                  fromField : new SFString("orientation_changed"),
                  fromNode : new SFString("HudProximitySensor"),
                  toField : new SFString("rotation"),
                  toNode : new SFString("HudXform")})])}),

            new Group({
              DEF : new SFString("BehaviorSynchronization"),
              children : new MFNode([
                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stand_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Pitch_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Yaw_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Walk_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Roll_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Run_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Jump_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StopTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Kick_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("StandTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("PitchTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("YawTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RollTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("WalkTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("RunTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("JumpTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("stopTime"),
                  toNode : new SFString("KickTimer")}),

                new ROUTE({
                  fromField : new SFString("touchTime"),
                  fromNode : new SFString("Stop_Touch"),
                  toField : new SFString("startTime"),
                  toNode : new SFString("StopTimer")})])})])}))});
console.log(X3D0.toXMLNode());
