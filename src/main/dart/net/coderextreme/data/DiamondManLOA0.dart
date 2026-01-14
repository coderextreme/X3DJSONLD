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
              content_ : SFString('DiamondManLOA0.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid.')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Matthew T. Beitler')),

            meta(
              name_ : SFString('translator'),
              content_ : SFString('Joel S. Pawloski')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('12 November 2001')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:18:46 GMT')),

            meta(
              name_ : SFString('motto'),
              content_ : SFString('(a) \"Diamonds are a gir\' best friend.\" (b) \"Gosh, it sure is chilly in here.\"')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://ece.uwaterloo.ca/~HAnim')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.pdf')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~badler/anthro/89-71.ps')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('http://www.cis.upenn.edu/~beitler')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('humanoid_landmark_locations.gif')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HANIM 2.0 Default Joint Centers, LOA0'),
              info_ : MFString([SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")])),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('Diamond Man, LOA 0'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)]),
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)])),

            HAnimHumanoid(
              DEF_ : SFString('hanim_humanoid'),
              name_ : SFString('humanoid'),
              loa_ : 0,
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright')),
                  value_ : 
                    MetadataString(
                      name_ : SFString('creationDate')),
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
                    HAnimJoint(
                      DEF_ : SFString('hanim_sacroiliac'),
                      name_ : SFString('sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_pelvis'),
                          name_ : SFString('pelvis'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              child_ : 
                                Shape(
                                  DEF_ : SFString('DiamondShape'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)]))),
                                  geometry_ : 
                                    IndexedFaceSet(
                                      creaseAngle_ : 0.5,
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])])))))])])]),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('hanim_site_view'),
                  name_ : SFString('site_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('InclinedView'),
                      description_ : SFString('Inclined View'),
                      position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]),
                      orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)])),

                    Viewpoint(
                      DEF_ : SFString('FrontView'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0.854), SFDouble(2.57665)])),

                    Viewpoint(
                      DEF_ : SFString('SideView'),
                      description_ : SFString('Side View'),
                      position_ : SFVec3f([SFDouble(2.5929), SFDouble(0.854), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)])),

                    Viewpoint(
                      DEF_ : SFString('TopView'),
                      description_ : SFString('Top View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)]),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]))])])]));
void main() { exit(0); }
