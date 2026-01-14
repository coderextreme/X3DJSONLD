// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HAnim2SpecificationLOA3Illustrated.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2SpecificationLOA3Invisible.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim2SpecificationLOA3Animation.x3d')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnimSpecificationExampleChangeLog.txt')),

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
              name_ : SFString('created'),
              content_ : SFString('18 February 2021')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:20:09 GMT')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Don Brutzman')),

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
              name_ : SFString('TODO'),
              content_ : SFString('insert MetadataInteger nodes indicating LOA for each Joint and Segment')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Don Brutzman and Joe Williams')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit'))]),
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
                  title_ : SFString('HANIM 200x Default Joint Centers, LOA3'),
                  info_ : MFString([SFString(" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps ")]))]),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(4)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Close'),
              position_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Closer'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Front Face'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(1)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Right Side'),
              position_ : SFVec3f([SFDouble(2.6), SFDouble(0.8), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Right Side Close'),
              position_ : SFVec3f([SFDouble(1), SFDouble(0.8), SFDouble(0.5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Left Side Close'),
              position_ : SFVec3f([SFDouble(-1), SFDouble(0.8), SFDouble(0.5)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.2)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Left Side'),
              position_ : SFVec3f([SFDouble(-2.6), SFDouble(0.8), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(-1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            Viewpoint(
              description_ : SFString('Humanoid LOA 3 Top'),
              position_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
              orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.5708)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)])),

            HAnimHumanoid(
              DEF_ : SFString('hanim_humanoid'),
              name_ : SFString('humanoid'),
              loa_ : 3,
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('creationDate')),
                  value_ : 
                    MetadataFloat(
                      name_ : SFString('height'),
                      value_ : MFFloat([SFFloat(1.7504)])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageRestrictions'))),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  children_ : [
                    HAnimSegment(
                      DEF_ : SFString('hanim_sacrum'),
                      name_ : SFString('sacrum'),
                      children_ : [
                        TouchSensor(
                          description_ : SFString('HAnimJoint humanoid_root, HAnimSegment sacrum')),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                          child_ : 
                            Shape(
                              DEF_ : SFString('HAnimJointShape'),
                              appearance_ : 
                                Appearance(
                                  DEF_ : SFString('HAnimJointAppearance'),
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.5), SFDouble(0)]),
                                      transparency_ : 0.5)),
                              geometry_ : 
                                Sphere(
                                  radius_ : 0.006))),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSegmentLineColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0,0.9149,0.0016])])))),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0.824,0.0277]),SFVec3f([0.0028,1.0568,-0.0776])]))))]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimJoint sacroiliac, HAnimSegment pelvis')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0961,0.9124,-0.0001])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0961,0.9124,-0.0001])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      DEF_ : SFString('HAnimSiteLineColorRGBA'),
                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.1525,1.0628,0.0035])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.1689,0.8419,0.0352])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.1612,1.0537,0.0008])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.1677,0.8336,0.0303])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0887,1.0021,0.1112])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0925,0.9983,0.1052])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([-0.0716,1.019,-0.1138])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0774,1.019,-0.1151])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.9149,0.0016]),SFVec3f([0.0034,0.8266,0.0257])])))),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              name_ : SFString('r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_iliocristale_pt')),

                                Shape(
                                  DEF_ : SFString('HAnimSiteShape'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      DEF_ : SFString('DiamondIFS'),
                                      solid_ : false,
                                      creaseAngle_ : 0.5,
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.008,0]),SFVec3f([-0.008,0,0]),SFVec3f([0,0,0.008]),SFVec3f([0.008,0,0]),SFVec3f([0,0,-0.008]),SFVec3f([0,-0.008,0])]))))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              name_ : SFString('r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_trochanterion_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              name_ : SFString('l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_iliocristale_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              name_ : SFString('l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_trochanterion_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_asis_pt'),
                              name_ : SFString('r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_asis_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_asis_pt'),
                              name_ : SFString('l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_asis_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_r_psis_pt'),
                              name_ : SFString('r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite r_psis_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_l_psis_pt'),
                              name_ : SFString('l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite l_psis_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_crotch_pt'),
                              name_ : SFString('crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite crotch_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_hip'),
                          name_ : SFString('l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_thigh'),
                              name_ : SFString('l_thigh'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint l_hip, HAnimSegment l_thigh')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.104,0.4867,0.0308])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.0993,0.4881,-0.0309])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.1598,0.4967,0.0297])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0961,0.9124,-0.0001]),SFVec3f([0.0398,0.4946,0.0303])])))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  name_ : SFString('l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_knee_crease_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicondyle_pt'),
                                  name_ : SFString('l_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_femoral_lateral_epicn_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_l_femoral_medial_epicondyle_pt'),
                                  name_ : SFString('l_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite l_femoral_medial_epicn_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_knee'),
                              name_ : SFString('l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_calf'),
                                  name_ : SFString('l_calf'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint l_knee, HAnimSegment l_calf')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.104,0.4867,0.0308]),SFVec3f([0.1101,0.0656,-0.0736])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  name_ : SFString('l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_talus'),
                                      name_ : SFString('l_talus'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint l_talocrural, HAnimSegment l_talus')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1086,0.0001,-0.0368])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.1308,0.0597,-0.1032])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.089,0.0716,-0.0881])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.089,0.0575,-0.0943])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1101,0.0656,-0.0736]),SFVec3f([0.0974,0.0259,-0.1171])])))),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                          name_ : SFString('l_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_lateral_malleolus_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                          name_ : SFString('l_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_medial_malleolus_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          name_ : SFString('l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_sphyrion_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                          name_ : SFString('l_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_calcaneous_post_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                      name_ : SFString('l_tarsometatarsal_2'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_metatarsal_2'),
                                          name_ : SFString('l_metatarsal_2'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint l_tarsometatarsal_2, HAnimSegment l_metatarsal_2')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.1086,0.0001,-0.0368]),SFVec3f([0.1086,0.0001,0.0368])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                          name_ : SFString('l_metatarsophalangeal_2'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                              name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint l_metatarsophalangeal_2, HAnimSegment l_tarsal_proximal_phalanx_2')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1086,0.0001,0.0368]),SFVec3f([0.1086,0,0.0762])])))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1086,0.0001,0.0368]),SFVec3f([0.0816,0.0232,0.0106])])))),

                                                HAnimSite(
                                                  DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                  name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite l_metatarsal_pha1_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                              name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint l_tarsal_distal_interphalangeal_2, HAnimSegment l_tarsal_distal_phalanx_2')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1354,0.0016,0.1476])])))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1825,0.007,0.0928])])))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.1086,0,0.0762]),SFVec3f([0.1195,0.0079,0.1433])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_forefoot_tip_pt'),
                                                      name_ : SFString('l_forefoot_tip_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_forefoot_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                      name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_metatarsal_pha5_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt'),
                                                      name_ : SFString('l_tarsal_distal_phalanx_2_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite l_digit2_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])])])])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_r_hip'),
                          name_ : SFString('r_hip'),
                          center_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_r_thigh'),
                              name_ : SFString('r_thigh'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint r_hip, HAnimSegment r_thigh')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.104,0.4867,0.0308])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.0825,0.4932,-0.0326])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.1421,0.4992,0.031])])))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.0961,0.9124,-0.0001]),SFVec3f([-0.0221,0.5014,0.0289])])))),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  name_ : SFString('r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_knee_crease_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicondyle_pt'),
                                  name_ : SFString('r_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_femoral_lateral_epicn_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))]),

                                HAnimSite(
                                  DEF_ : SFString('hanim_r_femoral_medial_epicondyle_pt'),
                                  name_ : SFString('r_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimSite r_femoral_medial_epicn_pt')),

                                    Shape(
                                      USE_ : SFString('HAnimSiteShape'))])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_r_knee'),
                              name_ : SFString('r_knee'),
                              center_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_r_calf'),
                                  name_ : SFString('r_calf'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint r_knee, HAnimSegment r_calf')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.104,0.4867,0.0308]),SFVec3f([-0.1101,0.0656,-0.0736])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  name_ : SFString('r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_r_talus'),
                                      name_ : SFString('r_talus'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint r_talocrural, HAnimSegment r_talus')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.1086,0.0001,-0.0368])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.1006,0.0658,-0.1075])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0591,0.076,-0.0928])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0603,0.061,-0.1002])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1101,0.0656,-0.0736]),SFVec3f([-0.0692,0.0297,-0.1221])])))),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                          name_ : SFString('r_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_lateral_malleolus_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                          name_ : SFString('r_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_medial_malleolus_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          name_ : SFString('r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_sphyrion_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                          name_ : SFString('r_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_calcaneous_post_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                      name_ : SFString('r_tarsometatarsal_2'),
                                      center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_r_metatarsal_2'),
                                          name_ : SFString('r_metatarsal_2'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint r_tarsometatarsal_2, HAnimSegment r_metatarsal_2')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.1086,0.0001,-0.0368]),SFVec3f([-0.1086,0.0001,0.0368])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                          name_ : SFString('r_metatarsophalangeal_2'),
                                          center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                              name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint r_metatarsophalangeal_2, HAnimSegment r_tarsal_proximal_phalanx_2')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1086,0.0001,0.0368]),SFVec3f([-0.1086,0,0.0762])])))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1086,0.0001,0.0368]),SFVec3f([-0.0521,0.026,0.0127])])))),

                                                HAnimSite(
                                                  DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                                  name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite r_metatarsal_pha1_pt')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                              name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2'),
                                                  name_ : SFString('r_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint r_tarsal_distal_interphalangeal_2, HAnimSegment r_tarsal_distal_phalanx_2')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(-0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.1043,0.0227,0.145])])))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.1523,0.0166,0.0895])])))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([-0.1086,0,0.0762]),SFVec3f([-0.0883,0.0134,0.1383])])))),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_forefoot_tip_pt'),
                                                      name_ : SFString('r_forefoot_tip_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(0.0227), SFDouble(0.145)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_forefoot_tip')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                                      name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_metatarsal_pha5_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))]),

                                                    HAnimSite(
                                                      DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt'),
                                                      name_ : SFString('r_tarsal_distal_phalanx_2_pt'),
                                                      translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimSite r_digit2_pt')),

                                                        Shape(
                                                          USE_ : SFString('HAnimSiteShape'))])])])])])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('hanim_vl5'),
                      name_ : SFString('vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l5'),
                          name_ : SFString('l5'),
                          children_ : [
                            TouchSensor(
                              description_ : SFString('HAnimJoint vl5, HAnimSegment l5')),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0035,1.0925,-0.0787])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0,1.0915,-0.1091])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0.0028,1.0568,-0.0776]),SFVec3f([0.0069,1.0966,0.1017])])))),

                            HAnimSite(
                              DEF_ : SFString('hanim_waist_preferred_posterior_pt'),
                              name_ : SFString('waist_preferred_posterior_pt'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(1.0915), SFDouble(-0.1091)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite waist_preferred_post_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))]),

                            HAnimSite(
                              DEF_ : SFString('hanim_navel_pt'),
                              name_ : SFString('navel_pt'),
                              translation_ : SFVec3f([SFDouble(0.0069), SFDouble(1.0966), SFDouble(0.1017)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimSite navel_pt')),

                                Shape(
                                  USE_ : SFString('HAnimSiteShape'))])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_vl4'),
                          name_ : SFString('vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l4'),
                              name_ : SFString('l4'),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint vl4, HAnimSegment l4')),

                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))),

                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.0035,1.0925,-0.0787]),SFVec3f([0.0041,1.1276,-0.0796])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_vl3'),
                              name_ : SFString('vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l3'),
                                  name_ : SFString('l3'),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint vl3, HAnimSegment l3')),

                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.0041,1.1276,-0.0796]),SFVec3f([0.0045,1.1546,-0.08])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_vl2'),
                                  name_ : SFString('vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l2'),
                                      name_ : SFString('l2'),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint vl2, HAnimSegment l2')),

                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0048,1.1912,-0.0805])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([-0.0711,1.1941,0.1016])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0871,1.1925,0.0992])])))),

                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.0045,1.1546,-0.08]),SFVec3f([0.0049,1.1908,-0.1113])])))),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_r_rib10_pt'),
                                          name_ : SFString('r_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0711), SFDouble(1.1941), SFDouble(0.1016)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite r_rib10_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_l_rib10_pt'),
                                          name_ : SFString('l_rib10_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0871), SFDouble(1.1925), SFDouble(0.0992)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite l_rib10_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))]),

                                        HAnimSite(
                                          DEF_ : SFString('hanim_rib10_midspine_pt'),
                                          name_ : SFString('rib10_midspine_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0049), SFDouble(1.1908), SFDouble(-0.1113)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite rib10_midspine_pt')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape'))])]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_vl1'),
                                      name_ : SFString('vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l1'),
                                          name_ : SFString('l1'),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint vl1, HAnimSegment l1')),

                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.0048,1.1912,-0.0805]),SFVec3f([0.0051,1.2278,-0.0808])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_vt12'),
                                          name_ : SFString('vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_t12'),
                                              name_ : SFString('t12'),
                                              children_ : [
                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint vt12, HAnimSegment t12')),

                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  geometry_ : 
                                                    LineSet(
                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                      color_ : 
                                                        ColorRGBA(
                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.0051,1.2278,-0.0808]),SFVec3f([0.0053,1.2679,-0.081])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_vt11'),
                                              name_ : SFString('vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_t11'),
                                                  name_ : SFString('t11'),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimJoint vt11, HAnimSegment t11')),

                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      child_ : 
                                                        Shape(
                                                          USE_ : SFString('HAnimJointShape'))),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.0053,1.2679,-0.081]),SFVec3f([0.0056,1.2848,-0.0822])]))))]),

                                                HAnimJoint(
                                                  DEF_ : SFString('hanim_vt10'),
                                                  name_ : SFString('vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  children_ : [
                                                    HAnimSegment(
                                                      DEF_ : SFString('hanim_t10'),
                                                      name_ : SFString('t10'),
                                                      children_ : [
                                                        TouchSensor(
                                                          description_ : SFString('HAnimJoint vt10, HAnimSegment t10')),

                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                          child_ : 
                                                            Shape(
                                                              USE_ : SFString('HAnimJointShape'))),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0057,1.3126,-0.0838])])))),

                                                        Shape(
                                                          geometry_ : 
                                                            LineSet(
                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                              color_ : 
                                                                ColorRGBA(
                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                              coord_ : 
                                                                Coordinate(
                                                                  point_ : MFVec3f([SFVec3f([0.0056,1.2848,-0.0822]),SFVec3f([0.0085,1.2995,0.1147])])))),

                                                        HAnimSite(
                                                          DEF_ : SFString('hanim_substernale_pt'),
                                                          name_ : SFString('substernale_pt'),
                                                          translation_ : SFVec3f([SFDouble(0.0085), SFDouble(1.2995), SFDouble(0.1147)]),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimSite substernale_pt')),

                                                            Shape(
                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                    HAnimJoint(
                                                      DEF_ : SFString('hanim_vt9'),
                                                      name_ : SFString('vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      children_ : [
                                                        HAnimSegment(
                                                          DEF_ : SFString('hanim_t9'),
                                                          name_ : SFString('t9'),
                                                          children_ : [
                                                            TouchSensor(
                                                              description_ : SFString('HAnimJoint vt9, HAnimSegment t9')),

                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                              child_ : 
                                                                Shape(
                                                                  USE_ : SFString('HAnimJointShape'))),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0057,1.3382,-0.0845])])))),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([-0.0736,1.3385,0.1217])])))),

                                                            Shape(
                                                              geometry_ : 
                                                                LineSet(
                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                  color_ : 
                                                                    ColorRGBA(
                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      point_ : MFVec3f([SFVec3f([0.0057,1.3126,-0.0838]),SFVec3f([0.0918,1.3382,0.1192])])))),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_r_thelion_pt'),
                                                              name_ : SFString('r_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(-0.0736), SFDouble(1.3385), SFDouble(0.1217)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite r_thelion_pt')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                            HAnimSite(
                                                              DEF_ : SFString('hanim_l_thelion_pt'),
                                                              name_ : SFString('l_thelion_pt'),
                                                              translation_ : SFVec3f([SFDouble(0.0918), SFDouble(1.3382), SFDouble(0.1192)]),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimSite l_thelion_pt')),

                                                                Shape(
                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                        HAnimJoint(
                                                          DEF_ : SFString('hanim_vt8'),
                                                          name_ : SFString('vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          children_ : [
                                                            HAnimSegment(
                                                              DEF_ : SFString('hanim_t8'),
                                                              name_ : SFString('t8'),
                                                              children_ : [
                                                                TouchSensor(
                                                                  description_ : SFString('HAnimJoint vt8, HAnimSegment t8')),

                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                  child_ : 
                                                                    Shape(
                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                Shape(
                                                                  geometry_ : 
                                                                    LineSet(
                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                      color_ : 
                                                                        ColorRGBA(
                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          point_ : MFVec3f([SFVec3f([0.0057,1.3382,-0.0845]),SFVec3f([0.0058,1.3625,-0.0833])]))))]),

                                                            HAnimJoint(
                                                              DEF_ : SFString('hanim_vt7'),
                                                              name_ : SFString('vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              children_ : [
                                                                HAnimSegment(
                                                                  DEF_ : SFString('hanim_t7'),
                                                                  name_ : SFString('t7'),
                                                                  children_ : [
                                                                    TouchSensor(
                                                                      description_ : SFString('HAnimJoint vt7, HAnimSegment t7')),

                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                      child_ : 
                                                                        Shape(
                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                    Shape(
                                                                      geometry_ : 
                                                                        LineSet(
                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                          color_ : 
                                                                            ColorRGBA(
                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              point_ : MFVec3f([SFVec3f([0.0058,1.3625,-0.0833]),SFVec3f([0.0059,1.3866,-0.08])]))))]),

                                                                HAnimJoint(
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  name_ : SFString('vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  children_ : [
                                                                    HAnimSegment(
                                                                      DEF_ : SFString('hanim_t6'),
                                                                      name_ : SFString('t6'),
                                                                      children_ : [
                                                                        TouchSensor(
                                                                          description_ : SFString('HAnimJoint vt6, HAnimSegment t6')),

                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                          child_ : 
                                                                            Shape(
                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                        Shape(
                                                                          geometry_ : 
                                                                            LineSet(
                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                              color_ : 
                                                                                ColorRGBA(
                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  point_ : MFVec3f([SFVec3f([0.0059,1.3866,-0.08]),SFVec3f([0.006,1.4102,-0.0745])]))))]),

                                                                    HAnimJoint(
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      name_ : SFString('vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      children_ : [
                                                                        HAnimSegment(
                                                                          DEF_ : SFString('hanim_t5'),
                                                                          name_ : SFString('t5'),
                                                                          children_ : [
                                                                            TouchSensor(
                                                                              description_ : SFString('HAnimJoint vt5, HAnimSegment t5')),

                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                              child_ : 
                                                                                Shape(
                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                            Shape(
                                                                              geometry_ : 
                                                                                LineSet(
                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                  color_ : 
                                                                                    ColorRGBA(
                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      point_ : MFVec3f([SFVec3f([0.006,1.4102,-0.0745]),SFVec3f([0.0061,1.432,-0.0675])]))))]),

                                                                        HAnimJoint(
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          name_ : SFString('vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          children_ : [
                                                                            HAnimSegment(
                                                                              DEF_ : SFString('hanim_t4'),
                                                                              name_ : SFString('t4'),
                                                                              children_ : [
                                                                                TouchSensor(
                                                                                  description_ : SFString('HAnimJoint vt4, HAnimSegment t4')),

                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                  child_ : 
                                                                                    Shape(
                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    LineSet(
                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                      color_ : 
                                                                                        ColorRGBA(
                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          point_ : MFVec3f([SFVec3f([0.0061,1.432,-0.0675]),SFVec3f([0.0062,1.4583,-0.057])]))))]),

                                                                            HAnimJoint(
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              name_ : SFString('vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              children_ : [
                                                                                HAnimSegment(
                                                                                  DEF_ : SFString('hanim_t3'),
                                                                                  name_ : SFString('t3'),
                                                                                  children_ : [
                                                                                    TouchSensor(
                                                                                      description_ : SFString('HAnimJoint vt3, HAnimSegment t3')),

                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                      child_ : 
                                                                                        Shape(
                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        LineSet(
                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                          color_ : 
                                                                                            ColorRGBA(
                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              point_ : MFVec3f([SFVec3f([0.0062,1.4583,-0.057]),SFVec3f([0.0063,1.4761,-0.0484])]))))]),

                                                                                HAnimJoint(
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  name_ : SFString('vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  children_ : [
                                                                                    HAnimSegment(
                                                                                      DEF_ : SFString('hanim_t2'),
                                                                                      name_ : SFString('t2'),
                                                                                      children_ : [
                                                                                        TouchSensor(
                                                                                          description_ : SFString('HAnimJoint vt2, HAnimSegment t2')),

                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                          child_ : 
                                                                                            Shape(
                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            LineSet(
                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                              color_ : 
                                                                                                ColorRGBA(
                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  point_ : MFVec3f([SFVec3f([0.0063,1.4761,-0.0484]),SFVec3f([0.0065,1.4951,-0.0387])]))))]),

                                                                                    HAnimJoint(
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      name_ : SFString('vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      children_ : [
                                                                                        HAnimSegment(
                                                                                          DEF_ : SFString('hanim_t1'),
                                                                                          name_ : SFString('t1'),
                                                                                          children_ : [
                                                                                            TouchSensor(
                                                                                              description_ : SFString('HAnimJoint vt1, HAnimSegment t1')),

                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                              child_ : 
                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0066,1.5132,-0.0301])])))),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.082,1.4488,-0.0353])])))),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([-0.082,1.4488,-0.0353])])))),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0084,1.4714,0.0551])])))),

                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                LineSet(
                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                  color_ : 
                                                                                                    ColorRGBA(
                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      point_ : MFVec3f([SFVec3f([0.0065,1.4951,-0.0387]),SFVec3f([0.0064,1.52,-0.0815])])))),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_suprasternale_pt'),
                                                                                              name_ : SFString('suprasternale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0084), SFDouble(1.4714), SFDouble(0.0551)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite suprasternale_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                            HAnimSite(
                                                                                              DEF_ : SFString('hanim_cervicale_pt'),
                                                                                              name_ : SFString('cervicale_pt'),
                                                                                              translation_ : SFVec3f([SFDouble(0.0064), SFDouble(1.52), SFDouble(-0.0815)]),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimSite cervicale_pt')),

                                                                                                Shape(
                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          name_ : SFString('vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_c7'),
                                                                                              name_ : SFString('c7'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint vc7, HAnimSegment c7')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0066,1.5357,-0.0143])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([-0.0419,1.5149,-0.022])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.5132,-0.0301]),SFVec3f([0.0646,1.5141,-0.038])])))),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_neck_base_pt'),
                                                                                                  name_ : SFString('r_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0419), SFDouble(1.5149), SFDouble(-0.022)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_neck_base_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_neck_base_pt'),
                                                                                                  name_ : SFString('l_neck_base_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0646), SFDouble(1.5141), SFDouble(-0.038)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_neck_base_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              name_ : SFString('vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_c6'),
                                                                                                  name_ : SFString('c6'),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint vc6, HAnimSegment c6')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5357,-0.0143]),SFVec3f([0.0066,1.552,-0.0082])]))))]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  name_ : SFString('vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_c5'),
                                                                                                      name_ : SFString('c5'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint vc5, HAnimSegment c5')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.552,-0.0082]),SFVec3f([0.0066,1.5662,-0.0084])]))))]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      name_ : SFString('vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_c4'),
                                                                                                          name_ : SFString('c4'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint vc4, HAnimSegment c4')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.0066,1.5662,-0.0084]),SFVec3f([0.0066,1.58,-0.0103])]))))]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          name_ : SFString('vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_c3'),
                                                                                                              name_ : SFString('c3'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint vc3, HAnimSegment c3')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.0066,1.58,-0.0103]),SFVec3f([0.0066,1.5928,-0.0103])]))))]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              name_ : SFString('vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_c2'),
                                                                                                                  name_ : SFString('c2'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint vc2, HAnimSegment c2')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.0066,1.5928,-0.0103]),SFVec3f([0.0066,1.6144,-0.0034])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_c1'),
                                                                                                                      name_ : SFString('c1'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint vc1, HAnimSegment c1')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.0066,1.6144,-0.0034]),SFVec3f([0.0044,1.6209,0.0236])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_skull'),
                                                                                                                          name_ : SFString('skull'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint skullbase, HAnimSegment skull')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.6332,0.0502])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.6332,0.0502])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0336,1.635,0.0506])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.6332,0.0502])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.6332,0.0502])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0336,1.635,0.0506])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0,1.63,0.015])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.005,1.7504,0.0055])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0058,1.6316,0.0852])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0237,1.6171,0.0752])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0341,1.6171,0.0752])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0061,1.541,0.0805])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.0646,1.6347,0.0302])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([-0.052,1.5529,0.0347])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0739,1.6348,0.0282])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0631,1.553,0.033])])))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.0044,1.6209,0.0236]),SFVec3f([0.0039,1.5972,-0.0796])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_skull_vertex_pt'),
                                                                                                                              name_ : SFString('skull_vertex_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite skull_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                              name_ : SFString('sellion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite sellion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                              name_ : SFString('r_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_infraorbitale_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                              name_ : SFString('l_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_infraorbitale_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                              name_ : SFString('supramenton_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite supramenton_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                              name_ : SFString('r_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_tragion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                              name_ : SFString('r_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_gonion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                              name_ : SFString('l_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_tragion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                              name_ : SFString('l_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_gonion_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                              name_ : SFString('nuchale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite nuchale_pt')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyeball'),
                                                                                                                              name_ : SFString('l_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyeball_joint, HAnimSegment l_eyeball')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          DEF_ : SFString('HAnimSiteViewpointLineColorRGBA'),
                                                                                                                                          color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.0336,1.6332,0.0502]),SFVec3f([0.034,1.64,0.05])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_eyeball_site_view'),
                                                                                                                                  name_ : SFString('l_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_eyeball_site_view')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_l_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('l_eyeball_site_viewpoint looking forward'),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)])),

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
                                                                                                                                              appearance_ : 
                                                                                                                                                Appearance(
                                                                                                                                                  material_ : 
                                                                                                                                                    Material(
                                                                                                                                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]),
                                                                                                                                                      transparency_ : 0.3)),
                                                                                                                                              geometry_ : 
                                                                                                                                                IndexedFaceSet(
                                                                                                                                                  DEF_ : SFString('SiteViewpointDiamondIFS'),
                                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                                  coord_ : 
                                                                                                                                                    Coordinate(
                                                                                                                                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))))])])])])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyelid'),
                                                                                                                              name_ : SFString('l_eyelid'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyelid_joint, HAnimSegment l_eyelid')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_eyebrow'),
                                                                                                                              name_ : SFString('l_eyebrow'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_eyebrow_joint, HAnimSegment l_eyebrow')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyeball'),
                                                                                                                              name_ : SFString('r_eyeball'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyeball_joint, HAnimSegment r_eyeball')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.0336,1.6332,0.0502]),SFVec3f([-0.034,1.64,0.05])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_eyeball_site_view'),
                                                                                                                                  name_ : SFString('r_eyeball_site_view'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.034), SFDouble(1.64), SFDouble(0.05)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_eyeball_site_view')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                                    Viewpoint(
                                                                                                                                      DEF_ : SFString('hanim_r_eyeball_site_viewpoint'),
                                                                                                                                      description_ : SFString('r_eyeball_site_viewpoint looking forward'),
                                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)])),

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
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyelid'),
                                                                                                                              name_ : SFString('r_eyelid'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyelid_joint, HAnimSegment r_eyelid')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.6332), SFDouble(0.0502)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_eyebrow'),
                                                                                                                              name_ : SFString('r_eyebrow'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_eyebrow_joint, HAnimSegment r_eyebrow')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.0336), SFDouble(1.635), SFDouble(0.0506)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape')))])]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_jaw'),
                                                                                                                              name_ : SFString('jaw'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint temporomandibular, HAnimSegment jaw')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.63), SFDouble(0.015)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.63,0.015]),SFVec3f([0.045,1.63,0])])))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0,1.63,0.015]),SFVec3f([-0.045,1.63,0])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_l_site_pt'),
                                                                                                                                  name_ : SFString('temporomandibular_l_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.045), SFDouble(1.63), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite temporomandibular_l_site_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_temporomandibular_r_site_pt'),
                                                                                                                                  name_ : SFString('temporomandibular_r_site_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.045), SFDouble(1.63), SFDouble(0)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite temporomandibular_r_site_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_l_clavicle'),
                                                                                              name_ : SFString('l_clavicle'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint l_sternoclavicular, HAnimSegment l_clavicle')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0962,1.4269,-0.0424])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.0271,1.4943,0.0394])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.2032,1.476,-0.049])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.1777,1.4065,-0.0075])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([0.082,1.4488,-0.0353]),SFVec3f([0.1706,1.4072,-0.0875])])))),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_clavicle_pt'),
                                                                                                  name_ : SFString('l_clavicle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.0271), SFDouble(1.4943), SFDouble(0.0394)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_clavicale_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_acromion_pt'),
                                                                                                  name_ : SFString('l_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.2032), SFDouble(1.476), SFDouble(-0.049)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_acromion_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_axilla_proximal_pt'),
                                                                                                  name_ : SFString('l_axilla_proximal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1777), SFDouble(1.4065), SFDouble(-0.0075)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_axilla_ant_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_l_axilla_distal_pt'),
                                                                                                  name_ : SFString('l_axilla_distal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.1706), SFDouble(1.4072), SFDouble(-0.0875)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite l_axilla_post_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_l_scapula'),
                                                                                                  name_ : SFString('l_scapula'),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint l_acromioclavicular, HAnimSegment l_scapula')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([0.0962,1.4269,-0.0424]),SFVec3f([0.2029,1.4376,-0.0387])]))))]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_l_upperarm'),
                                                                                                      name_ : SFString('l_upperarm'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint l_shoulder, HAnimSegment l_upperarm')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.2014,1.1357,-0.0682])])))),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([0.2029,1.4376,-0.0387]),SFVec3f([0.228,1.1482,-0.11])])))),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_l_humeral_lateral_epicondyle_pt'),
                                                                                                          name_ : SFString('l_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite l_humeral_lateral_epicn_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_l_forearm'),
                                                                                                          name_ : SFString('l_forearm'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint l_elbow, HAnimSegment l_forearm')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1984,0.8663,-0.0583])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1901,0.8645,-0.0415])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1962,1.1375,-0.1123])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.1735,1.1272,-0.1113])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([0.2014,1.1357,-0.0682]),SFVec3f([0.2182,1.1212,-0.1167])])))),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                              name_ : SFString('l_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_radial_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                              name_ : SFString('l_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_olecranon_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_humeral_medial_epicondyle_pt'),
                                                                                                              name_ : SFString('l_humeral_medial_epicondyle_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_humeral_medial_epicn_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                              name_ : SFString('l_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite l_radiale_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_l_carpal'),
                                                                                                              name_ : SFString('l_carpal'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint l_radiocarpal, HAnimSegment l_carpal')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1924,0.8472,-0.0534])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1983,0.8024,-0.028])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1987,0.8029,-0.053])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1956,0.8019,-0.0794])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1925,0.8066,-0.1036])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.2009,0.8139,-0.0237])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.2142,0.8529,-0.0648])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.1929,0.786,-0.1122])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([0.1984,0.8663,-0.0583]),SFVec3f([0.3,0.75,0.45])])))),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_pha2_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                                  name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_ulnar_styloid_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                                  name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_metacarpal_pha5_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_l_hand_front_view'),
                                                                                                                  name_ : SFString('l_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite l_hand_front_view')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_l_hand_front_viewpoint'),
                                                                                                                      description_ : SFString('left hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)])),

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
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                              name_ : SFString('l_carpometacarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                                  name_ : SFString('l_metacarpal_1'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_thumb1, HAnimSegment l_metacarpal_1')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1924,0.8472,-0.0534]),SFVec3f([0.1951,0.8226,0.0246])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                  name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_thumb2, HAnimSegment l_carpal_proximal_phalanx_1')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1951,0.8226,0.0246]),SFVec3f([0.1955,0.8159,0.0464])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                      name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_phalanx_1'),
                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_thumb3, HAnimSegment l_carpal_distal_phalanx_1')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1955,0.8159,0.0464]),SFVec3f([0.1982,0.8061,0.0759])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_pt'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_1_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite l_thumb_distal_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                              name_ : SFString('l_carpometacarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                                  name_ : SFString('l_metacarpal_2'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_index0, HAnimSegment l_metacarpal_2')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1983,0.8024,-0.028]),SFVec3f([0.1983,0.7815,-0.028])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                  name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_index1, HAnimSegment l_carpal_proximal_phalanx_2')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1983,0.7815,-0.028]),SFVec3f([0.2017,0.7363,-0.0248])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_index2, HAnimSegment l_carpal_middle_phalanx_2')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2017,0.7363,-0.0248]),SFVec3f([0.2028,0.7139,-0.0236])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_2'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_index3, HAnimSegment l_carpal_distal_phalanx_2')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2089,0.6858,-0.0245])])))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2028,0.7139,-0.0236]),SFVec3f([0.2056,0.6743,-0.0482])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_pt'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_2_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_index_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                                                  name_ : SFString('l_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_dactylion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                              name_ : SFString('l_carpometacarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_3'),
                                                                                                                  name_ : SFString('l_metacarpal_3'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_middle0, HAnimSegment l_metacarpal_3')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1987,0.8029,-0.053]),SFVec3f([0.1987,0.7818,-0.053])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                  name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_3'),
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_3'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_middle1, HAnimSegment l_carpal_proximal_phalanx_3')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1987,0.7818,-0.053]),SFVec3f([0.2013,0.7273,-0.0503])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_3'),
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_middle2, HAnimSegment l_carpal_middle_phalanx_3')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.2013,0.7273,-0.0503]),SFVec3f([0.2026,0.7011,-0.0494])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_3'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_middle3, HAnimSegment l_carpal_distal_phalanx_3')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.2026,0.7011,-0.0494]),SFVec3f([0.208,0.6731,-0.0491])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_3_pt'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_3_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_middle_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                              name_ : SFString('l_carpometacarpal_4'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_4'),
                                                                                                                  name_ : SFString('l_metacarpal_4'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_ring0, HAnimSegment l_metacarpal_4')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1956,0.8019,-0.0794]),SFVec3f([0.1956,0.7815,-0.0794])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                  name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_4'),
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_4'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_ring1, HAnimSegment l_carpal_proximal_phalanx_4')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1956,0.7815,-0.0794]),SFVec3f([0.1973,0.7287,-0.0777])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_4'),
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_ring2, HAnimSegment l_carpal_middle_phalanx_4')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1973,0.7287,-0.0777]),SFVec3f([0.1983,0.7045,-0.0767])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_4'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_ring3, HAnimSegment l_carpal_distal_phalanx_4')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1983,0.7045,-0.0767]),SFVec3f([0.2035,0.675,-0.0756])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_4_pt'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_4_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2035), SFDouble(0.675), SFDouble(-0.0756)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_ring_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                              name_ : SFString('l_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpal_5'),
                                                                                                                  name_ : SFString('l_metacarpal_5'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint l_pinky0, HAnimSegment l_metacarpal_5')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([0.1925,0.8066,-0.1036]),SFVec3f([0.1925,0.7866,-0.1036])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                  name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_phalanx_5'),
                                                                                                                      name_ : SFString('l_carpal_proximal_phalanx_5'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint l_pinky1, HAnimSegment l_carpal_proximal_phalanx_5')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([0.1925,0.7866,-0.1036]),SFVec3f([0.1938,0.7452,-0.1024])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                      name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_middle_phalanx_5'),
                                                                                                                          name_ : SFString('l_carpal_middle_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint l_pinky2, HAnimSegment l_carpal_middle_phalanx_5')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([0.1938,0.7452,-0.1024]),SFVec3f([0.1948,0.7277,-0.1017])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                          name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_phalanx_5'),
                                                                                                                              name_ : SFString('l_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint l_pinky3, HAnimSegment l_carpal_distal_phalanx_5')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([0.1948,0.7277,-0.1017]),SFVec3f([0.2014,0.7009,-0.1012])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_5_pt'),
                                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_5_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(0.2014), SFDouble(0.7009), SFDouble(-0.1012)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite l_pinky_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              DEF_ : SFString('hanim_r_clavicle'),
                                                                                              name_ : SFString('r_clavicle'),
                                                                                              children_ : [
                                                                                                TouchSensor(
                                                                                                  description_ : SFString('HAnimJoint r_sternoclavicular, HAnimSegment r_clavicle')),

                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                                  child_ : 
                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.0962,1.4269,-0.0424])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.0115,1.4943,0.04])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1905,1.4791,-0.0431])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1626,1.4072,-0.0031])])))),

                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    LineSet(
                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                      color_ : 
                                                                                                        ColorRGBA(
                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          point_ : MFVec3f([SFVec3f([-0.082,1.4488,-0.0353]),SFVec3f([-0.1603,1.4098,-0.0826])])))),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_clavicle_pt'),
                                                                                                  name_ : SFString('r_clavicle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.0115), SFDouble(1.4943), SFDouble(0.04)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_clavicale_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_acromion_pt'),
                                                                                                  name_ : SFString('r_acromion_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1905), SFDouble(1.4791), SFDouble(-0.0431)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_acromion_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_axilla_proximal_pt'),
                                                                                                  name_ : SFString('r_axilla_proximal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1626), SFDouble(1.4072), SFDouble(-0.0031)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_axilla_ant_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                HAnimSite(
                                                                                                  DEF_ : SFString('hanim_r_axilla_distal_pt'),
                                                                                                  name_ : SFString('r_axilla_distal_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1603), SFDouble(1.4098), SFDouble(-0.0826)]),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimSite r_axilla_post_pt')),

                                                                                                    Shape(
                                                                                                      USE_ : SFString('HAnimSiteShape'))])]),

                                                                                            HAnimJoint(
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  DEF_ : SFString('hanim_r_scapula'),
                                                                                                  name_ : SFString('r_scapula'),
                                                                                                  children_ : [
                                                                                                    TouchSensor(
                                                                                                      description_ : SFString('HAnimJoint r_acromioclavicular, HAnimSegment r_scapula')),

                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                                      child_ : 
                                                                                                        Shape(
                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        LineSet(
                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                          color_ : 
                                                                                                            ColorRGBA(
                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              point_ : MFVec3f([SFVec3f([-0.0962,1.4269,-0.0424]),SFVec3f([-0.2029,1.4376,-0.0387])]))))]),

                                                                                                HAnimJoint(
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      DEF_ : SFString('hanim_r_upperarm'),
                                                                                                      name_ : SFString('r_upperarm'),
                                                                                                      children_ : [
                                                                                                        TouchSensor(
                                                                                                          description_ : SFString('HAnimJoint r_shoulder, HAnimSegment r_upperarm')),

                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                          child_ : 
                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2029,1.4376,-0.0387]),SFVec3f([-0.2014,1.1357,-0.0682])])))),

                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            LineSet(
                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                              color_ : 
                                                                                                                ColorRGBA(
                                                                                                                  USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  point_ : MFVec3f([SFVec3f([-0.2029,1.4376,-0.0387]),SFVec3f([-0.2224,1.1517,-0.1033])])))),

                                                                                                        HAnimSite(
                                                                                                          DEF_ : SFString('hanim_r_humeral_lateral_epicondyle_pt'),
                                                                                                          name_ : SFString('r_humeral_lateral_epicondyle_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimSite r_humeral_lateral_epicn_pt')),

                                                                                                            Shape(
                                                                                                              USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                    HAnimJoint(
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          DEF_ : SFString('hanim_r_forearm'),
                                                                                                          name_ : SFString('r_forearm'),
                                                                                                          children_ : [
                                                                                                            TouchSensor(
                                                                                                              description_ : SFString('HAnimJoint r_elbow, HAnimSegment r_forearm')),

                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(-0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                              child_ : 
                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1984,0.8663,-0.0583])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1884,0.8676,-0.036])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.1907,1.1405,-0.1065])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.168,1.1298,-0.1062])])))),

                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                LineSet(
                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                  color_ : 
                                                                                                                    ColorRGBA(
                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2014,1.1357,-0.0682]),SFVec3f([-0.213,1.1305,-0.1091])])))),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                              name_ : SFString('r_radial_styloid_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_radial_styloid_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                              name_ : SFString('r_olecranon_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_olecranon_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_humeral_medial_epicondyle_pt'),
                                                                                                              name_ : SFString('r_humeral_medial_epicondyle_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_humeral_medial_epicn_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))]),

                                                                                                            HAnimSite(
                                                                                                              DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                              name_ : SFString('r_radiale_pt'),
                                                                                                              translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimSite r_radiale_pt')),

                                                                                                                Shape(
                                                                                                                  USE_ : SFString('HAnimSiteShape'))])]),

                                                                                                        HAnimJoint(
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              DEF_ : SFString('hanim_r_carpal'),
                                                                                                              name_ : SFString('r_carpal'),
                                                                                                              children_ : [
                                                                                                                TouchSensor(
                                                                                                                  description_ : SFString('HAnimJoint r_radiocarpal, HAnimSegment r_carpal')),

                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                                  child_ : 
                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1924,0.8472,-0.0534])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1983,0.8024,-0.028])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1987,0.8029,-0.053])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1956,0.8019,-0.0794])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1925,0.8066,-0.1036])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1977,0.8169,-0.0177])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.2117,0.8562,-0.0584])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.1929,0.789,-0.1064])])))),

                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    LineSet(
                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                      color_ : 
                                                                                                                        ColorRGBA(
                                                                                                                          USE_ : SFString('HAnimSiteViewpointLineColorRGBA')),
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1984,0.8663,-0.0583]),SFVec3f([-0.3,0.75,0.45])])))),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_pha2_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                                  name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_ulnar_styloid_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                                  name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_metacarpal_pha5_pt')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                HAnimSite(
                                                                                                                  DEF_ : SFString('hanim_r_hand_front_view'),
                                                                                                                  name_ : SFString('r_hand_front_view'),
                                                                                                                  translation_ : SFVec3f([SFDouble(-0.3), SFDouble(0.75), SFDouble(0.45)]),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimSite r_hand_front_view')),

                                                                                                                    Shape(
                                                                                                                      USE_ : SFString('HAnimSiteShape')),

                                                                                                                    Viewpoint(
                                                                                                                      DEF_ : SFString('hanim_r_hand_front_viewpoint'),
                                                                                                                      description_ : SFString('right hand front'),
                                                                                                                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.7), SFDouble(0)])),

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
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                              name_ : SFString('r_carpometacarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_1'),
                                                                                                                  name_ : SFString('r_metacarpal_1'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_thumb1, HAnimSegment r_metacarpal_1')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1924,0.8472,-0.0534]),SFVec3f([-0.1951,0.8226,0.0246])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                  name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_1'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_thumb2, HAnimSegment r_carpal_proximal_phalanx_1')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1951,0.8226,0.0246]),SFVec3f([-0.1955,0.8159,0.0464])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                      name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_phalanx_1'),
                                                                                                                          name_ : SFString('r_carpal_distal_phalanx_1'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_thumb3, HAnimSegment r_carpal_distal_phalanx_1')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1955,0.8159,0.0464]),SFVec3f([-0.1869,0.809,0.082])])))),

                                                                                                                            HAnimSite(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_1_pt'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_1_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1869), SFDouble(0.809), SFDouble(0.082)]),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimSite r_thumb_distal_tip')),

                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimSiteShape'))])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                              name_ : SFString('r_carpometacarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_2'),
                                                                                                                  name_ : SFString('r_metacarpal_2'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_index0, HAnimSegment r_metacarpal_2')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1983,0.8024,-0.028]),SFVec3f([-0.1983,0.7815,-0.028])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                  name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_2'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_index1, HAnimSegment r_carpal_proximal_phalanx_2')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1983,0.7815,-0.028]),SFVec3f([-0.2017,0.7363,-0.0248])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_2'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_index2, HAnimSegment r_carpal_middle_phalanx_2')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2017,0.7363,-0.0248]),SFVec3f([-0.2028,0.7139,-0.0236])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_2'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_2'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_index3, HAnimSegment r_carpal_distal_phalanx_2')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2028,0.7139,-0.0236]),SFVec3f([-0.198,0.6883,-0.018])])))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2028,0.7139,-0.0236]),SFVec3f([-0.1941,0.6772,-0.0423])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_2_pt'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_2_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.198), SFDouble(0.6883), SFDouble(-0.018)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_index_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))]),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                                                  name_ : SFString('r_dactylion_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_dactylion_pt')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                              name_ : SFString('r_carpometacarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_3'),
                                                                                                                  name_ : SFString('r_metacarpal_3'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_middle0, HAnimSegment r_metacarpal_3')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1987,0.8029,-0.053]),SFVec3f([-0.1987,0.7818,-0.053])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                  name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_3'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_middle1, HAnimSegment r_carpal_proximal_phalanx_3')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1987,0.7818,-0.053]),SFVec3f([-0.2013,0.7273,-0.0503])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_3'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_middle2, HAnimSegment r_carpal_middle_phalanx_3')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.2013,0.7273,-0.0503]),SFVec3f([-0.2026,0.7011,-0.0494])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_3'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_3'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_middle3, HAnimSegment r_carpal_distal_phalanx_3')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.2026,0.7011,-0.0494]),SFVec3f([-0.1969,0.6758,-0.0427])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_3_pt'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_3_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_middle_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                              name_ : SFString('r_carpometacarpal_4'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_4'),
                                                                                                                  name_ : SFString('r_metacarpal_4'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_ring0, HAnimSegment r_metacarpal_4')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1956,0.8019,-0.0794]),SFVec3f([-0.1956,0.7815,-0.0794])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                  name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_4'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_ring1, HAnimSegment r_carpal_proximal_phalanx_4')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1956,0.7815,-0.0794]),SFVec3f([-0.1973,0.7287,-0.0777])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_4'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_ring2, HAnimSegment r_carpal_middle_phalanx_4')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1973,0.7287,-0.0777]),SFVec3f([-0.1983,0.7045,-0.0767])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_4'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_4'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_ring3, HAnimSegment r_carpal_distal_phalanx_4')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1983,0.7045,-0.0767]),SFVec3f([-0.1934,0.6778,-0.0693])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_4_pt'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_4_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1934), SFDouble(0.6778), SFDouble(-0.0693)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_ring_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])]),

                                                                                                            HAnimJoint(
                                                                                                              DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                              name_ : SFString('r_carpometacarpal_5'),
                                                                                                              center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpal_5'),
                                                                                                                  name_ : SFString('r_metacarpal_5'),
                                                                                                                  children_ : [
                                                                                                                    TouchSensor(
                                                                                                                      description_ : SFString('HAnimJoint r_pinky0, HAnimSegment r_metacarpal_5')),

                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                      child_ : 
                                                                                                                        Shape(
                                                                                                                          USE_ : SFString('HAnimJointShape'))),

                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        LineSet(
                                                                                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                          color_ : 
                                                                                                                            ColorRGBA(
                                                                                                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              point_ : MFVec3f([SFVec3f([-0.1925,0.8066,-0.1036]),SFVec3f([-0.1925,0.7866,-0.1036])]))))]),

                                                                                                                HAnimJoint(
                                                                                                                  DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                  name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5'),
                                                                                                                      name_ : SFString('r_carpal_proximal_phalanx_5'),
                                                                                                                      children_ : [
                                                                                                                        TouchSensor(
                                                                                                                          description_ : SFString('HAnimJoint r_pinky1, HAnimSegment r_carpal_proximal_phalanx_5')),

                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(-0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                          child_ : 
                                                                                                                            Shape(
                                                                                                                              USE_ : SFString('HAnimJointShape'))),

                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            LineSet(
                                                                                                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                              color_ : 
                                                                                                                                ColorRGBA(
                                                                                                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  point_ : MFVec3f([SFVec3f([-0.1925,0.7866,-0.1036]),SFVec3f([-0.1938,0.7452,-0.1024])]))))]),

                                                                                                                    HAnimJoint(
                                                                                                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                      name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimSegment(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_5'),
                                                                                                                          name_ : SFString('r_carpal_middle_phalanx_5'),
                                                                                                                          children_ : [
                                                                                                                            TouchSensor(
                                                                                                                              description_ : SFString('HAnimJoint r_pinky2, HAnimSegment r_carpal_middle_phalanx_5')),

                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                              child_ : 
                                                                                                                                Shape(
                                                                                                                                  USE_ : SFString('HAnimJointShape'))),

                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                LineSet(
                                                                                                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                  color_ : 
                                                                                                                                    ColorRGBA(
                                                                                                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      point_ : MFVec3f([SFVec3f([-0.1938,0.7452,-0.1024]),SFVec3f([-0.1948,0.7277,-0.1017])]))))]),

                                                                                                                        HAnimJoint(
                                                                                                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                          name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimSegment(
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_5'),
                                                                                                                              name_ : SFString('r_carpal_distal_phalanx_5'),
                                                                                                                              children_ : [
                                                                                                                                TouchSensor(
                                                                                                                                  description_ : SFString('HAnimJoint r_pinky3, HAnimSegment r_carpal_distal_phalanx_5')),

                                                                                                                                Transform(
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                                  child_ : 
                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimJointShape'))),

                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    LineSet(
                                                                                                                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                                                                                                                      color_ : 
                                                                                                                                        ColorRGBA(
                                                                                                                                          USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          point_ : MFVec3f([SFVec3f([-0.1948,0.7277,-0.1017]),SFVec3f([-0.1938,0.7035,-0.0949])])))),

                                                                                                                                HAnimSite(
                                                                                                                                  DEF_ : SFString('hanim_r_carpal_distal_phalanx_5_pt'),
                                                                                                                                  name_ : SFString('r_carpal_distal_phalanx_5_pt'),
                                                                                                                                  translation_ : SFVec3f([SFDouble(-0.1938), SFDouble(0.7035), SFDouble(-0.0949)]),
                                                                                                                                  children_ : [
                                                                                                                                    TouchSensor(
                                                                                                                                      description_ : SFString('HAnimSite r_pinky_distal_tip')),

                                                                                                                                    Shape(
                                                                                                                                      USE_ : SFString('HAnimSiteShape'))])])])])])])])])])])])])])])])])])])])])])])])])])])])])]),

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
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

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
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_2')),
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
                  USE_ : SFString('hanim_l_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_middle_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_carpal_proximal_phalanx_5')),

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
                  USE_ : SFString('hanim_l_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metacarpal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_scapula')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_thigh')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_upperarm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_upperarm')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_crotch_pt'))],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_skull_vertex_pt')),
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
                  USE_ : SFString('hanim_waist_preferred_posterior_pt')),
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
                  USE_ : SFString('hanim_l_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_distal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_axilla_proximal_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_3_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_3_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_4_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_4_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_carpal_distal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_clavicle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_clavicle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_dactylion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_femoral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_femoral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_forefoot_tip_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_forefoot_tip_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_lateral_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_humeral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_humeral_medial_epicondyle_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_iliocristale_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_iliocristale_pt')),
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
                  USE_ : SFString('hanim_l_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metacarpal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_1_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_metatarsal_phalanx_5_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_metatarsal_phalanx_5_pt')),
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
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_thelion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_thelion_pt')),
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
                  USE_ : SFString('hanim_r_ulnar_styloid_pt')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_l_inclined_view'),
                  name_ : SFString('l_inclined_view'),
                  translation_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite l_inclined_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_l_inclined_viewpoint'),
                      description_ : SFString('left inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),

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
                              USE_ : SFString('HAnimSiteViewpointShape'))])])]),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_r_inclined_view'),
                  name_ : SFString('r_inclined_view'),
                  translation_ : SFVec3f([SFDouble(-1.62), SFDouble(1.05), SFDouble(2.06)]),
                  rotation_ : SFRotation([SFDouble(-0.113), SFDouble(-0.993), SFDouble(0.0347), SFDouble(0.671)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite r_inclined_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_r_inclined_viewpoint'),
                      description_ : SFString('right inclined'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_front_view'),
                  name_ : SFString('front_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(2.58)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite front_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_front_viewpoint'),
                      description_ : SFString('front'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_back_view'),
                  name_ : SFString('back_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.85), SFDouble(-2.58)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.14)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite back_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_back_viewpoint'),
                      description_ : SFString('back'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_l_side_view'),
                  name_ : SFString('l_side_view'),
                  translation_ : SFVec3f([SFDouble(2.6), SFDouble(0.854), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite l_side_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_l_side_viewpoint'),
                      description_ : SFString('left side'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_Top_view'),
                  name_ : SFString('Top_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(3.5), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite Top_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_Top_viewpoint'),
                      description_ : SFString('Top'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.9), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_front_close_view'),
                  name_ : SFString('front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(1.575)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_front_close_viewpoint'),
                      description_ : SFString('front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1.575)])),

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
                  DEF_ : SFString('hanim_side_close_view'),
                  name_ : SFString('side_close_view'),
                  translation_ : SFVec3f([SFDouble(1.56), SFDouble(0.854), SFDouble(0)]),
                  rotation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.5708)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite side_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_side_close_viewpoint'),
                      description_ : SFString('side close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(1.6), SFDouble(0), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_head_front_close_view'),
                  name_ : SFString('head_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.5), SFDouble(1)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite head_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_head_front_close_viewpoint'),
                      description_ : SFString('head front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)])),

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
                  DEF_ : SFString('hanim_chest_front_close_view'),
                  name_ : SFString('chest_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.2), SFDouble(1)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite chest_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_chest_front_close_viewpoint'),
                      description_ : SFString('chest front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)])),

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
                  DEF_ : SFString('hanim_pelvis_front_close_view'),
                  name_ : SFString('pelvis_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.8), SFDouble(1)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite pelvis_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_pelvis_front_close_viewpoint'),
                      description_ : SFString('pelvis front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)])),

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
                  DEF_ : SFString('hanim_knees_front_close_view'),
                  name_ : SFString('knees_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(1)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite knees_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_knees_front_close_viewpoint'),
                      description_ : SFString('knees front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(0.4), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_feet_front_close_view'),
                  name_ : SFString('feet_front_close_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(1)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite feet_front_close_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_feet_front_close_viewpoint'),
                      description_ : SFString('feet front close'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)])),

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
                  DEF_ : SFString('hanim_eye_level_view'),
                  name_ : SFString('eye_level_view'),
                  translation_ : SFVec3f([SFDouble(0), SFDouble(1.6332), SFDouble(0.0502)]),
                  children_ : [
                    TouchSensor(
                      description_ : SFString('HAnimSite eye_level_view')),

                    Shape(
                      USE_ : SFString('HAnimSiteShape')),

                    Viewpoint(
                      DEF_ : SFString('hanim_eye_level_viewpoint'),
                      description_ : SFString('eye level looking forward'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(3.141593)])),

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
                  USE_ : SFString('hanim_r_hand_front_view')))]));
void main() { exit(0); }
