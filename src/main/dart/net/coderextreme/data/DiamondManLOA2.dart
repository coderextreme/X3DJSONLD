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
              content_ : SFString('DiamondManLOA2.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('hanim skeletal structure at level of articulation two, one diamond at the base node for the structure')),

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
              content_ : SFString('8 March 2021')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('DiamondManLOA2.png')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('images/BonesAllSkeletonFrontViewLOA2.png')),

            meta(
              name_ : SFString('motto'),
              content_ : SFString('(a) \"Diamonds are a gir\' best friend.\" (b) \"Gosh, it sure is chilly in here.\"')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('human animation, x3d, vrml, animation')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA2.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              info_ : MFString([SFString("HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 2 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf")]),
              title_ : SFString('HANIM 1.1 Default Joint Centers, LOA1')),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              centerOfRotation_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
              description_ : SFString('Diamond Man, LOA 2'),
              position_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(3)])),

            Transform(
              translation_ : SFVec3f([SFDouble(1), SFDouble(1.5), SFDouble(0)]),
              children_ : [
                Billboard(
                  children_ : [
                    Shape(
                      geometry_ : 
                        Text(
                          string_ : MFString([SFString("Diamond Man Key")]),
                          fontStyle_ : 
                            FontStyle(
                              family_ : MFString([SFString("SANS")]),
                              size_ : 0.1)),
                      appearance_ : 
                        Appearance(
                          material_ : 
                            Material(
                              DEF_ : SFString('TextMaterial'),
                              diffuseColor_ : SFColor([SFDouble(0.9), SFDouble(0.9), SFDouble(0.9)])))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.3), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('MIN_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Minimal Humanoid Joints")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.5), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('JOINT_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(0)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Humanoid Joints")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.7), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('REC_SPINAL_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(1)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Recommended Spinal Joints")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.9), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('SPINAL_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(0)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Spinal Joints")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-1.3), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('SITE_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Humanoid Sites")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])]),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(-1.1), SFDouble(0)]),
                      children_ : [
                        Shape(
                          geometry_ : 
                            Sphere(
                              radius_ : 0.08),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAND_FEET_COLOR'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(1), SFDouble(1)])))),

                        Transform(
                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            Shape(
                              geometry_ : 
                                Text(
                                  string_ : MFString([SFString("Hand & Feet Joints")]),
                                  fontStyle_ : 
                                    FontStyle(
                                      family_ : MFString([SFString("SANS")]),
                                      size_ : 0.1)),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      USE_ : SFString('TextMaterial'))))])])])]),

            HAnimHumanoid(
              name_ : SFString('humanoid'),
              DEF_ : SFString('hanim_humanoid'),
              loa_ : 2,
              version_ : SFString('2.0'),
              /*HAnimHumanoid original info='\"humanoidVersion=Nancy V1.2b\" \"authorName=Cindy Ballreich\" \"authorEmail=cindy@ballreich.net\" \"copyright=1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.\" \"creationDate=Tue Dec 30 08:30:08 PST 1997\" \"usageRestrictions=Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.\"'*/
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion'),
                      value_ : MFString([SFString("Nancy V1.2b")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail'),
                      value_ : MFString([SFString("cindy@ballreich.net")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'),
                      value_ : MFString([SFString("Cindy Ballreich")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright'),
                      value_ : MFString([SFString("1997 3Name3D / Yglesias Wallock Divekar Inc. all rights reserved.")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('creationDate'),
                      value_ : MFString([SFString("Tue Dec 30 08:30:08 PST 1997")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageRestrictions'),
                      value_ : MFString([SFString("Noncommercial usage is ok if 3Name3D name and logo <www.ballreich.net/vrml/HAnim/small_logo.gif> is present and proper credit is given.")]))),
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
                      children_ : [
                        Transform(
                          translation_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                          children_ : [
                            Shape(
                              DEF_ : SFString('DiamondShape'),
                              geometry_ : 
                                IndexedFaceSet(
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                  creaseAngle_ : 0.5,
                                  coord_ : 
                                    Coordinate(
                                      DEF_ : SFString('points'),
                                      point_ : MFVec3f([SFVec3f([0,0.01,0]),SFVec3f([-0.01,0,0]),SFVec3f([0,0,0.01]),SFVec3f([0.01,0,0]),SFVec3f([0,0,-0.01]),SFVec3f([0,-0.01,0])]))),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('ROOT_COLOR'),
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)])))),

                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.01), SFDouble(0)]),
                              children_ : [
                                Billboard(
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        Text(
                                          string_ : MFString([SFString("Humanoid Root")]),
                                          fontStyle_ : 
                                            FontStyle(
                                              family_ : MFString([SFString("SANS")]),
                                              size_ : 0.01,
                                              style_ : SFString('ITALIC'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(0.039216), SFDouble(1), SFDouble(0.568627)]))))])])])]),

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
                          children_ : [
                            Transform(
                              DEF_ : SFString('sacroiliacPos'),
                              translation_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('MIN_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('r_iliocristale_pt'),
                              DEF_ : SFString('hanim_r_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1525), SFDouble(1.0628), SFDouble(0.0035)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('r_trochanterion_pt'),
                              DEF_ : SFString('hanim_r_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(-0.1689), SFDouble(0.8419), SFDouble(0.0352)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('l_iliocristale_pt'),
                              DEF_ : SFString('hanim_l_iliocristale_pt'),
                              translation_ : SFVec3f([SFDouble(0.1612), SFDouble(1.0537), SFDouble(0.0008)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('l_trochanterion_pt'),
                              DEF_ : SFString('hanim_l_trochanterion_pt'),
                              translation_ : SFVec3f([SFDouble(0.1677), SFDouble(0.8336), SFDouble(0.0303)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('r_asis_pt'),
                              DEF_ : SFString('hanim_r_asis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0887), SFDouble(1.0021), SFDouble(0.1112)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('l_asis_pt'),
                              DEF_ : SFString('hanim_l_asis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0925), SFDouble(0.9983), SFDouble(0.1052)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('r_psis_pt'),
                              DEF_ : SFString('hanim_r_psis_pt'),
                              translation_ : SFVec3f([SFDouble(-0.0716), SFDouble(1.019), SFDouble(-0.1138)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('l_psis_pt'),
                              DEF_ : SFString('hanim_l_psis_pt'),
                              translation_ : SFVec3f([SFDouble(0.0774), SFDouble(1.019), SFDouble(-0.1151)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))]),

                            HAnimSite(
                              name_ : SFString('crotch_pt'),
                              DEF_ : SFString('hanim_crotch_pt'),
                              translation_ : SFVec3f([SFDouble(0.0034), SFDouble(0.8266), SFDouble(0.0257)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('SITE_COLOR'))))])]),

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
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('MIN_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('l_knee_crease_pt'),
                                  DEF_ : SFString('hanim_l_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0993), SFDouble(0.4881), SFDouble(-0.0309)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_lateral_epicondyle_pt'),
                                  DEF_ : SFString('hanim_l_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.1598), SFDouble(0.4967), SFDouble(0.0297)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('l_femoral_medial_epicondyle_pt'),
                                  DEF_ : SFString('hanim_l_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(0.0398), SFDouble(0.4946), SFDouble(0.0303)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))])]),

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
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              coord_ : 
                                                Coordinate(
                                                  USE_ : SFString('points'))),
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('MIN_COLOR'))))])]),

                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('l_talus'),
                                      DEF_ : SFString('hanim_l_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('MIN_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('l_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.1308), SFDouble(0.0597), SFDouble(-0.1032)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('l_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_l_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0716), SFDouble(-0.0881)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('l_sphyrion_pt'),
                                          DEF_ : SFString('hanim_l_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(0.089), SFDouble(0.0575), SFDouble(-0.0943)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('l_calcaneus_posterior_pt'),
                                          DEF_ : SFString('hanim_l_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(0.0974), SFDouble(0.0259), SFDouble(-0.1171)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))])]),

                                    HAnimJoint(
                                      name_ : SFString('l_tarsometatarsal_2'),
                                      DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                      center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('l_metatarsal_2'),
                                          DEF_ : SFString('hanim_l_metatarsal_2'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(-0.0368)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('MIN_COLOR'))))])]),

                                        HAnimJoint(
                                          name_ : SFString('l_metatarsophalangeal_2'),
                                          DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                          center_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                              DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0.0001), SFDouble(0.0368)]),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                          creaseAngle_ : 0.5,
                                                          coord_ : 
                                                            Coordinate(
                                                              USE_ : SFString('points'))),
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('JOINT_COLOR'))))]),

                                                HAnimSite(
                                                  name_ : SFString('l_middistal_tip'),
                                                  DEF_ : SFString('hanim_l_middistal_tip'),
                                                  translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)]),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                          creaseAngle_ : 0.5,
                                                          coord_ : 
                                                            Coordinate(
                                                              USE_ : SFString('points'))),
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('HAND_FEET_COLOR'))))]),

                                                HAnimSite(
                                                  name_ : SFString('l_metatarsal_phalanx_1_pt'),
                                                  DEF_ : SFString('hanim_l_metatarsal_phalanx_1_pt'),
                                                  translation_ : SFVec3f([SFDouble(0.0816), SFDouble(0.0232), SFDouble(0.0106)]),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                          creaseAngle_ : 0.5,
                                                          coord_ : 
                                                            Coordinate(
                                                              USE_ : SFString('points'))),
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('HAND_FEET_COLOR'))))])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.1086), SFDouble(0), SFDouble(0.0762)]),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                              creaseAngle_ : 0.5,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('points'))),
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('JOINT_COLOR'))))]),

                                                    HAnimSite(
                                                      name_ : SFString('l_forefoot_tip'),
                                                      DEF_ : SFString('hanim_l_forefoot_tip'),
                                                      translation_ : SFVec3f([SFDouble(0.1354), SFDouble(0.0016), SFDouble(0.1476)]),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                              creaseAngle_ : 0.5,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('points'))),
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('HAND_FEET_COLOR'))))]),

                                                    HAnimSite(
                                                      name_ : SFString('l_metatarsal_phalanx_5_pt'),
                                                      DEF_ : SFString('hanim_l_metatarsal_phalanx_5_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1825), SFDouble(0.007), SFDouble(0.0928)]),
                                                      /*# CAESAR Feature Point #66*/
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                              creaseAngle_ : 0.5,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('points'))),
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('HAND_FEET_COLOR'))))]),

                                                    HAnimSite(
                                                      name_ : SFString('l_tarsal_distal_phalanx_2_pt'),
                                                      DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2_pt'),
                                                      translation_ : SFVec3f([SFDouble(0.1195), SFDouble(0.0079), SFDouble(0.1433)]),
                                                      /*# CAESAR Feature Point #72*/
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                              creaseAngle_ : 0.5,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('points'))),
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('HAND_FEET_COLOR'))))])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_thigh'),
                              DEF_ : SFString('hanim_r_thigh'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('MIN_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('r_knee_crease_pt'),
                                  DEF_ : SFString('hanim_r_knee_crease_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0825), SFDouble(0.4932), SFDouble(-0.0326)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_lateral_epicondyle_pt'),
                                  DEF_ : SFString('hanim_r_femoral_lateral_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.1421), SFDouble(0.4992), SFDouble(0.031)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))]),

                                HAnimSite(
                                  name_ : SFString('r_femoral_medial_epicondyle_pt'),
                                  DEF_ : SFString('hanim_r_femoral_medial_epicondyle_pt'),
                                  translation_ : SFVec3f([SFDouble(-0.0221), SFDouble(0.5014), SFDouble(0.0289)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SITE_COLOR'))))])]),

                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_calf'),
                                  DEF_ : SFString('hanim_r_calf'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              coord_ : 
                                                Coordinate(
                                                  USE_ : SFString('points'))),
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('SITE_COLOR'))))])]),

                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_talus'),
                                      DEF_ : SFString('hanim_r_talus'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('MIN_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('r_lateral_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_lateral_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.1006), SFDouble(0.0658), SFDouble(-0.1075)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('r_medial_malleolus_pt'),
                                          DEF_ : SFString('hanim_r_medial_malleolus_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0591), SFDouble(0.076), SFDouble(-0.0928)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('r_sphyrion_pt'),
                                          DEF_ : SFString('hanim_r_sphyrion_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0603), SFDouble(0.061), SFDouble(-0.1002)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))]),

                                        HAnimSite(
                                          name_ : SFString('r_calcaneus_posterior_pt'),
                                          DEF_ : SFString('hanim_r_calcaneus_posterior_pt'),
                                          translation_ : SFVec3f([SFDouble(-0.0692), SFDouble(0.0297), SFDouble(-0.1221)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('HAND_FEET_COLOR'))))])]),

                                    HAnimJoint(
                                      name_ : SFString('r_metatarsophalangeal_2'),
                                      DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                      center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_tarsal_proximal_phalanx_2'),
                                          DEF_ : SFString('hanim_r_tarsal_proximal_phalanx_2'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.0801), SFDouble(0), SFDouble(0.0368)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('JOINT_COLOR'))))]),

                                            HAnimSite(
                                              name_ : SFString('r_middistal_tip'),
                                              DEF_ : SFString('hanim_r_middistal_tip'),
                                              translation_ : SFVec3f([SFDouble(-0.1043), SFDouble(-0.0227), SFDouble(0.145)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('HAND_FEET_COLOR'))))]),

                                            HAnimSite(
                                              name_ : SFString('r_metatarsal_phalanx_5_pt'),
                                              DEF_ : SFString('hanim_r_metatarsal_phalanx_5_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.1523), SFDouble(0.0166), SFDouble(0.0895)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('HAND_FEET_COLOR'))))]),

                                            HAnimSite(
                                              name_ : SFString('r_metatarsal_phalanx_1_pt'),
                                              DEF_ : SFString('hanim_r_metatarsal_phalanx_1_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0521), SFDouble(0.026), SFDouble(0.0127)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('HAND_FEET_COLOR'))))]),

                                            HAnimSite(
                                              name_ : SFString('r_tarsal_distal_phalanx_2_pt'),
                                              DEF_ : SFString('hanim_r_tarsal_distal_phalanx_2_pt'),
                                              translation_ : SFVec3f([SFDouble(-0.0883), SFDouble(0.0134), SFDouble(0.1383)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('HAND_FEET_COLOR'))))])])])])])])]),

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
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                              children_ : [
                                Shape(
                                  geometry_ : 
                                    IndexedFaceSet(
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                      creaseAngle_ : 0.5,
                                      coord_ : 
                                        Coordinate(
                                          USE_ : SFString('points'))),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                                  children_ : [
                                    Shape(
                                      geometry_ : 
                                        IndexedFaceSet(
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                          creaseAngle_ : 0.5,
                                          coord_ : 
                                            Coordinate(
                                              USE_ : SFString('points'))),
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                                      children_ : [
                                        Shape(
                                          geometry_ : 
                                            IndexedFaceSet(
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                              creaseAngle_ : 0.5,
                                              coord_ : 
                                                Coordinate(
                                                  USE_ : SFString('points'))),
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                          children_ : [
                                            Shape(
                                              geometry_ : 
                                                IndexedFaceSet(
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                  creaseAngle_ : 0.5,
                                                  coord_ : 
                                                    Coordinate(
                                                      USE_ : SFString('points'))),
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                              children_ : [
                                                Shape(
                                                  geometry_ : 
                                                    IndexedFaceSet(
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                      creaseAngle_ : 0.5,
                                                      coord_ : 
                                                        Coordinate(
                                                          USE_ : SFString('points'))),
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                                  children_ : [
                                                    Shape(
                                                      geometry_ : 
                                                        IndexedFaceSet(
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                          creaseAngle_ : 0.5,
                                                          coord_ : 
                                                            Coordinate(
                                                              USE_ : SFString('points'))),
                                                      appearance_ : 
                                                        Appearance(
                                                          material_ : 
                                                            Material(
                                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                                      children_ : [
                                                        Shape(
                                                          geometry_ : 
                                                            IndexedFaceSet(
                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                              creaseAngle_ : 0.5,
                                                              coord_ : 
                                                                Coordinate(
                                                                  USE_ : SFString('points'))),
                                                          appearance_ : 
                                                            Appearance(
                                                              material_ : 
                                                                Material(
                                                                  USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                      children_ : [
                                                        Transform(
                                                          translation_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                          children_ : [
                                                            Shape(
                                                              geometry_ : 
                                                                IndexedFaceSet(
                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                  creaseAngle_ : 0.5,
                                                                  coord_ : 
                                                                    Coordinate(
                                                                      USE_ : SFString('points'))),
                                                              appearance_ : 
                                                                Appearance(
                                                                  material_ : 
                                                                    Material(
                                                                      USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                                          children_ : [
                                                            Transform(
                                                              translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                              children_ : [
                                                                Shape(
                                                                  geometry_ : 
                                                                    IndexedFaceSet(
                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                      creaseAngle_ : 0.5,
                                                                      coord_ : 
                                                                        Coordinate(
                                                                          USE_ : SFString('points'))),
                                                                  appearance_ : 
                                                                    Appearance(
                                                                      material_ : 
                                                                        Material(
                                                                          USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                              children_ : [
                                                                Transform(
                                                                  translation_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                                  children_ : [
                                                                    Shape(
                                                                      geometry_ : 
                                                                        IndexedFaceSet(
                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                          creaseAngle_ : 0.5,
                                                                          coord_ : 
                                                                            Coordinate(
                                                                              USE_ : SFString('points'))),
                                                                      appearance_ : 
                                                                        Appearance(
                                                                          material_ : 
                                                                            Material(
                                                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                  children_ : [
                                                                    Transform(
                                                                      translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                                      children_ : [
                                                                        Shape(
                                                                          geometry_ : 
                                                                            IndexedFaceSet(
                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                              creaseAngle_ : 0.5,
                                                                              coord_ : 
                                                                                Coordinate(
                                                                                  USE_ : SFString('points'))),
                                                                          appearance_ : 
                                                                            Appearance(
                                                                              material_ : 
                                                                                Material(
                                                                                  USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                      children_ : [
                                                                        Transform(
                                                                          translation_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                          children_ : [
                                                                            Shape(
                                                                              geometry_ : 
                                                                                IndexedFaceSet(
                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                  creaseAngle_ : 0.5,
                                                                                  coord_ : 
                                                                                    Coordinate(
                                                                                      USE_ : SFString('points'))),
                                                                              appearance_ : 
                                                                                Appearance(
                                                                                  material_ : 
                                                                                    Material(
                                                                                      USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                                                          children_ : [
                                                                            Transform(
                                                                              translation_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                              children_ : [
                                                                                Shape(
                                                                                  geometry_ : 
                                                                                    IndexedFaceSet(
                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                      creaseAngle_ : 0.5,
                                                                                      coord_ : 
                                                                                        Coordinate(
                                                                                          USE_ : SFString('points'))),
                                                                                  appearance_ : 
                                                                                    Appearance(
                                                                                      material_ : 
                                                                                        Material(
                                                                                          USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                              children_ : [
                                                                                Transform(
                                                                                  translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                                  children_ : [
                                                                                    Shape(
                                                                                      geometry_ : 
                                                                                        IndexedFaceSet(
                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                          creaseAngle_ : 0.5,
                                                                                          coord_ : 
                                                                                            Coordinate(
                                                                                              USE_ : SFString('points'))),
                                                                                      appearance_ : 
                                                                                        Appearance(
                                                                                          material_ : 
                                                                                            Material(
                                                                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                  children_ : [
                                                                                    Transform(
                                                                                      translation_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                                      children_ : [
                                                                                        Shape(
                                                                                          geometry_ : 
                                                                                            IndexedFaceSet(
                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                              creaseAngle_ : 0.5,
                                                                                              coord_ : 
                                                                                                Coordinate(
                                                                                                  USE_ : SFString('points'))),
                                                                                          appearance_ : 
                                                                                            Appearance(
                                                                                              material_ : 
                                                                                                Material(
                                                                                                  USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                      children_ : [
                                                                                        Transform(
                                                                                          translation_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                          children_ : [
                                                                                            Shape(
                                                                                              geometry_ : 
                                                                                                IndexedFaceSet(
                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                  creaseAngle_ : 0.5,
                                                                                                  coord_ : 
                                                                                                    Coordinate(
                                                                                                      USE_ : SFString('points'))),
                                                                                              appearance_ : 
                                                                                                Appearance(
                                                                                                  material_ : 
                                                                                                    Material(
                                                                                                      USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                          children_ : [
                                                                                            Transform(
                                                                                              translation_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                              children_ : [
                                                                                                Shape(
                                                                                                  geometry_ : 
                                                                                                    IndexedFaceSet(
                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                      creaseAngle_ : 0.5,
                                                                                                      coord_ : 
                                                                                                        Coordinate(
                                                                                                          USE_ : SFString('points'))),
                                                                                                  appearance_ : 
                                                                                                    Appearance(
                                                                                                      material_ : 
                                                                                                        Material(
                                                                                                          USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              USE_ : SFString('points'))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              USE_ : SFString('MIN_COLOR'))))]),

                                                                                                Transform(
                                                                                                  DEF_ : SFString('l_upperarm_adjust'),
                                                                                                  center_ : SFVec3f([SFDouble(0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                                                                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.119)]),
                                                                                                  translation_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('l_humeral_lateral_epicondyle_pt'),
                                                                                                  DEF_ : SFString('hanim_l_humeral_lateral_epicondyle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(0.228), SFDouble(1.1482), SFDouble(-0.11)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              USE_ : SFString('points'))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              USE_ : SFString('SITE_COLOR'))))])]),

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
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('MIN_COLOR'))))]),

                                                                                                    Transform(
                                                                                                      DEF_ : SFString('l_forearm_adjust'),
                                                                                                      center_ : SFVec3f([SFDouble(0.198), SFDouble(0.961), SFDouble(-0.0405)]),
                                                                                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1)]),
                                                                                                      translation_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)])),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_radial_styloid_pt'),
                                                                                                      DEF_ : SFString('hanim_l_radial_styloid_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1901), SFDouble(0.8645), SFDouble(-0.0415)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_olecranon_pt'),
                                                                                                      DEF_ : SFString('hanim_l_olecranon_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1962), SFDouble(1.1375), SFDouble(-0.1123)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_humeral_medial_epicondyle_pt'),
                                                                                                      DEF_ : SFString('hanim_l_humeral_medial_epicondyle_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.1735), SFDouble(1.1272), SFDouble(-0.1113)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('l_radiale_pt'),
                                                                                                      DEF_ : SFString('hanim_l_radiale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(0.2182), SFDouble(1.1212), SFDouble(-0.1167)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_radiocarpal'),
                                                                                                  DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                  center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('l_carpal'),
                                                                                                      DEF_ : SFString('hanim_l_carpal'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('MIN_COLOR'))))]),

                                                                                                        Transform(
                                                                                                          DEF_ : SFString('l_hand_adjust'),
                                                                                                          center_ : SFVec3f([SFDouble(0.213), SFDouble(0.811), SFDouble(-0.0338)]),
                                                                                                          rotation_ : SFRotation([SFDouble(-0.06361), SFDouble(-0.9967), SFDouble(0.04988), SFDouble(1.333)]),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)])),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_hand_tip'),
                                                                                                          DEF_ : SFString('hanim_l_hand_tip'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.208), SFDouble(0.6731), SFDouble(-0.0491)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_metacarpal_phalanx_2_pt'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_2_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2009), SFDouble(0.8139), SFDouble(-0.0237)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_dactylion_pt'),
                                                                                                          DEF_ : SFString('hanim_l_dactylion_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.2056), SFDouble(0.6743), SFDouble(-0.0482)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_ulnar_styloid_pt'),
                                                                                                          DEF_ : SFString('hanim_l_ulnar_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2142), SFDouble(0.8529), SFDouble(-0.0648)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('l_metacarpal_phalanx_5_pt'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpal_phalanx_5_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(0.1929), SFDouble(0.786), SFDouble(-0.1122)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_carpometacarpal_1'),
                                                                                                      DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                      center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_metacarpal_1'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpal_1'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          USE_ : SFString('points'))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          USE_ : SFString('JOINT_COLOR'))))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_1'),
                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_1'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedFaceSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              USE_ : SFString('points'))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          material_ : 
                                                                                                                            Material(
                                                                                                                              USE_ : SFString('JOINT_COLOR'))))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                              DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_carpal_distal_phalanx_1'),
                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_phalanx_1'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  USE_ : SFString('points'))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  USE_ : SFString('JOINT_COLOR'))))]),

                                                                                                                    HAnimSite(
                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_1_tip'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_1_tip'),
                                                                                                                      translation_ : SFVec3f([SFDouble(0.1982), SFDouble(0.8061), SFDouble(0.0759)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  USE_ : SFString('points'))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  USE_ : SFString('HAND_FEET_COLOR'))))])])])])]),

                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_carpometacarpal_2'),
                                                                                                      DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                      ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimSegment(
                                                                                                          name_ : SFString('l_metacarpal_2'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpal_2'),
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          USE_ : SFString('points'))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          USE_ : SFString('JOINT_COLOR'))))])]),

                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                          DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimSegment(
                                                                                                              name_ : SFString('l_carpal_proximal_phalanx_2'),
                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_phalanx_2'),
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedFaceSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              USE_ : SFString('points'))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          material_ : 
                                                                                                                            Material(
                                                                                                                              USE_ : SFString('JOINT_COLOR'))))])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                              DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimSegment(
                                                                                                                  name_ : SFString('l_carpal_middle_phalanx_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpal_middle_phalanx_2'),
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  USE_ : SFString('points'))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  USE_ : SFString('JOINT_COLOR'))))])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimSegment(
                                                                                                                      name_ : SFString('l_carpal_distal_phalanx_2'),
                                                                                                                      DEF_ : SFString('hanim_l_carpal_distal_phalanx_2'),
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      USE_ : SFString('points'))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      USE_ : SFString('JOINT_COLOR'))))]),

                                                                                                                        HAnimSite(
                                                                                                                          name_ : SFString('l_carpal_distal_phalanx_2_tip'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_distal_phalanx_2_tip'),
                                                                                                                          translation_ : SFVec3f([SFDouble(0.2089), SFDouble(0.6858), SFDouble(-0.0245)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      USE_ : SFString('points'))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      USE_ : SFString('HAND_FEET_COLOR'))))])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_shoulder'),
                                                                                          DEF_ : SFString('hanim_r_shoulder'),
                                                                                          center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                          ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                          children_ : [
                                                                                            HAnimSegment(
                                                                                              name_ : SFString('r_upperarm'),
                                                                                              DEF_ : SFString('hanim_r_upperarm'),
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              USE_ : SFString('points'))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              USE_ : SFString('MIN_COLOR'))))]),

                                                                                                Transform(
                                                                                                  DEF_ : SFString('r_upperarm_adjust'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.182), SFDouble(1.22), SFDouble(-0.047)]),
                                                                                                  rotation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(0.0836)]),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)])),

                                                                                                HAnimSite(
                                                                                                  name_ : SFString('r_humeral_lateral_epicondyle_pt'),
                                                                                                  DEF_ : SFString('hanim_r_humeral_lateral_epicondyle_pt'),
                                                                                                  translation_ : SFVec3f([SFDouble(-0.2224), SFDouble(1.1517), SFDouble(-0.1033)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              USE_ : SFString('points'))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              USE_ : SFString('SITE_COLOR'))))])]),

                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_elbow'),
                                                                                              DEF_ : SFString('hanim_r_elbow'),
                                                                                              center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                              ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                              children_ : [
                                                                                                HAnimSegment(
                                                                                                  name_ : SFString('r_forearm'),
                                                                                                  DEF_ : SFString('hanim_r_forearm'),
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('MIN_COLOR'))))]),

                                                                                                    Transform(
                                                                                                      DEF_ : SFString('r_forearm_adjust'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.198), SFDouble(0.961), SFDouble(-0.0397)]),
                                                                                                      rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.1254)]),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)])),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_radial_styloid_pt'),
                                                                                                      DEF_ : SFString('hanim_r_radial_styloid_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1884), SFDouble(0.8676), SFDouble(-0.036)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_olecranon_pt'),
                                                                                                      DEF_ : SFString('hanim_r_olecranon_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.1405), SFDouble(-0.1065)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_humeral_medial_epicondyle_pt'),
                                                                                                      DEF_ : SFString('hanim_r_humeral_medial_epicondyle_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.168), SFDouble(1.1298), SFDouble(-0.1062)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))]),

                                                                                                    HAnimSite(
                                                                                                      name_ : SFString('r_radiale_pt'),
                                                                                                      DEF_ : SFString('hanim_r_radiale_pt'),
                                                                                                      translation_ : SFVec3f([SFDouble(-0.213), SFDouble(1.1305), SFDouble(-0.1091)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SITE_COLOR'))))])]),

                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_radiocarpal'),
                                                                                                  DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                  ulimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  llimit_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  stiffness_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimSegment(
                                                                                                      name_ : SFString('r_carpal'),
                                                                                                      DEF_ : SFString('hanim_r_carpal'),
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('MIN_COLOR'))))]),

                                                                                                        Transform(
                                                                                                          DEF_ : SFString('r_hand_adjust'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.217), SFDouble(0.811), SFDouble(-0.0338)]),
                                                                                                          rotation_ : SFRotation([SFDouble(-0.09024), SFDouble(0.994), SFDouble(-0.0624), SFDouble(1.216)])),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_hand_tip'),
                                                                                                          DEF_ : SFString('hanim_r_hand_tip'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1969), SFDouble(0.6758), SFDouble(-0.0427)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_metacarpal_phalanx_2_pt'),
                                                                                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_2_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1977), SFDouble(0.8169), SFDouble(-0.0177)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_dactylion_pt'),
                                                                                                          DEF_ : SFString('hanim_r_dactylion_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1941), SFDouble(0.6772), SFDouble(-0.0423)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_ulnar_styloid_pt'),
                                                                                                          DEF_ : SFString('hanim_r_ulnar_styloid_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.2117), SFDouble(0.8562), SFDouble(-0.0584)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))]),

                                                                                                        HAnimSite(
                                                                                                          name_ : SFString('r_metacarpal_phalanx_5_pt'),
                                                                                                          DEF_ : SFString('hanim_r_metacarpal_phalanx_5_pt'),
                                                                                                          translation_ : SFVec3f([SFDouble(-0.1929), SFDouble(0.789), SFDouble(-0.1064)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SITE_COLOR'))))])])])])]),

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
                                                                                              children_ : [
                                                                                                Transform(
                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                                  children_ : [
                                                                                                    Shape(
                                                                                                      geometry_ : 
                                                                                                        IndexedFaceSet(
                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                          creaseAngle_ : 0.5,
                                                                                                          coord_ : 
                                                                                                            Coordinate(
                                                                                                              USE_ : SFString('points'))),
                                                                                                      appearance_ : 
                                                                                                        Appearance(
                                                                                                          material_ : 
                                                                                                            Material(
                                                                                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                  children_ : [
                                                                                                    Transform(
                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                                      children_ : [
                                                                                                        Shape(
                                                                                                          geometry_ : 
                                                                                                            IndexedFaceSet(
                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                              creaseAngle_ : 0.5,
                                                                                                              coord_ : 
                                                                                                                Coordinate(
                                                                                                                  USE_ : SFString('points'))),
                                                                                                          appearance_ : 
                                                                                                            Appearance(
                                                                                                              material_ : 
                                                                                                                Material(
                                                                                                                  USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                      children_ : [
                                                                                                        Transform(
                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                          children_ : [
                                                                                                            Shape(
                                                                                                              geometry_ : 
                                                                                                                IndexedFaceSet(
                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                  coord_ : 
                                                                                                                    Coordinate(
                                                                                                                      USE_ : SFString('points'))),
                                                                                                              appearance_ : 
                                                                                                                Appearance(
                                                                                                                  material_ : 
                                                                                                                    Material(
                                                                                                                      USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                          children_ : [
                                                                                                            Transform(
                                                                                                              translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                              children_ : [
                                                                                                                Shape(
                                                                                                                  geometry_ : 
                                                                                                                    IndexedFaceSet(
                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                      coord_ : 
                                                                                                                        Coordinate(
                                                                                                                          USE_ : SFString('points'))),
                                                                                                                  appearance_ : 
                                                                                                                    Appearance(
                                                                                                                      material_ : 
                                                                                                                        Material(
                                                                                                                          USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                              children_ : [
                                                                                                                Transform(
                                                                                                                  translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                                  children_ : [
                                                                                                                    Shape(
                                                                                                                      geometry_ : 
                                                                                                                        IndexedFaceSet(
                                                                                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                          creaseAngle_ : 0.5,
                                                                                                                          coord_ : 
                                                                                                                            Coordinate(
                                                                                                                              USE_ : SFString('points'))),
                                                                                                                      appearance_ : 
                                                                                                                        Appearance(
                                                                                                                          material_ : 
                                                                                                                            Material(
                                                                                                                              USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                                  children_ : [
                                                                                                                    Transform(
                                                                                                                      translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                                      children_ : [
                                                                                                                        Shape(
                                                                                                                          geometry_ : 
                                                                                                                            IndexedFaceSet(
                                                                                                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                              creaseAngle_ : 0.5,
                                                                                                                              coord_ : 
                                                                                                                                Coordinate(
                                                                                                                                  USE_ : SFString('points'))),
                                                                                                                          appearance_ : 
                                                                                                                            Appearance(
                                                                                                                              material_ : 
                                                                                                                                Material(
                                                                                                                                  USE_ : SFString('REC_SPINAL_COLOR'))))])]),

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
                                                                                                                      children_ : [
                                                                                                                        Transform(
                                                                                                                          translation_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                          children_ : [
                                                                                                                            Shape(
                                                                                                                              geometry_ : 
                                                                                                                                IndexedFaceSet(
                                                                                                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                  creaseAngle_ : 0.5,
                                                                                                                                  coord_ : 
                                                                                                                                    Coordinate(
                                                                                                                                      USE_ : SFString('points'))),
                                                                                                                              appearance_ : 
                                                                                                                                Appearance(
                                                                                                                                  material_ : 
                                                                                                                                    Material(
                                                                                                                                      USE_ : SFString('SPINAL_COLOR'))))])]),

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
                                                                                                                          children_ : [
                                                                                                                            Transform(
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('MIN_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('skull_vertex_tip'),
                                                                                                                              DEF_ : SFString('hanim_skull_vertex_tip'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.005), SFDouble(1.7504), SFDouble(0.0055)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('sellion_pt'),
                                                                                                                              DEF_ : SFString('hanim_sellion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0058), SFDouble(1.6316), SFDouble(0.0852)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_infraorbitale_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0237), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_infraorbitale_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_infraorbitale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0341), SFDouble(1.6171), SFDouble(0.0752)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('supramenton_pt'),
                                                                                                                              DEF_ : SFString('hanim_supramenton_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0061), SFDouble(1.541), SFDouble(0.0805)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_tragion_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.0646), SFDouble(1.6347), SFDouble(0.0302)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('r_gonion_pt'),
                                                                                                                              DEF_ : SFString('hanim_r_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(-0.052), SFDouble(1.5529), SFDouble(0.0347)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_tragion_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_tragion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0739), SFDouble(1.6348), SFDouble(0.0282)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('l_gonion_pt'),
                                                                                                                              DEF_ : SFString('hanim_l_gonion_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0631), SFDouble(1.553), SFDouble(0.033)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))]),

                                                                                                                            HAnimSite(
                                                                                                                              name_ : SFString('nuchale_pt'),
                                                                                                                              DEF_ : SFString('hanim_nuchale_pt'),
                                                                                                                              translation_ : SFVec3f([SFDouble(0.0039), SFDouble(1.5972), SFDouble(-0.0796)]),
                                                                                                                              children_ : [
                                                                                                                                Shape(
                                                                                                                                  geometry_ : 
                                                                                                                                    IndexedFaceSet(
                                                                                                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                                                                                                                      creaseAngle_ : 0.5,
                                                                                                                                      coord_ : 
                                                                                                                                        Coordinate(
                                                                                                                                          USE_ : SFString('points'))),
                                                                                                                                  appearance_ : 
                                                                                                                                    Appearance(
                                                                                                                                      material_ : 
                                                                                                                                        Material(
                                                                                                                                          USE_ : SFString('SITE_COLOR'))))])])])])])])])])])])])])])])])])])])])])])])])])])])])]),
              viewpoints_ : 
                HAnimSite(
                  name_ : SFString('DiamondManLOA2_view'),
                  DEF_ : SFString('hanim_DiamondManLOA2_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('FrontView'),
                      description_ : SFString('Front View'),
                      position_ : SFVec3f([SFDouble(0.35), SFDouble(0.854), SFDouble(2.57665)])),

                    Viewpoint(
                      DEF_ : SFString('SideView'),
                      description_ : SFString('Side View'),
                      orientation_ : SFRotation([SFDouble(0), SFDouble(1), SFDouble(0), SFDouble(1.57079)]),
                      position_ : SFVec3f([SFDouble(2), SFDouble(0.854), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('TopView'),
                      description_ : SFString('Top View'),
                      orientation_ : SFRotation([SFDouble(1), SFDouble(0), SFDouble(0), SFDouble(-1.57079)]),
                      position_ : SFVec3f([SFDouble(0), SFDouble(3.4495), SFDouble(0)])),

                    Viewpoint(
                      DEF_ : SFString('RootView'),
                      description_ : SFString('Humanoid Root View'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.277)])),

                    Viewpoint(
                      DEF_ : SFString('InclinedView'),
                      description_ : SFString('Inclined View'),
                      orientation_ : SFRotation([SFDouble(-0.113), SFDouble(0.993), SFDouble(0.0347), SFDouble(0.671)]),
                      position_ : SFVec3f([SFDouble(1.62), SFDouble(1.05), SFDouble(2.06)]))])],

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl1')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc4')),

                HAnimJoint(
                  USE_ : SFString('hanim_skullbase')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl5')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl4')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vl2')),

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
                  USE_ : SFString('hanim_vc3')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc2')),

                HAnimJoint(
                  USE_ : SFString('hanim_vc1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

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
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

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
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_pelvis')),

                HAnimSegment(
                  USE_ : SFString('hanim_c7')),

                HAnimSegment(
                  USE_ : SFString('hanim_c4')),

                HAnimSegment(
                  USE_ : SFString('hanim_skull')),

                HAnimSegment(
                  USE_ : SFString('hanim_sacrum')),

                HAnimSegment(
                  USE_ : SFString('hanim_l5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l1')),

                HAnimSegment(
                  USE_ : SFString('hanim_t12')),

                HAnimSegment(
                  USE_ : SFString('hanim_t11')),

                HAnimSegment(
                  USE_ : SFString('hanim_t10')),

                HAnimSegment(
                  USE_ : SFString('hanim_t9')),

                HAnimSegment(
                  USE_ : SFString('hanim_t8')),

                HAnimSegment(
                  USE_ : SFString('hanim_t7')),

                HAnimSegment(
                  USE_ : SFString('hanim_t6')),

                HAnimSegment(
                  USE_ : SFString('hanim_t5')),

                HAnimSegment(
                  USE_ : SFString('hanim_t4')),

                HAnimSegment(
                  USE_ : SFString('hanim_t3')),

                HAnimSegment(
                  USE_ : SFString('hanim_t2')),

                HAnimSegment(
                  USE_ : SFString('hanim_t1')),

                HAnimSegment(
                  USE_ : SFString('hanim_c6')),

                HAnimSegment(
                  USE_ : SFString('hanim_c5')),

                HAnimSegment(
                  USE_ : SFString('hanim_c3')),

                HAnimSegment(
                  USE_ : SFString('hanim_c2')),

                HAnimSegment(
                  USE_ : SFString('hanim_c1')),

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
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_carpal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_forearm')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metacarpal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_r_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

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
                  USE_ : SFString('hanim_skull_vertex_tip')),
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
                  USE_ : SFString('hanim_r_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_asis_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_calcaneus_posterior_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_1_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_carpal_distal_phalanx_2_tip')),
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
                  USE_ : SFString('hanim_l_forefoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_gonion_pt')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_l_hand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_hand_tip')),
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
                  USE_ : SFString('hanim_l_middistal_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('hanim_r_middistal_tip')),
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
