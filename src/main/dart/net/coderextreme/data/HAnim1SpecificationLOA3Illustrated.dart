// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('3.3'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('H-Anim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HAnim1SpecificationLOA3Illustrated.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim Specification reference example providing full coverage and visibility of all specified HAnim constructs, also suitable for re-use as an authoring template. Geometry visualizations are derived from HAnim1SpecificationLOA3Invisible.x3d visualization report. Resusable exemplar animations also added via heads-up display (HUD) interface to confirm proper parent-child relationships.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('24 April 2013')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('19 February 2021')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Matthew T. Beitler, Joe D. Williams, Don Brutzman')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnim1SpecificationLOA3Illustrated.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnim1SpecificationLOA3IllustratedLeftSide.png')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim1SpecificationLOA3Invisible.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim1SpecificationLOA3Animation.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationExampleChangeLog.txt')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA1.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA2.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA3.png')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('BS Contact and H3DViewer have polygon-culling problems at close range (possibly related to avatarSize), other players look OK')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('insert MetadataInteger nodes indicating LOA for each Joint and Segment')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.ps')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman and Joe Williams')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginal.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginal.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/HAnim1SpecificationLOA3Illustrated.x3d')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Background(
              skyColor_ : MFColor([SFColor(0.3), SFColor(0.3), SFColor(0.3)])),

            NavigationInfo(),

            Group(
              DEF_ : SFString('Original_WorldInfo'),
              children_ : [
                WorldInfo(
                  info_ : MFString([SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]),
                  title_ : SFString('HANIM 200x Default Joint Centers, LOA3'))]),
          /*TODO move viewpoints to be internal to HAnimHumanoid*/
          /*Viewpoint centerOfRotation=\"0 0.9149 0.0016\" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human.*/

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(4)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Close'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Closer'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Front Face'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(1)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Right Side'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              position_ : SFVec3f([SFDouble(2.6), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Right Side Close'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.2)]),
              position_ : SFVec3f([SFDouble(1), SFDouble(0.8), SFDouble(0.5)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Left Side Close'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.2)]),
              position_ : SFVec3f([SFDouble(-1), SFDouble(0.8), SFDouble(0.5)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Left Side'),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(0.8), SFDouble(0)])),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
              description_ : SFString('Humanoid LOA 3 Top'),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)])),

            HAnimHumanoid(
              name_ : SFString('humanoid'),
              DEF_ : SFString('hanim_humanoid'),
              info_ : MFString([SFString("authorName=Matthew T. Beitler Joe D. Williams Don Brutzman"), SFString("authorEmail=HAnim@web3D.org"), SFString("copyright=none"), SFString("creationDate=12 May 1999"), SFString("usageRestrictions=none"), SFString("humanoidVersion=2.0"), SFString("height=1.7504")]),
              version_ : SFString('1.0'),
              /*Only one root HAnimJoint is expected*/
              /*USE nodes go here for access by inverse kinematics (IK) engines and other tools*/
              /*Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation*/
              /*TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default*/
              /*right between the eyes, stationary position not animating except with body itself*/
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                  children_ : [
                    HAnimSegment(
                      name_ : SFString('sacrum'),
                      DEF_ : SFString('hanim_sacrum'),
                      /*<HAnimJoint name='humanoid_root'/> visualization sphere is placed within <HAnimSegment name='sacrum'/>*/
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimJoint HumanoidRoot, HAnimSegment sacrum')),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                          children_ : [
                            Shape(
                              DEF_ : SFString('HAnimJointShape'),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.006),
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('HAnimJointAppearance'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.5), SFDouble(0)]),
                                      transparency_ : 0.5)))]),
                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='sacroiliac'/>*/

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016])])),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSegmentLineColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])))),
                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='humanoid_root'/> to <HAnimJoint name='vl5'/>*/

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0.0028,1.0568,-0.0776])])),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('pelvis'),
                          DEF_ : SFString('hanim_pelvis'),
                          /*<HAnimJoint name='sacroiliac'/> visualization sphere is placed within <HAnimSegment name='pelvis'/>*/
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimJoint sacroiliac, HAnimSegment pelvis')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))]),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='l_hip'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='sacroiliac'/> to <HAnimJoint name='r_hip'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0961,0.9124,-0.0001])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_iliocristale'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.1525,1.0628,0.0035])])),
                                  color_ : 
                                    ColorRGBA(
                                      DEF_ : SFString('HAnimSiteLineColorRGBA'),
                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(0.1)])))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_trochanterion'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.1689,0.8419,0.0352])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_iliocristale'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.1612,1.0537,0.0008])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_trochanterion'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.1677,0.8336,0.0303])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_asis'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0887,1.0021,0.1112])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_asis'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0925,0.9983,0.1052])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='r_psis'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0716,1.019,-0.1138])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='l_psis'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0774,1.019,-0.1151])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='sacroiliac'/> to <HAnimSite name='crotch'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0034,0.8266,0.0257])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                            HAnimSite(
                              name_ : SFString('r_iliocristale_pt'),
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_iliocristale')),

                                Shape(
                                  DEF_ : SFString('HAnimSiteShape'),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      DEF_ : SFString('DiamondIFS'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      solid_ : false,
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.008,0]),SFVec3f([-0.008,0,0]),SFVec3f([0,0,0.008]),SFVec3f([0.008,0,0]),SFVec3f([0,0,-0.008]),SFVec3f([0,-0.008,0])]))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))]),

                            HAnimSite(
                              name_ : SFString('r_trochanterion_pt'),
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_trochanterion')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_iliocristale_pt'),
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_iliocristale')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_trochanterion_pt'),
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_trochanterion')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('r_asis_pt'),
                              DEF_ : SFString('hanim_r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_asis')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_asis_pt'),
                              DEF_ : SFString('hanim_l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_asis')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('r_psis_pt'),
                              DEF_ : SFString('hanim_r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_psis')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('l_psis_pt'),
                              DEF_ : SFString('hanim_l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_psis')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('crotch_pt'),
                              DEF_ : SFString('hanim_crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite crotch')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l_thigh'),
                              DEF_ : SFString('hanim_l_thigh'),
                              /*<HAnimJoint name='l_hip'/> visualization sphere is placed within <HAnimSegment name='l_thigh'/>*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint l_hip, HAnimSegment l_thigh')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))]),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_hip'/> to <HAnimJoint name='l_knee'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_knee_crease'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.0993,0.4881,-0.0309])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_lateral_epicn'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.1598,0.4967,0.0297])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_hip'/> to <HAnimSite name='l_femoral_medial_epicn'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.0398,0.4946,0.0303])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                HAnimSite(
                                  name_ : SFString('l_knee_crease_pt'),
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_knee_crease')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_femoral_lateral_epicn')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_medial_epicn_pt'),
                                  DEF_ : SFString('hanim_l_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_femoral_medial_epicn')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l_calf'),
                                  DEF_ : SFString('hanim_l_calf'),
                                  /*<HAnimJoint name='l_knee'/> visualization sphere is placed within <HAnimSegment name='l_calf'/>*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint l_knee, HAnimSegment l_calf')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))]),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_knee'/> to <HAnimJoint name='l_ankle'/>*/

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])])),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                HAnimJoint(
                                  name_ : SFString('l_ankle'),
                                  DEF_ : SFString('hanim_l_ankle'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_hindfoot'),
                                      DEF_ : SFString('hanim_l_hindfoot'),
                                      /*<HAnimJoint name='l_ankle'/> visualization sphere is placed within <HAnimSegment name='l_hindfoot'/>*/
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint l_ankle, HAnimSegment l_hindfoot')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))]),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ankle'/> to <HAnimJoint name='l_subtalar'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1086,0.0001,-0.0368])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_lateral_malleolus'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1308,0.0597,-0.1032])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_medial_malleolus'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.089,0.0716,-0.0881])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_sphyrion'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.089,0.0575,-0.0943])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ankle'/> to <HAnimSite name='l_calcaneous_post'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.0974,0.0259,-0.1171])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                        HAnimSite(
                                          name_ : SFString('l_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_lateral_malleolus')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('l_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_medial_malleolus')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('l_sphyrion_pt'),
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_sphyrion')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('l_calcaneous_post_pt'),
                                          DEF_ : SFString('hanim_l_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_calcaneous_post')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      name_ : SFString('l_subtalar'),
                                      DEF_ : SFString('hanim_l_subtalar'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_midproximal'),
                                          DEF_ : SFString('hanim_l_midproximal'),
                                          /*<HAnimJoint name='l_subtalar'/> visualization sphere is placed within <HAnimSegment name='l_midproximal'/>*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint l_subtalar, HAnimSegment l_midproximal')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))]),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_subtalar'/> to <HAnimJoint name='l_midtarsal'/>*/

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.1086,0.0001,-0.0368]),SFVec3f([0.1086,0.0001,0.0368])])),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('l_midtarsal'),
                                          DEF_ : SFString('hanim_l_midtarsal'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_middistal'),
                                              DEF_ : SFString('hanim_l_middistal'),
                                              /*<HAnimJoint name='l_midtarsal'/> visualization sphere is placed within <HAnimSegment name='l_middistal'/>*/
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint l_midtarsal, HAnimSegment l_middistal')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))]),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_midtarsal'/> to <HAnimJoint name='l_metatarsal'/>*/

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1086,0.0001,0.0368]),SFVec3f([0.1086,0,0.0762])])),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_midtarsal'/> to <HAnimSite name='l_metatarsal_pha1'/>*/

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1086,0.0001,0.0368]),SFVec3f([0.0816,0.0232,0.0106])])),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                HAnimSite(
                                                  name_ : SFString('l_metatarsal_pha1_pt'),
                                                  DEF_ : SFString('hanim_l_metatarsal_pha1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]),
                                                  /*HAnimSite visualization shape*/
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite l_metatarsal_pha1')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_metatarsal'),
                                              DEF_ : SFString('hanim_l_metatarsal'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_forefoot'),
                                                  DEF_ : SFString('hanim_l_forefoot'),
                                                  /*<HAnimJoint name='l_metatarsal'/> visualization sphere is placed within <HAnimSegment name='l_forefoot'/>*/
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint l_metatarsal, HAnimSegment l_forefoot')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))]),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_forefoot_tip'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1354,0.0016,0.1476])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_metatarsal_pha5'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1825,0.007,0.0928])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_metatarsal'/> to <HAnimSite name='l_digit2'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1195,0.0079,0.1433])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('l_forefoot_tip'),
                                                      DEF_ : SFString('hanim_l_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_forefoot_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_pha5_pt'),
                                                      DEF_ : SFString('hanim_l_metatarsal_pha5_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_pha5')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      name_ : SFString('l_digit2_pt'),
                                                      DEF_ : SFString('hanim_l_digit2_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_digit2')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              /*<HAnimJoint name='r_hip'/> visualization sphere is placed within <HAnimSegment name='r_thigh'/>*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint r_hip, HAnimSegment r_thigh')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))]),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_hip'/> to <HAnimJoint name='r_knee'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.104,0.4867,0.0308])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_knee_crease'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.0825,0.4932,-0.0326])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_lateral_epicn'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.1421,0.4992,0.031])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_hip'/> to <HAnimSite name='r_femoral_medial_epicn'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.0221,0.5014,0.0289])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                HAnimSite(
                                  name_ : SFString('r_knee_crease_pt'),
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_knee_crease')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_lateral_epicn_pt'),
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_femoral_lateral_epicn')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_medial_epicn_pt'),
                                  DEF_ : SFString('hanim_r_femoral_medial_epicn_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                                  /*HAnimSite visualization shape*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_femoral_medial_epicn')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf'),
                                  /*<HAnimJoint name='r_knee'/> visualization sphere is placed within <HAnimSegment name='r_calf'/>*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint r_knee, HAnimSegment r_calf')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))]),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_knee'/> to <HAnimJoint name='r_ankle'/>*/

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.104,0.4867,0.0308]),SFVec3f([-0.1101,0.0656,-0.0736])])),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                HAnimJoint(
                                  name_ : SFString('r_ankle'),
                                  DEF_ : SFString('hanim_r_ankle'),
                                  center_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_hindfoot'),
                                      DEF_ : SFString('hanim_r_hindfoot'),
                                      /*<HAnimJoint name='r_ankle'/> visualization sphere is placed within <HAnimSegment name='r_hindfoot'/>*/
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint r_ankle, HAnimSegment r_hindfoot')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))]),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ankle'/> to <HAnimJoint name='r_subtalar'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.1086,0.0001,-0.0368])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_lateral_malleolus'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.1006,0.0658,-0.1075])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_medial_malleolus'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0591,0.076,-0.0928])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_sphyrion'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0603,0.061,-0.1002])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ankle'/> to <HAnimSite name='r_calcaneous_post'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0692,0.0297,-0.1221])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                        HAnimSite(
                                          name_ : SFString('r_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_lateral_malleolus')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('r_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_medial_malleolus')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('r_sphyrion_pt'),
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_sphyrion')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('r_calcaneous_post_pt'),
                                          DEF_ : SFString('hanim_r_calcaneous_post_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_calcaneous_post')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      name_ : SFString('r_subtalar'),
                                      DEF_ : SFString('hanim_r_subtalar'),
                                      center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_midproximal'),
                                          DEF_ : SFString('hanim_r_midproximal'),
                                          /*<HAnimJoint name='r_subtalar'/> visualization sphere is placed within <HAnimSegment name='r_midproximal'/>*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint r_subtalar, HAnimSegment r_midproximal')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))]),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_subtalar'/> to <HAnimJoint name='r_midtarsal'/>*/

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.1086,0.0001,-0.0368]),SFVec3f([-0.1086,0.0001,0.0368])])),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_midtarsal'),
                                          DEF_ : SFString('hanim_r_midtarsal'),
                                          center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_middistal'),
                                              DEF_ : SFString('hanim_r_middistal'),
                                              /*<HAnimJoint name='r_midtarsal'/> visualization sphere is placed within <HAnimSegment name='r_middistal'/>*/
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint r_midtarsal, HAnimSegment r_middistal')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))]),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_midtarsal'/> to <HAnimJoint name='r_metatarsal'/>*/

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1086,0.0001,0.0368]),SFVec3f([-0.1086,0,0.0762])])),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_midtarsal'/> to <HAnimSite name='r_metatarsal_pha1'/>*/

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1086,0.0001,0.0368]),SFVec3f([-0.0521,0.026,0.0127])])),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                HAnimSite(
                                                  name_ : SFString('r_metatarsal_pha1_pt'),
                                                  DEF_ : SFString('hanim_r_metatarsal_pha1_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]),
                                                  /*HAnimSite visualization shape*/
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite r_metatarsal_pha1')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                            HAnimJoint(
                                              name_ : SFString('r_metatarsal'),
                                              DEF_ : SFString('hanim_r_metatarsal'),
                                              center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('r_forefoot'),
                                                  DEF_ : SFString('hanim_r_forefoot'),
                                                  /*<HAnimJoint name='r_metatarsal'/> visualization sphere is placed within <HAnimSegment name='r_forefoot'/>*/
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint r_metatarsal, HAnimSegment r_forefoot')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))]),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_forefoot_tip'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.1043,0.0227,0.145])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_metatarsal_pha5'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.1523,0.0166,0.0895])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                  /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_metatarsal'/> to <HAnimSite name='r_digit2'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.0883,0.0134,0.1383])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                    HAnimSite(
                                                      name_ : SFString('r_forefoot_tip'),
                                                      DEF_ : SFString('hanim_r_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(0.0227), SFDouble(0.145)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_forefoot_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      name_ : SFString('r_metatarsal_pha5_pt'),
                                                      DEF_ : SFString('hanim_r_metatarsal_pha5_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_pha5')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      name_ : SFString('r_digit2_pt'),
                                                      DEF_ : SFString('hanim_r_digit2_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                      /*HAnimSite visualization shape*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_digit2')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('l5'),
                          DEF_ : SFString('hanim_l5'),
                          /*<HAnimJoint name='vl5'/> visualization sphere is placed within <HAnimSegment name='l5'/>*/
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimJoint vl5, HAnimSegment l5')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                              children_ : [
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))]),
                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl5'/> to <HAnimJoint name='vl4'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='waist_preferred_post'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0,1.0915,-0.1091])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl5'/> to <HAnimSite name='navel'/>*/

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0069,1.0966,0.1017])])),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                            HAnimSite(
                              name_ : SFString('waist_preferred_post_pt'),
                              DEF_ : SFString('hanim_waist_preferred_post_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite waist_preferred_post')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              name_ : SFString('navel_pt'),
                              DEF_ : SFString('hanim_navel_pt'),
                              translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                              /*HAnimSite visualization shape*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite navel')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('l4'),
                              DEF_ : SFString('hanim_l4'),
                              /*<HAnimJoint name='vl4'/> visualization sphere is placed within <HAnimSegment name='l4'/>*/
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint vl4, HAnimSegment l4')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                  children_ : [
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))]),
                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl4'/> to <HAnimJoint name='vl3'/>*/

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])])),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('l3'),
                                  DEF_ : SFString('hanim_l3'),
                                  /*<HAnimJoint name='vl3'/> visualization sphere is placed within <HAnimSegment name='l3'/>*/
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint vl3, HAnimSegment l3')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                      children_ : [
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))]),
                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl3'/> to <HAnimJoint name='vl2'/>*/

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])])),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l2'),
                                      DEF_ : SFString('hanim_l2'),
                                      /*<HAnimJoint name='vl2'/> visualization sphere is placed within <HAnimSegment name='l2'/>*/
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint vl2, HAnimSegment l2')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                          children_ : [
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))]),
                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl2'/> to <HAnimJoint name='vl1'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='r_rib10'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([-0.0711,1.1941,0.1016])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='l_rib10'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0871,1.1925,0.0992])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vl2'/> to <HAnimSite name='rib10_midspine'/>*/

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0049,1.1908,-0.1113])])),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                        HAnimSite(
                                          name_ : SFString('r_rib10_pt'),
                                          DEF_ : SFString('hanim_r_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_rib10')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('l_rib10_pt'),
                                          DEF_ : SFString('hanim_l_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_rib10')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          name_ : SFString('rib10_midspine_pt'),
                                          DEF_ : SFString('hanim_rib10_midspine_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0049), SFDouble(1.1908), SFDouble(-0.1113)]),
                                          /*HAnimSite visualization shape*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite rib10_midspine')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l1'),
                                          DEF_ : SFString('hanim_l1'),
                                          /*<HAnimJoint name='vl1'/> visualization sphere is placed within <HAnimSegment name='l1'/>*/
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint vl1, HAnimSegment l1')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                              children_ : [
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))]),
                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vl1'/> to <HAnimJoint name='vt12'/>*/

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])])),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('t12'),
                                              DEF_ : SFString('hanim_t12'),
                                              /*<HAnimJoint name='vt12'/> visualization sphere is placed within <HAnimSegment name='t12'/>*/
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint vt12, HAnimSegment t12')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                  children_ : [
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))]),
                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt12'/> to <HAnimJoint name='vt11'/>*/

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])])),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('t11'),
                                                  DEF_ : SFString('hanim_t11'),
                                                  /*<HAnimJoint name='vt11'/> visualization sphere is placed within <HAnimSegment name='t11'/>*/
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint vt11, HAnimSegment t11')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))]),
                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt11'/> to <HAnimJoint name='vt10'/>*/

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])])),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      name_ : SFString('t10'),
                                                      DEF_ : SFString('hanim_t10'),
                                                      /*<HAnimJoint name='vt10'/> visualization sphere is placed within <HAnimSegment name='t10'/>*/
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimJoint vt10, HAnimSegment t10')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                          children_ : [
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape'))]),
                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt10'/> to <HAnimJoint name='vt9'/>*/

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt10'/> to <HAnimSite name='substernale'/>*/

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0085,1.2995,0.1147])])),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                        HAnimSite(
                                                          name_ : SFString('substernale_pt'),
                                                          DEF_ : SFString('hanim_substernale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                          /*HAnimSite visualization shape*/
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite substernale')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          name_ : SFString('t9'),
                                                          DEF_ : SFString('hanim_t9'),
                                                          /*<HAnimJoint name='vt9'/> visualization sphere is placed within <HAnimSegment name='t9'/>*/
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimJoint vt9, HAnimSegment t9')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                              children_ : [
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt9'/> to <HAnimJoint name='vt8'/>*/

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])])),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='r_thelion'/>*/

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([-0.0736,1.3385,0.1217])])),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt9'/> to <HAnimSite name='l_thelion'/>*/

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0918,1.3382,0.1192])])),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                            HAnimSite(
                                                              name_ : SFString('r_thelion_pt'),
                                                              DEF_ : SFString('hanim_r_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                              /*HAnimSite visualization shape*/
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_thelion')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                            HAnimSite(
                                                              name_ : SFString('l_thelion_pt'),
                                                              DEF_ : SFString('hanim_l_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                              /*HAnimSite visualization shape*/
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_thelion')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              name_ : SFString('t8'),
                                                              DEF_ : SFString('hanim_t8'),
                                                              /*<HAnimJoint name='vt8'/> visualization sphere is placed within <HAnimSegment name='t8'/>*/
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimJoint vt8, HAnimSegment t8')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt8'/> to <HAnimJoint name='vt7'/>*/

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])])),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  name_ : SFString('t7'),
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  /*<HAnimJoint name='vt7'/> visualization sphere is placed within <HAnimSegment name='t7'/>*/
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimJoint vt7, HAnimSegment t7')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt7'/> to <HAnimJoint name='vt6'/>*/

                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])])),
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      name_ : SFString('t6'),
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      /*<HAnimJoint name='vt6'/> visualization sphere is placed within <HAnimSegment name='t6'/>*/
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimJoint vt6, HAnimSegment t6')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                          children_ : [
                                                                            Shape(
                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt6'/> to <HAnimJoint name='vt5'/>*/

                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])])),
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          name_ : SFString('t5'),
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          /*<HAnimJoint name='vt5'/> visualization sphere is placed within <HAnimSegment name='t5'/>*/
                                                                          children_ : [
                                                                            TouchSensor(
                                                                              description_ : SFString('HAnimJoint vt5, HAnimSegment t5')),

                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                              children_ : [
                                                                                Shape(
                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt5'/> to <HAnimJoint name='vt4'/>*/

                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])])),
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              name_ : SFString('t4'),
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              /*<HAnimJoint name='vt4'/> visualization sphere is placed within <HAnimSegment name='t4'/>*/
                                                                              children_ : [
                                                                                TouchSensor(
                                                                                  description_ : SFString('HAnimJoint vt4, HAnimSegment t4')),

                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt4'/> to <HAnimJoint name='vt3'/>*/

                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])])),
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  name_ : SFString('t3'),
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  /*<HAnimJoint name='vt3'/> visualization sphere is placed within <HAnimSegment name='t3'/>*/
                                                                                  children_ : [
                                                                                    TouchSensor(
                                                                                      description_ : SFString('HAnimJoint vt3, HAnimSegment t3')),

                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt3'/> to <HAnimJoint name='vt2'/>*/

                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])])),
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      name_ : SFString('t2'),
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      /*<HAnimJoint name='vt2'/> visualization sphere is placed within <HAnimSegment name='t2'/>*/
                                                                                      children_ : [
                                                                                        TouchSensor(
                                                                                          description_ : SFString('HAnimJoint vt2, HAnimSegment t2')),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt2'/> to <HAnimJoint name='vt1'/>*/

                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])])),
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          name_ : SFString('t1'),
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          /*<HAnimJoint name='vt1'/> visualization sphere is placed within <HAnimSegment name='t1'/>*/
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimJoint vt1, HAnimSegment t1')),

                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='vc7'/>*/

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301])])),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='l_sternoclavicular'/>*/

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.082,1.4488,-0.0353])])),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vt1'/> to <HAnimJoint name='r_sternoclavicular'/>*/

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([-0.082,1.4488,-0.0353])])),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='suprasternale'/>*/

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0084,1.4714,0.0551])])),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vt1'/> to <HAnimSite name='cervicale'/>*/

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0064,1.52,-0.0815])])),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('suprasternale_pt'),
                                                                                              DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                              /*HAnimSite visualization shape*/
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite suprasternale')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              name_ : SFString('cervicale_pt'),
                                                                                              DEF_ : SFString('hanim_cervicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                              /*HAnimSite visualization shape*/
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite cervicale')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('c7'),
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              /*<HAnimJoint name='vc7'/> visualization sphere is placed within <HAnimSegment name='c7'/>*/
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint vc7, HAnimSegment c7')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc7'/> to <HAnimJoint name='vc6'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='r_neck_base'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([-0.0419,1.5149,-0.022])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='vc7'/> to <HAnimSite name='l_neck_base'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0646,1.5141,-0.038])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_neck_base_pt'),
                                                                                                  DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_neck_base')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_neck_base_pt'),
                                                                                                  DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_neck_base')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('c6'),
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  /*<HAnimJoint name='vc6'/> visualization sphere is placed within <HAnimSegment name='c6'/>*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint vc6, HAnimSegment c6')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc6'/> to <HAnimJoint name='vc5'/>*/

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])])),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('c5'),
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      /*<HAnimJoint name='vc5'/> visualization sphere is placed within <HAnimSegment name='c5'/>*/
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint vc5, HAnimSegment c5')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc5'/> to <HAnimJoint name='vc4'/>*/

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])])),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('c4'),
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          /*<HAnimJoint name='vc4'/> visualization sphere is placed within <HAnimSegment name='c4'/>*/
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint vc4, HAnimSegment c4')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc4'/> to <HAnimJoint name='vc3'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('c3'),
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              /*<HAnimJoint name='vc3'/> visualization sphere is placed within <HAnimSegment name='c3'/>*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint vc3, HAnimSegment c3')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc3'/> to <HAnimJoint name='vc2'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.58,-0.0103]),SFVec3f([0.0066,1.5928,-0.0103])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  /*<HAnimJoint name='vc2'/> visualization sphere is placed within <HAnimSegment name='c2'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint vc2, HAnimSegment c2')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc2'/> to <HAnimJoint name='vc1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      /*<HAnimJoint name='vc1'/> visualization sphere is placed within <HAnimSegment name='c1'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint vc1, HAnimSegment c1')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='vc1'/> to <HAnimJoint name='skullbase'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          /*<HAnimJoint name='skullbase'/> visualization sphere is placed within <HAnimSegment name='skull'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint skullbase, HAnimSegment skull')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyeball_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.6332,0.0502])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyelid_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.6332,0.0502])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='l_eyebrow_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.635,0.0506])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyeball_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.6332,0.0502])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyelid_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.6332,0.0502])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='r_eyebrow_joint'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.635,0.0506])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='skullbase'/> to <HAnimJoint name='temporomandibular'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1.63,0.015])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='skull_tip'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.005,1.7504,0.0055])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='sellion'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0058,1.6316,0.0852])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_infraorbitale'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0237,1.6171,0.0752])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_infraorbitale'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0341,1.6171,0.0752])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='supramenton'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0061,1.541,0.0805])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_tragion'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0646,1.6347,0.0302])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='r_gonion'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.052,1.5529,0.0347])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_tragion'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0739,1.6348,0.0282])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='l_gonion'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0631,1.553,0.033])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='skullbase'/> to <HAnimSite name='nuchale'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0039,1.5972,-0.0796])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('skull_tip'),
                                                                                                                              DEF_ : SFString('hanim_skull_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                              /*TODO move skull_tip x to zero, check others for symmetry*/
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite skull_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('sellion_pt'),
                                                                                                                              DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite sellion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_infraorbitale_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_infraorbitale')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_infraorbitale_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_infraorbitale')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('supramenton_pt'),
                                                                                                                              DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite supramenton')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_tragion_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_tragion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_gonion_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_gonion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_tragion_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_tragion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_gonion_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_gonion')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('nuchale_pt'),
                                                                                                                              DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite nuchale')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                              /*<HAnimJoint name='l_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyeball'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_eyeball_joint'/> to <HAnimSite name='l_eyeball_site_view'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.0336,1.6332,0.0502]),SFVec3f([0.034,1.64,0.05])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          DEF_ : SFString('HAnimSiteViewpointLineColorRGBA'),
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(0.1)])))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_eyeball_site_view'),
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_eyeball_site_view')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_l_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('l_eyeball_site_viewpoint looking forward'),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

                                                                                                                                    Anchor(
                                                                                                                                      description_ : SFString('HAnimSite hanim_l_eyeball_site_view Viewpoint'),
                                                                                                                                      url_ : MFString([SFString("#hanim_l_eyeball_site_viewpoint")]),
                                                                                                                                      children_ : [
                                                                                                                                        LOD(
                                                                                                                                          forceTransitions_ : true,
                                                                                                                                          range_ : MFFloat([SFFloat(0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            WorldInfo(
                                                                                                                                              info_ : MFString([SFString("hide diamond when close")])),

                                                                                                                                            Shape(
                                                                                                                                              DEF_ : SFString('HAnimSiteViewpointShape'),
                                                                                                                                              geometry_ : 
                                                                                                                                                IndexedFaceSet(
                                                                                                                                                  DEF_ : SFString('SiteViewpointDiamondIFS'),
                                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                                  coord_ : 
                                                                                                                                                    Coordinate(
                                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))),
                                                                                                                                              appearance_ : 
                                                                                                                                                Appearance(
                                                                                                                                                  material_ : 
                                                                                                                                                    Material(
                                                                                                                                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]),
                                                                                                                                                      transparency_ : 0.6)))])])])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_l_eyelid'),
                                                                                                                              /*<HAnimJoint name='l_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyelid'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_l_eyebrow'),
                                                                                                                              /*<HAnimJoint name='l_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='l_eyebrow'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyeball'),
                                                                                                                              DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                              /*<HAnimJoint name='r_eyeball_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyeball'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_eyeball_joint'/> to <HAnimSite name='r_eyeball_site_view'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.0336,1.6332,0.0502]),SFVec3f([-0.034,1.64,0.05])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_eyeball_site_view'),
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_eyeball_site_view')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_r_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('r_eyeball_site_viewpoint looking forward'),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

                                                                                                                                    Anchor(
                                                                                                                                      description_ : SFString('HAnimSite hanim_r_eyeball_site_view Viewpoint'),
                                                                                                                                      url_ : MFString([SFString("#hanim_r_eyeball_site_viewpoint")]),
                                                                                                                                      children_ : [
                                                                                                                                        LOD(
                                                                                                                                          forceTransitions_ : true,
                                                                                                                                          range_ : MFFloat([SFFloat(0.04)]),
                                                                                                                                          children_ : [
                                                                                                                                            WorldInfo(
                                                                                                                                              info_ : MFString([SFString("hide diamond when close")])),

                                                                                                                                            Shape(
                                                                                                                                              USE_ : SFString('HAnimSiteViewpointShape'))])])])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyelid'),
                                                                                                                              DEF_ : SFString('hanim_r_eyelid'),
                                                                                                                              /*<HAnimJoint name='r_eyelid_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyelid'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_eyebrow'),
                                                                                                                              DEF_ : SFString('hanim_r_eyebrow'),
                                                                                                                              /*<HAnimJoint name='r_eyebrow_joint'/> visualization sphere is placed within <HAnimSegment name='r_eyebrow'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          /*Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint*/
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('jaw'),
                                                                                                                              DEF_ : SFString('hanim_jaw'),
                                                                                                                              /*<HAnimJoint name='temporomandibular'/> visualization sphere is placed within <HAnimSegment name='jaw'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint temporomandibular, HAnimSegment jaw')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_l_site'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.63,0.015]),SFVec3f([0.045,1.63,0])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='temporomandibular'/> to <HAnimSite name='temporomandibular_r_site'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.63,0.015]),SFVec3f([-0.045,1.63,0])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('temporomandibular_l_site_pt'),
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_l_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.045), SFDouble(1.63), SFDouble(0)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite temporomandibular_l_site')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('temporomandibular_r_site_pt'),
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_r_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.045), SFDouble(1.63), SFDouble(0)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite temporomandibular_r_site')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              /*<HAnimJoint name='l_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='l_clavicle'/>*/
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_sternoclavicular'/> to <HAnimJoint name='l_acromioclavicular'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_clavicale'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0271,1.4943,0.0394])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_acromion'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.2032,1.476,-0.049])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_ant'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.1777,1.4065,-0.0075])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_sternoclavicular'/> to <HAnimSite name='l_axilla_post'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.1706,1.4072,-0.0875])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_clavicale_pt'),
                                                                                                  DEF_ : SFString('hanim_l_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_clavicale')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_acromion_pt'),
                                                                                                  DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_acromion')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_axilla_ant_pt'),
                                                                                                  DEF_ : SFString('hanim_l_axilla_ant_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_axilla_ant')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_axilla_post_pt'),
                                                                                                  DEF_ : SFString('hanim_l_axilla_post_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_axilla_post')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  /*<HAnimJoint name='l_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='l_scapula'/>*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint l_acromioclavicular, HAnimSegment l_scapula')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_acromioclavicular'/> to <HAnimJoint name='l_shoulder'/>*/

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])])),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      /*<HAnimJoint name='l_shoulder'/> visualization sphere is placed within <HAnimSegment name='l_upperarm'/>*/
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint l_shoulder, HAnimSegment l_upperarm')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_shoulder'/> to <HAnimJoint name='l_elbow'/>*/

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_shoulder'/> to <HAnimSite name='l_humeral_lateral_epicn'/>*/

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.228,1.1482,-0.11])])),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_humeral_lateral_epicn_pt'),
                                                                                                          DEF_ : SFString('hanim_l_humeral_lateral_epicn_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                          /*HAnimSite visualization shape*/
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_humeral_lateral_epicn')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          /*<HAnimJoint name='l_elbow'/> visualization sphere is placed within <HAnimSegment name='l_forearm'/>*/
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint l_elbow, HAnimSegment l_forearm')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_elbow'/> to <HAnimJoint name='l_wrist'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radial_styloid'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1901,0.8645,-0.0415])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_olecranon'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1962,1.1375,-0.1123])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_humeral_medial_epicn'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1735,1.1272,-0.1113])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_elbow'/> to <HAnimSite name='l_radiale'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.2182,1.1212,-0.1167])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_radial_styloid_pt'),
                                                                                                              DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_radial_styloid')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_olecranon_pt'),
                                                                                                              DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_olecranon')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_humeral_medial_epicn_pt'),
                                                                                                              DEF_ : SFString('hanim_l_humeral_medial_epicn_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_humeral_medial_epicn')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('l_radiale_pt'),
                                                                                                              DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_radiale')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_wrist'),
                                                                                                          DEF_ : SFString('hanim_l_wrist'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_hand'),
                                                                                                              DEF_ : SFString('hanim_l_hand'),
                                                                                                              /*<HAnimJoint name='l_wrist'/> visualization sphere is placed within <HAnimSegment name='l_hand'/>*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint l_wrist, HAnimSegment l_hand')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_thumb1'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1924,0.8472,-0.0534])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_index0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1983,0.8024,-0.028])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_middle0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1987,0.8029,-0.053])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_ring0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1956,0.8019,-0.0794])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_wrist'/> to <HAnimJoint name='l_pinky0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1925,0.8066,-0.1036])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha2'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.2009,0.8139,-0.0237])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_ulnar_styloid'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.2142,0.8529,-0.0648])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_metacarpal_pha5'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1929,0.786,-0.1122])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='l_wrist'/> to <HAnimSite name='l_hand_front_view'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.3,0.75,0.45])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_pha2_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_pha2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_pha2')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_ulnar_styloid')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_metacarpal_pha5_pt'),
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_pha5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_pha5')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('l_hand_front_view'),
                                                                                                                  DEF_ : SFString('hanim_l_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_hand_front_view')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_l_hand_front_viewpoint'),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                                                                                                      description_ : SFString('left hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

                                                                                                                    Anchor(
                                                                                                                      description_ : SFString('HAnimSite hanim_l_hand_front_view Viewpoint'),
                                                                                                                      url_ : MFString([SFString("#hanim_l_hand_front_viewpoint")]),
                                                                                                                      children_ : [
                                                                                                                        LOD(
                                                                                                                          forceTransitions_ : true,
                                                                                                                          range_ : MFFloat([SFFloat(0.04)]),
                                                                                                                          children_ : [
                                                                                                                            WorldInfo(
                                                                                                                              info_ : MFString([SFString("hide diamond when close")])),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteViewpointShape'))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_thumb1'),
                                                                                                              DEF_ : SFString('hanim_l_thumb1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_thumb_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_l_thumb_metacarpal'),
                                                                                                                  /*<HAnimJoint name='l_thumb1'/> visualization sphere is placed within <HAnimSegment name='l_thumb_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_thumb1, HAnimSegment l_thumb_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb1'/> to <HAnimJoint name='l_thumb2'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_thumb2'),
                                                                                                                  DEF_ : SFString('hanim_l_thumb2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_thumb_proximal'),
                                                                                                                      DEF_ : SFString('hanim_l_thumb_proximal'),
                                                                                                                      /*<HAnimJoint name='l_thumb2'/> visualization sphere is placed within <HAnimSegment name='l_thumb_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_thumb2, HAnimSegment l_thumb_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_thumb2'/> to <HAnimJoint name='l_thumb3'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_thumb3'),
                                                                                                                      DEF_ : SFString('hanim_l_thumb3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_thumb_distal'),
                                                                                                                          DEF_ : SFString('hanim_l_thumb_distal'),
                                                                                                                          /*<HAnimJoint name='l_thumb3'/> visualization sphere is placed within <HAnimSegment name='l_thumb_distal'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_thumb3, HAnimSegment l_thumb_distal')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_thumb3'/> to <HAnimSite name='l_thumb_distal_tip'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1955,0.8159,0.0464]),SFVec3f([0.1982,0.8061,0.0759])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_thumb_distal_tip'),
                                                                                                                              DEF_ : SFString('hanim_l_thumb_distal_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_thumb_distal_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_index0'),
                                                                                                              DEF_ : SFString('hanim_l_index0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_index_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_l_index_metacarpal'),
                                                                                                                  /*<HAnimJoint name='l_index0'/> visualization sphere is placed within <HAnimSegment name='l_index_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_index0, HAnimSegment l_index_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index0'/> to <HAnimJoint name='l_index1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_index1'),
                                                                                                                  DEF_ : SFString('hanim_l_index1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_index_proximal'),
                                                                                                                      DEF_ : SFString('hanim_l_index_proximal'),
                                                                                                                      /*<HAnimJoint name='l_index1'/> visualization sphere is placed within <HAnimSegment name='l_index_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_index1, HAnimSegment l_index_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index1'/> to <HAnimJoint name='l_index2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_index2'),
                                                                                                                      DEF_ : SFString('hanim_l_index2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_index_middle'),
                                                                                                                          DEF_ : SFString('hanim_l_index_middle'),
                                                                                                                          /*<HAnimJoint name='l_index2'/> visualization sphere is placed within <HAnimSegment name='l_index_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_index2, HAnimSegment l_index_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_index2'/> to <HAnimJoint name='l_index3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_index3'),
                                                                                                                          DEF_ : SFString('hanim_l_index3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_index_distal'),
                                                                                                                              DEF_ : SFString('hanim_l_index_distal'),
                                                                                                                              /*<HAnimJoint name='l_index3'/> visualization sphere is placed within <HAnimSegment name='l_index_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_index3, HAnimSegment l_index_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_index_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2089,0.6858,-0.0245])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_index3'/> to <HAnimSite name='l_dactylion'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2056,0.6743,-0.0482])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_index_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_index_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_index_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_dactylion_pt'),
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_dactylion')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_middle0'),
                                                                                                              DEF_ : SFString('hanim_l_middle0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_middle_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_l_middle_metacarpal'),
                                                                                                                  /*<HAnimJoint name='l_middle0'/> visualization sphere is placed within <HAnimSegment name='l_middle_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_middle0, HAnimSegment l_middle_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle0'/> to <HAnimJoint name='l_middle1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_middle1'),
                                                                                                                  DEF_ : SFString('hanim_l_middle1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_middle_proximal'),
                                                                                                                      DEF_ : SFString('hanim_l_middle_proximal'),
                                                                                                                      /*<HAnimJoint name='l_middle1'/> visualization sphere is placed within <HAnimSegment name='l_middle_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_middle1, HAnimSegment l_middle_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle1'/> to <HAnimJoint name='l_middle2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_middle2'),
                                                                                                                      DEF_ : SFString('hanim_l_middle2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_middle_middle'),
                                                                                                                          DEF_ : SFString('hanim_l_middle_middle'),
                                                                                                                          /*<HAnimJoint name='l_middle2'/> visualization sphere is placed within <HAnimSegment name='l_middle_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_middle2, HAnimSegment l_middle_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_middle2'/> to <HAnimJoint name='l_middle3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_middle3'),
                                                                                                                          DEF_ : SFString('hanim_l_middle3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_middle_distal'),
                                                                                                                              DEF_ : SFString('hanim_l_middle_distal'),
                                                                                                                              /*<HAnimJoint name='l_middle3'/> visualization sphere is placed within <HAnimSegment name='l_middle_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_middle3, HAnimSegment l_middle_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_middle3'/> to <HAnimSite name='l_middle_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2026,0.7011,-0.0494]),SFVec3f([0.208,0.6731,-0.0491])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_middle_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_middle_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_middle_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_ring0'),
                                                                                                              DEF_ : SFString('hanim_l_ring0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_ring_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_l_ring_metacarpal'),
                                                                                                                  /*<HAnimJoint name='l_ring0'/> visualization sphere is placed within <HAnimSegment name='l_ring_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_ring0, HAnimSegment l_ring_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring0'/> to <HAnimJoint name='l_ring1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_ring1'),
                                                                                                                  DEF_ : SFString('hanim_l_ring1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_ring_proximal'),
                                                                                                                      DEF_ : SFString('hanim_l_ring_proximal'),
                                                                                                                      /*<HAnimJoint name='l_ring1'/> visualization sphere is placed within <HAnimSegment name='l_ring_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_ring1, HAnimSegment l_ring_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring1'/> to <HAnimJoint name='l_ring2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_ring2'),
                                                                                                                      DEF_ : SFString('hanim_l_ring2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_ring_middle'),
                                                                                                                          DEF_ : SFString('hanim_l_ring_middle'),
                                                                                                                          /*<HAnimJoint name='l_ring2'/> visualization sphere is placed within <HAnimSegment name='l_ring_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_ring2, HAnimSegment l_ring_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_ring2'/> to <HAnimJoint name='l_ring3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_ring3'),
                                                                                                                          DEF_ : SFString('hanim_l_ring3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_ring_distal'),
                                                                                                                              DEF_ : SFString('hanim_l_ring_distal'),
                                                                                                                              /*<HAnimJoint name='l_ring3'/> visualization sphere is placed within <HAnimSegment name='l_ring_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_ring3, HAnimSegment l_ring_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_ring3'/> to <HAnimSite name='l_ring_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1983,0.7045,-0.0767]),SFVec3f([0.2035,0.675,-0.0756])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_ring_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_ring_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_ring_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_pinky0'),
                                                                                                              DEF_ : SFString('hanim_l_pinky0'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_pinky_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_l_pinky_metacarpal'),
                                                                                                                  /*<HAnimJoint name='l_pinky0'/> visualization sphere is placed within <HAnimSegment name='l_pinky_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_pinky0, HAnimSegment l_pinky_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky0'/> to <HAnimJoint name='l_pinky1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_pinky1'),
                                                                                                                  DEF_ : SFString('hanim_l_pinky1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_pinky_proximal'),
                                                                                                                      DEF_ : SFString('hanim_l_pinky_proximal'),
                                                                                                                      /*<HAnimJoint name='l_pinky1'/> visualization sphere is placed within <HAnimSegment name='l_pinky_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_pinky1, HAnimSegment l_pinky_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky1'/> to <HAnimJoint name='l_pinky2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_pinky2'),
                                                                                                                      DEF_ : SFString('hanim_l_pinky2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('l_pinky_middle'),
                                                                                                                          DEF_ : SFString('hanim_l_pinky_middle'),
                                                                                                                          /*<HAnimJoint name='l_pinky2'/> visualization sphere is placed within <HAnimSegment name='l_pinky_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_pinky2, HAnimSegment l_pinky_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='l_pinky2'/> to <HAnimJoint name='l_pinky3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_pinky3'),
                                                                                                                          DEF_ : SFString('hanim_l_pinky3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('l_pinky_distal'),
                                                                                                                              DEF_ : SFString('hanim_l_pinky_distal'),
                                                                                                                              /*<HAnimJoint name='l_pinky3'/> visualization sphere is placed within <HAnimSegment name='l_pinky_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_pinky3, HAnimSegment l_pinky_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='l_pinky3'/> to <HAnimSite name='l_pinky_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1948,0.7277,-0.1017]),SFVec3f([0.2014,0.7009,-0.1012])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('l_pinky_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_l_pinky_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_pinky_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              /*<HAnimJoint name='r_sternoclavicular'/> visualization sphere is placed within <HAnimSegment name='r_clavicle'/>*/
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_sternoclavicular'/> to <HAnimJoint name='r_acromioclavicular'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.0962,1.4269,-0.0424])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_clavicale'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.0115,1.4943,0.04])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_acromion'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1905,1.4791,-0.0431])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_ant'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1626,1.4072,-0.0031])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_sternoclavicular'/> to <HAnimSite name='r_axilla_post'/>*/

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1603,1.4098,-0.0826])])),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_clavicale_pt'),
                                                                                                  DEF_ : SFString('hanim_r_clavicale_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_clavicale')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_acromion_pt'),
                                                                                                  DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_acromion')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_axilla_ant_pt'),
                                                                                                  DEF_ : SFString('hanim_r_axilla_ant_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_axilla_ant')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_axilla_post_pt'),
                                                                                                  DEF_ : SFString('hanim_r_axilla_post_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                                  /*HAnimSite visualization shape*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_axilla_post')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  /*<HAnimJoint name='r_acromioclavicular'/> visualization sphere is placed within <HAnimSegment name='r_scapula'/>*/
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint r_acromioclavicular, HAnimSegment r_scapula')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_acromioclavicular'/> to <HAnimJoint name='r_shoulder'/>*/

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0962,1.4269,-0.0424]),SFVec3f([-0.2029,1.4376,-0.0387])])),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      /*<HAnimJoint name='r_shoulder'/> visualization sphere is placed within <HAnimSegment name='r_upperarm'/>*/
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint r_shoulder, HAnimSegment r_upperarm')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_shoulder'/> to <HAnimJoint name='r_elbow'/>*/

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2029,1.4376,-0.0387]),SFVec3f([-0.2014,1.1357,-0.0682])])),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                      /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_shoulder'/> to <HAnimSite name='r_humeral_lateral_epicn'/>*/

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2029,1.4376,-0.0387]),SFVec3f([-0.2224,1.1517,-0.1033])])),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_humeral_lateral_epicn_pt'),
                                                                                                          DEF_ : SFString('hanim_r_humeral_lateral_epicn_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                          /*HAnimSite visualization shape*/
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_humeral_lateral_epicn')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          /*<HAnimJoint name='r_elbow'/> visualization sphere is placed within <HAnimSegment name='r_forearm'/>*/
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint r_elbow, HAnimSegment r_forearm')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_elbow'/> to <HAnimJoint name='r_wrist'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1984,0.8663,-0.0583])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radial_styloid'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1884,0.8676,-0.036])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_olecranon'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1907,1.1405,-0.1065])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_humeral_medial_epicn'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.168,1.1298,-0.1062])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_elbow'/> to <HAnimSite name='r_radiale'/>*/

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.213,1.1305,-0.1091])])),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radial_styloid_pt'),
                                                                                                              DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_radial_styloid')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_olecranon_pt'),
                                                                                                              DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_olecranon')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_humeral_medial_epicn_pt'),
                                                                                                              DEF_ : SFString('hanim_r_humeral_medial_epicn_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_humeral_medial_epicn')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              name_ : SFString('r_radiale_pt'),
                                                                                                              DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                              /*HAnimSite visualization shape*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_radiale')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_wrist'),
                                                                                                          DEF_ : SFString('hanim_r_wrist'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('r_hand'),
                                                                                                              DEF_ : SFString('hanim_r_hand'),
                                                                                                              /*<HAnimJoint name='r_wrist'/> visualization sphere is placed within <HAnimSegment name='r_hand'/>*/
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint r_wrist, HAnimSegment r_hand')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_thumb1'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1924,0.8472,-0.0534])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_index0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1983,0.8024,-0.028])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_middle0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1987,0.8029,-0.053])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_ring0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1956,0.8019,-0.0794])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_wrist'/> to <HAnimJoint name='r_pinky0'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1925,0.8066,-0.1036])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha2'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1977,0.8169,-0.0177])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_ulnar_styloid'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.2117,0.8562,-0.0584])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_metacarpal_pha5'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1929,0.789,-0.1064])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                              /*HAnimSite/Viewpoint visualization line segment from ancestor <HAnimJoint name='r_wrist'/> to <HAnimSite name='r_hand_front_view'/>*/

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.3,0.75,0.45])])),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')))),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_pha2_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_pha2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_pha2')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_ulnar_styloid')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_metacarpal_pha5_pt'),
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_pha5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_pha5')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  name_ : SFString('r_hand_front_view'),
                                                                                                                  DEF_ : SFString('hanim_r_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_hand_front_view')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_r_hand_front_viewpoint'),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)]),
                                                                                                                      description_ : SFString('right hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                                                                                                                  /*HAnimSite/Viewpoint visualization shape*/

                                                                                                                    Anchor(
                                                                                                                      description_ : SFString('HAnimSite hanim_r_hand_front_view Viewpoint'),
                                                                                                                      url_ : MFString([SFString("#hanim_r_hand_front_viewpoint")]),
                                                                                                                      children_ : [
                                                                                                                        LOD(
                                                                                                                          forceTransitions_ : true,
                                                                                                                          range_ : MFFloat([SFFloat(0.04)]),
                                                                                                                          children_ : [
                                                                                                                            WorldInfo(
                                                                                                                              info_ : MFString([SFString("hide diamond when close")])),

                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimSiteViewpointShape'))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_thumb1'),
                                                                                                              DEF_ : SFString('hanim_r_thumb1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_thumb_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_r_thumb_metacarpal'),
                                                                                                                  /*<HAnimJoint name='r_thumb1'/> visualization sphere is placed within <HAnimSegment name='r_thumb_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_thumb1, HAnimSegment r_thumb_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb1'/> to <HAnimJoint name='r_thumb2'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1924,0.8472,-0.0534]),SFVec3f([-0.1951,0.8226,0.0246])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_thumb2'),
                                                                                                                  DEF_ : SFString('hanim_r_thumb2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_thumb_proximal'),
                                                                                                                      DEF_ : SFString('hanim_r_thumb_proximal'),
                                                                                                                      /*<HAnimJoint name='r_thumb2'/> visualization sphere is placed within <HAnimSegment name='r_thumb_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_thumb2, HAnimSegment r_thumb_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_thumb2'/> to <HAnimJoint name='r_thumb3'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.8226,0.0246]),SFVec3f([-0.1955,0.8159,0.0464])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_thumb3'),
                                                                                                                      DEF_ : SFString('hanim_r_thumb3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_thumb_distal'),
                                                                                                                          DEF_ : SFString('hanim_r_thumb_distal'),
                                                                                                                          /*<HAnimJoint name='r_thumb3'/> visualization sphere is placed within <HAnimSegment name='r_thumb_distal'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_thumb3, HAnimSegment r_thumb_distal')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_thumb3'/> to <HAnimSite name='r_thumb_distal_tip'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1955,0.8159,0.0464]),SFVec3f([-0.1869,0.809,0.082])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_thumb_distal_tip'),
                                                                                                                              DEF_ : SFString('hanim_r_thumb_distal_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1869), SFDouble(0.809), SFDouble(0.082)]),
                                                                                                                              /*HAnimSite visualization shape*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_thumb_distal_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_index0'),
                                                                                                              DEF_ : SFString('hanim_r_index0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_index_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_r_index_metacarpal'),
                                                                                                                  /*<HAnimJoint name='r_index0'/> visualization sphere is placed within <HAnimSegment name='r_index_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_index0, HAnimSegment r_index_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index0'/> to <HAnimJoint name='r_index1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1983,0.8024,-0.028]),SFVec3f([-0.1983,0.7815,-0.028])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_index1'),
                                                                                                                  DEF_ : SFString('hanim_r_index1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_index_proximal'),
                                                                                                                      DEF_ : SFString('hanim_r_index_proximal'),
                                                                                                                      /*<HAnimJoint name='r_index1'/> visualization sphere is placed within <HAnimSegment name='r_index_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_index1, HAnimSegment r_index_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index1'/> to <HAnimJoint name='r_index2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1983,0.7815,-0.028]),SFVec3f([-0.2017,0.7363,-0.0248])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_index2'),
                                                                                                                      DEF_ : SFString('hanim_r_index2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_index_middle'),
                                                                                                                          DEF_ : SFString('hanim_r_index_middle'),
                                                                                                                          /*<HAnimJoint name='r_index2'/> visualization sphere is placed within <HAnimSegment name='r_index_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_index2, HAnimSegment r_index_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_index2'/> to <HAnimJoint name='r_index3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2017,0.7363,-0.0248]),SFVec3f([-0.2028,0.7139,-0.0236])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_index3'),
                                                                                                                          DEF_ : SFString('hanim_r_index3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_index_distal'),
                                                                                                                              DEF_ : SFString('hanim_r_index_distal'),
                                                                                                                              /*<HAnimJoint name='r_index3'/> visualization sphere is placed within <HAnimSegment name='r_index_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_index3, HAnimSegment r_index_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_index_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2028,0.7139,-0.0236]),SFVec3f([-0.198,0.6883,-0.018])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_index3'/> to <HAnimSite name='r_dactylion'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2028,0.7139,-0.0236]),SFVec3f([-0.1941,0.6772,-0.0423])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_index_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_index_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.198), SFDouble(0.6883), SFDouble(-0.018)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_index_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_dactylion_pt'),
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_dactylion')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_middle0'),
                                                                                                              DEF_ : SFString('hanim_r_middle0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_middle_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_r_middle_metacarpal'),
                                                                                                                  /*<HAnimJoint name='r_middle0'/> visualization sphere is placed within <HAnimSegment name='r_middle_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_middle0, HAnimSegment r_middle_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle0'/> to <HAnimJoint name='r_middle1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1987,0.8029,-0.053]),SFVec3f([-0.1987,0.7818,-0.053])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_middle1'),
                                                                                                                  DEF_ : SFString('hanim_r_middle1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_middle_proximal'),
                                                                                                                      DEF_ : SFString('hanim_r_middle_proximal'),
                                                                                                                      /*<HAnimJoint name='r_middle1'/> visualization sphere is placed within <HAnimSegment name='r_middle_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_middle1, HAnimSegment r_middle_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle1'/> to <HAnimJoint name='r_middle2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1987,0.7818,-0.053]),SFVec3f([-0.2013,0.7273,-0.0503])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_middle2'),
                                                                                                                      DEF_ : SFString('hanim_r_middle2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_middle_middle'),
                                                                                                                          DEF_ : SFString('hanim_r_middle_middle'),
                                                                                                                          /*<HAnimJoint name='r_middle2'/> visualization sphere is placed within <HAnimSegment name='r_middle_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_middle2, HAnimSegment r_middle_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_middle2'/> to <HAnimJoint name='r_middle3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2013,0.7273,-0.0503]),SFVec3f([-0.2026,0.7011,-0.0494])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_middle3'),
                                                                                                                          DEF_ : SFString('hanim_r_middle3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_middle_distal'),
                                                                                                                              DEF_ : SFString('hanim_r_middle_distal'),
                                                                                                                              /*<HAnimJoint name='r_middle3'/> visualization sphere is placed within <HAnimSegment name='r_middle_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_middle3, HAnimSegment r_middle_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_middle3'/> to <HAnimSite name='r_middle_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2026,0.7011,-0.0494]),SFVec3f([-0.1969,0.6758,-0.0427])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_middle_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_middle_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_middle_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_ring0'),
                                                                                                              DEF_ : SFString('hanim_r_ring0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_ring_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_r_ring_metacarpal'),
                                                                                                                  /*<HAnimJoint name='r_ring0'/> visualization sphere is placed within <HAnimSegment name='r_ring_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_ring0, HAnimSegment r_ring_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring0'/> to <HAnimJoint name='r_ring1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1956,0.8019,-0.0794]),SFVec3f([-0.1956,0.7815,-0.0794])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_ring1'),
                                                                                                                  DEF_ : SFString('hanim_r_ring1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_ring_proximal'),
                                                                                                                      DEF_ : SFString('hanim_r_ring_proximal'),
                                                                                                                      /*<HAnimJoint name='r_ring1'/> visualization sphere is placed within <HAnimSegment name='r_ring_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_ring1, HAnimSegment r_ring_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring1'/> to <HAnimJoint name='r_ring2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1956,0.7815,-0.0794]),SFVec3f([-0.1973,0.7287,-0.0777])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_ring2'),
                                                                                                                      DEF_ : SFString('hanim_r_ring2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_ring_middle'),
                                                                                                                          DEF_ : SFString('hanim_r_ring_middle'),
                                                                                                                          /*<HAnimJoint name='r_ring2'/> visualization sphere is placed within <HAnimSegment name='r_ring_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_ring2, HAnimSegment r_ring_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_ring2'/> to <HAnimJoint name='r_ring3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1973,0.7287,-0.0777]),SFVec3f([-0.1983,0.7045,-0.0767])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_ring3'),
                                                                                                                          DEF_ : SFString('hanim_r_ring3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_ring_distal'),
                                                                                                                              DEF_ : SFString('hanim_r_ring_distal'),
                                                                                                                              /*<HAnimJoint name='r_ring3'/> visualization sphere is placed within <HAnimSegment name='r_ring_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_ring3, HAnimSegment r_ring_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_ring3'/> to <HAnimSite name='r_ring_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1983,0.7045,-0.0767]),SFVec3f([-0.1934,0.6778,-0.0693])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_ring_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_ring_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1934), SFDouble(0.6778), SFDouble(-0.0693)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_ring_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_pinky0'),
                                                                                                              DEF_ : SFString('hanim_r_pinky0'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('r_pinky_metacarpal'),
                                                                                                                  DEF_ : SFString('hanim_r_pinky_metacarpal'),
                                                                                                                  /*<HAnimJoint name='r_pinky0'/> visualization sphere is placed within <HAnimSegment name='r_pinky_metacarpal'/>*/
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_pinky0, HAnimSegment r_pinky_metacarpal')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))]),
                                                                                                                  /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky0'/> to <HAnimJoint name='r_pinky1'/>*/

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1925,0.8066,-0.1036]),SFVec3f([-0.1925,0.7866,-0.1036])])),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_pinky1'),
                                                                                                                  DEF_ : SFString('hanim_r_pinky1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('r_pinky_proximal'),
                                                                                                                      DEF_ : SFString('hanim_r_pinky_proximal'),
                                                                                                                      /*<HAnimJoint name='r_pinky1'/> visualization sphere is placed within <HAnimSegment name='r_pinky_proximal'/>*/
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_pinky1, HAnimSegment r_pinky_proximal')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))]),
                                                                                                                      /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky1'/> to <HAnimJoint name='r_pinky2'/>*/

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1925,0.7866,-0.1036]),SFVec3f([-0.1938,0.7452,-0.1024])])),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_pinky2'),
                                                                                                                      DEF_ : SFString('hanim_r_pinky2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          name_ : SFString('r_pinky_middle'),
                                                                                                                          DEF_ : SFString('hanim_r_pinky_middle'),
                                                                                                                          /*<HAnimJoint name='r_pinky2'/> visualization sphere is placed within <HAnimSegment name='r_pinky_middle'/>*/
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_pinky2, HAnimSegment r_pinky_middle')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))]),
                                                                                                                          /*HAnimSegment visualization line segment from parent <HAnimJoint name='r_pinky2'/> to <HAnimJoint name='r_pinky3'/>*/

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1938,0.7452,-0.1024]),SFVec3f([-0.1948,0.7277,-0.1017])])),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA'))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_pinky3'),
                                                                                                                          DEF_ : SFString('hanim_r_pinky3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              name_ : SFString('r_pinky_distal'),
                                                                                                                              DEF_ : SFString('hanim_r_pinky_distal'),
                                                                                                                              /*<HAnimJoint name='r_pinky3'/> visualization sphere is placed within <HAnimSegment name='r_pinky_distal'/>*/
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_pinky3, HAnimSegment r_pinky_distal')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  children_ : [
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))]),
                                                                                                                              /*HAnimSite visualization line segment from ancestor <HAnimJoint name='r_pinky3'/> to <HAnimSite name='r_pinky_distal_tip'/>*/

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1948,0.7277,-0.1017]),SFVec3f([-0.1938,0.7035,-0.0949])])),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')))),

                                                                                                                                HAnimSite(
                                                                                                                                  name_ : SFString('r_pinky_distal_tip'),
                                                                                                                                  DEF_ : SFString('hanim_r_pinky_distal_tip'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7035), SFDouble(-0.0949)]),
                                                                                                                                  /*HAnimSite visualization shape*/
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_pinky_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('l_inclined_view'),
                  DEF_ : SFString('hanim_l_inclined_view'),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  translation_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite l_inclined_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_l_inclined_viewpoint'),
                      description_ : SFString('left inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_l_inclined_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_l_inclined_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])])],
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('r_inclined_view'),
                  DEF_ : SFString('hanim_r_inclined_view'),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(-0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  translation_ : SFVec3f([SFDouble(-1.62), SFDouble(1.05), SFDouble(2.06)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite r_inclined_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_r_inclined_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('right inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_r_inclined_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_r_inclined_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('front_view'),
                  DEF_ : SFString('hanim_front_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(2.58)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite front_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_front_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('front'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_front_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_front_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('back_view'),
                  DEF_ : SFString('hanim_back_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(-2.58)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite back_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_back_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('back'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_back_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_back_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('l_side_view'),
                  DEF_ : SFString('hanim_l_side_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  translation_ : SFVec3f([SFDouble(2.6), SFDouble(0.854), SFDouble(0)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite l_side_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_l_side_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('left side'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_l_side_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_l_side_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('Top_view'),
                  DEF_ : SFString('hanim_Top_view'),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite Top_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_Top_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)]),
                      description_ : SFString('Top'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_Top_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_Top_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('front_close_view'),
                  DEF_ : SFString('hanim_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(1.575)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1.575)]),
                      description_ : SFString('front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('side_close_view'),
                  DEF_ : SFString('hanim_side_close_view'),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  translation_ : SFVec3f([SFDouble(1.56), SFDouble(0.854), SFDouble(0)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite side_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_side_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(1.6), SFDouble(0), SFDouble(0)]),
                      description_ : SFString('side close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_side_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_side_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('head_front_close_view'),
                  DEF_ : SFString('hanim_head_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(1)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite head_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_head_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('head front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_head_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_head_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('chest_front_close_view'),
                  DEF_ : SFString('hanim_chest_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite chest_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_chest_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('chest front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_chest_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_chest_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('pelvis_front_close_view'),
                  DEF_ : SFString('hanim_pelvis_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(1)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite pelvis_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_pelvis_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                      description_ : SFString('pelvis front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_pelvis_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_pelvis_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('knees_front_close_view'),
                  DEF_ : SFString('hanim_knees_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(1)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite knees_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_knees_front_close_viewpoint'),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)]),
                      description_ : SFString('knees front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_knees_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_knees_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('feet_front_close_view'),
                  DEF_ : SFString('hanim_feet_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite feet_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_feet_front_close_viewpoint'),
                      description_ : SFString('feet front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_feet_front_close_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_feet_front_close_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('eye_level_view'),
                  DEF_ : SFString('hanim_eye_level_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.6332), SFDouble(0.0502)]),
                  /*HAnimSite visualization shape*/
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite eye_level_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_eye_level_viewpoint'),
                      description_ : SFString('eye level looking forward'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)]),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),
                  /*HAnimSite/Viewpoint visualization shape*/

                    Anchor(
                      description_ : SFString('HAnimSite hanim_eye_level_view Viewpoint'),
                      url_ : MFString([SFString("#hanim_eye_level_viewpoint")]),
                      children_ : [
                        LOD(
                          forceTransitions_ : true,
                          range_ : MFFloat([SFFloat(0.04)]),
                          children_ : [
                            WorldInfo(
                              info_ : MFString([SFString("hide diamond when close")])),

                            Shape(
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_eyeball_site_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_eyeball_site_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_hand_front_view')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_hand_front_view')),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt12')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt11')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt10')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt9')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt8')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vt1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc7')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc6')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc1')),

                HAnimJoint(
                  USE_ : SFString('hanim_skullbase')),

                HAnimJoint(
                  USE_ : SFString('hanim_temporomandibular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ankle')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ankle')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_index3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_index3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_middle3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_middle3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midtarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_pinky3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_pinky3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring0')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring0')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_ring3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_ring3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_subtalar')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_subtalar')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_thumb3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_thumb3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_wrist')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_wrist')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_jaw')),

                HAnimSegment(
                  USE_ : SFString('hanim_c1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c2')),

                HAnimSegment(
                  USE_ : SFString('hanim_c3')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_c5')),

                HAnimSegment(
                  USE_ : SFString('hanim_c6')),

                HAnimSegment(
                  USE_ : SFString('hanim_c7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t1')),

                HAnimSegment(
                  USE_ : SFString('hanim_t2')),

                HAnimSegment(
                  USE_ : SFString('hanim_t3')),

                HAnimSegment(
                  USE_ : SFString('hanim_t4')),

                HAnimSegment(
                  USE_ : SFString('hanim_t5')),

                HAnimSegment(
                  USE_ : SFString('hanim_t6')),

                HAnimSegment(
                  USE_ : SFString('hanim_t7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t8')),

                HAnimSegment(
                  USE_ : SFString('hanim_t9')),

                HAnimSegment(
                  USE_ : SFString('hanim_t10')),

                HAnimSegment(
                  USE_ : SFString('hanim_t11')),

                HAnimSegment(
                  USE_ : SFString('hanim_t12')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l5')),

                HAnimSegment(
                  USE_ : SFString('hanim_sacrum')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_calf')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_clavicle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyeball')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyeball')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyebrow')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyebrow')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_eyelid')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_eyelid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forefoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forefoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hand')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_hindfoot')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_index_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_index_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middistal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_middle_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_middle_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_midproximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_midproximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_pinky_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_pinky_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_middle')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_ring_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_ring_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_distal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_metacarpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thumb_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thumb_proximal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_crotch_pt'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_sellion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_supramenton_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_nuchale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_suprasternale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_cervicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_substernale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_rib10_midspine_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_waist_preferred_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_navel_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_acromion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_ant_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_ant_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneous_post_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_digit2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_digit2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_forefoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_forefoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicn_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_index_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_index_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_infraorbitale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_knee_crease_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_lateral_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_medial_malleolus_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_pha2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_pha2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_pha1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_pha1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_pha5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_middle_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_middle_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_neck_base_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_olecranon_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_pinky_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_pinky_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_psis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_psis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radial_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_radiale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_rib10_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ring_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ring_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_temporomandibular_l_site_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_temporomandibular_r_site_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_sphyrion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thumb_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thumb_distal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_tragion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_trochanterion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')))]));
void main() { exit(0); }
