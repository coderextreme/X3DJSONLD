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
              level_ : 3),
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('BvhUniversityWisconsionExample1.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('BVH file conversion: *enter description here, short-sentence summaries preferred*')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('*enter name of original author here*')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('*enter date of initial version here*')),

            meta(
              name_ : SFString('translated'),
              content_ : SFString('2 September 2023')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('Mon, 15 Sep 2025 05:21:02 GMT')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('BvhUniversityWIsconsionExample1.bvh')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://TODO/UniversityWIsconsionExample1.bvh')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit'))]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('BvhUniversityWisconsionExample1.x3d')),

            NavigationInfo(),

            Group(
              DEF_ : SFString('BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation'),
              metadata_ : [
                MetadataSet(
                  name_ : SFString('BvhToHAnimNameConversionTable'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('ROOT_Hips'),
                      reference_ : SFString('ROOT'),
                      value_ : MFString([SFString("humanoid_root"), SFString("sacrum")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('Chest'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("vl5"), SFString("l5")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('Neck'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("Neck"), SFString("vl5_to_Neck")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('Head'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("skullbase"), SFString("skull")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('HeadSite'),
                      reference_ : SFString('Site'),
                      value_ : MFString([SFString("skullbase_tip")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftCollar'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftCollar"), SFString("vl5_to_LeftCollar")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftUpArm'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftUpArm"), SFString("LeftCollar_to_LeftUpArm")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftLowArm'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftLowArm"), SFString("LeftUpArm_to_LeftLowArm")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftHand'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftHand"), SFString("LeftLowArm_to_LeftHand")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftHandSite'),
                      reference_ : SFString('Site'),
                      value_ : MFString([SFString("LeftHand_tip")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightCollar'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightCollar"), SFString("vl5_to_RightCollar")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightUpArm'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightUpArm"), SFString("RightCollar_to_RightUpArm")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightLowArm'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightLowArm"), SFString("RightUpArm_to_RightLowArm")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightHand'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightHand"), SFString("RightLowArm_to_RightHand")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightHandSite'),
                      reference_ : SFString('Site'),
                      value_ : MFString([SFString("RightHand_tip")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftUpLeg'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftUpLeg"), SFString("humanoid_root_to_LeftUpLeg")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftLowLeg'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftLowLeg"), SFString("LeftUpLeg_to_LeftLowLeg")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftFoot'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("LeftFoot"), SFString("LeftLowLeg_to_LeftFoot")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('LeftFootSite'),
                      reference_ : SFString('Site'),
                      value_ : MFString([SFString("LeftFoot_tip")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightUpLeg'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightUpLeg"), SFString("humanoid_root_to_RightUpLeg")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightLowLeg'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightLowLeg"), SFString("RightUpLeg_to_RightLowLeg")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightFoot'),
                      reference_ : SFString('JOINT'),
                      value_ : MFString([SFString("RightFoot"), SFString("RightLowLeg_to_RightFoot")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('RightFootSite'),
                      reference_ : SFString('Site'),
                      value_ : MFString([SFString("RightFoot_tip")])))]),

            Transform(
              DEF_ : SFString('InitialPositionScaled'),
              translation_ : SFVec3f([SFDouble(0), SFDouble(1.244), SFDouble(0)]),
              children_ : [
                Viewpoint(
                  description_ : SFString('BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m'),
                  position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(8)])),

                Viewpoint(
                  description_ : SFString('BvhUniversityWisconsionExample1 initial motion position'),
                  position_ : SFVec3f([SFDouble(0.803), SFDouble(3.501), SFDouble(16.836)])),

                Viewpoint(
                  description_ : SFString('BvhUniversityWisconsionExample1 final motion position'),
                  position_ : SFVec3f([SFDouble(0.781), SFDouble(3.51), SFDouble(16.647)]))]),

            HAnimHumanoid(
              DEF_ : SFString('BvhUniversityWisconsionExample1_ROOT_Hips'),
              name_ : SFString('ROOT_Hips'),
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorEmail'),
                      value_ : MFString([SFString("*TODO*")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'),
                      value_ : MFString([SFString("*TODO*")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('copyright'),
                      value_ : MFString([SFString("Copyright (c) 2023")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('humanoidVersion'),
                      value_ : MFString([SFString("*TODO*")])),
                  value_ : 
                    MetadataString(
                      name_ : SFString('usageDescription'),
                      value_ : MFString([SFString("*TODO*")]))),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('BvhUniversityWisconsionExample1_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  translation_ : SFVec3f([SFDouble(0.7849403), SFDouble(3.508388), SFDouble(8.680851)]),
                  rotation_ : SFRotation([SFDouble(-0.0184530858032817), SFDouble(-0.992698784706892), SFDouble(-0.119199859336308), SFDouble(2.9151883640198)]),
                  scale_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0.1)]),
                  children_ : [
                    HAnimSegment(
                      DEF_ : SFString('BvhUniversityWisconsionExample1_sacrum'),
                      name_ : SFString('sacrum'),
                      children_ : [
                        Switch(
                          whichChoice_ : 0,
                          children_ : [
                            Group(
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum')),

                                Shape(
                                  DEF_ : SFString('HAnimRootShape'),
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          DEF_ : SFString('HAnimRootMaterial'),
                                          diffuseColor_ : SFColor([SFDouble(0.8), SFDouble(0), SFDouble(0)]),
                                          transparency_ : 0.3)),
                                  geometry_ : 
                                    Sphere(
                                      DEF_ : SFString('HAnimJointSphere'),
                                      radius_ : 0.254))]),

                            Shape(
                              DEF_ : SFString('HAnimJointShape'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      DEF_ : SFString('HAnimJointMaterial'),
                                      diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                      transparency_ : 0.3)),
                              geometry_ : 
                                Sphere(
                                  USE_ : SFString('HAnimJointSphere'))),

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
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])])))),

                            Shape(
                              DEF_ : SFString('HAnimSiteShape'),
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      diffuseColor_ : SFColor([SFDouble(1), SFDouble(0.5), SFDouble(0)]),
                                      transparency_ : 0.3)),
                              geometry_ : 
                                IndexedFaceSet(
                                  DEF_ : SFString('DiamondIFS'),
                                  solid_ : false,
                                  creaseAngle_ : 0.5,
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(3), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(4), SFInt32(-1), SFInt32(0), SFInt32(4), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(2), SFInt32(1), SFInt32(-1), SFInt32(5), SFInt32(3), SFInt32(2), SFInt32(-1), SFInt32(5), SFInt32(4), SFInt32(3), SFInt32(-1), SFInt32(5), SFInt32(1), SFInt32(4), SFInt32(-1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0.254,0]),SFVec3f([-0.254,0,0]),SFVec3f([0,0,0.254]),SFVec3f([0.254,0,0]),SFVec3f([0,0,-0.254]),SFVec3f([0,-0.254,0])])))),

                            Shape(
                              geometry_ : 
                                LineSet(
                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                  color_ : 
                                    ColorRGBA(
                                      DEF_ : SFString('HAnimSiteLineColorRGBA'),
                                      color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(0.5), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0.5), SFColorRGBA(0), SFColorRGBA(0.1)])),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0,0])]))))]),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,5.21,0])])))),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([3.91,0,0])])))),

                        Shape(
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([-3.91,0,0])]))))]),

                    HAnimJoint(
                      DEF_ : SFString('BvhUniversityWisconsionExample1_vl5'),
                      name_ : SFString('vl5'),
                      rotation_ : SFRotation([SFDouble(0.929559139694865), SFDouble(-0.360437334785587), SFDouble(0.0774902155269029), SFDouble(0.820797255601436)]),
                      center_ : SFVec3f([SFDouble(0), SFDouble(5.21), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_l5'),
                          name_ : SFString('l5'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(0), SFDouble(5.21), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint Chest vl5, HAnimSegment l5')),
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))],
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,18.65,0])])))),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([1.12,16.23,1.87])])))),
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([-1.12,16.23,1.87])])))))]),

                        HAnimJoint(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_Neck'),
                          name_ : SFString('Neck'),
                          rotation_ : SFRotation([SFDouble(0.983970484111271), SFDouble(0.0663053900569327), SFDouble(0.16554661472597), SFDouble(0.772979753553571)]),
                          center_ : SFVec3f([SFDouble(0), SFDouble(23.86), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_vl5_to_Neck'),
                              name_ : SFString('vl5_to_Neck'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(23.86), SFDouble(0)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck')),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))],
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,5.45,0])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_skullbase'),
                              name_ : SFString('skullbase'),
                              rotation_ : SFRotation([SFDouble(-0.979126474330309), SFDouble(0.150183590569867), SFDouble(-0.136953409556093), SFDouble(0.734508385229556)]),
                              center_ : SFVec3f([SFDouble(0), SFDouble(29.31), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_skull'),
                                  name_ : SFString('skull'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(29.31), SFDouble(0)]),
                                      children_ : [
                                        HAnimSite(
                                          DEF_ : SFString('BvhUniversityWisconsionExample1_skull_tip'),
                                          name_ : SFString('skull_tip'),
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(3.87), SFDouble(0)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite skull_tip')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape')),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,-3.87,0]),SFVec3f([0,0,0])]))))]),

                                        TouchSensor(
                                          description_ : SFString('HAnimJoint Head skullbase, HAnimSegment skull')),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))])])])]),

                        HAnimJoint(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_LeftCollar'),
                          name_ : SFString('LeftCollar'),
                          rotation_ : SFRotation([SFDouble(-0.0400336310146056), SFDouble(0.285571817840178), SFDouble(0.957520780580368), SFDouble(0.318543581718216)]),
                          center_ : SFVec3f([SFDouble(1.12), SFDouble(21.44), SFDouble(1.87)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_vl5_to_LeftCollar'),
                              name_ : SFString('vl5_to_LeftCollar'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(1.12), SFDouble(21.44), SFDouble(1.87)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar')),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))],
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([5.54,0,0])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_LeftUpArm'),
                              name_ : SFString('LeftUpArm'),
                              rotation_ : SFRotation([SFDouble(-0.027309899849048), SFDouble(-0.170484979510911), SFDouble(0.984981746598077), SFDouble(1.66813504770243)]),
                              center_ : SFVec3f([SFDouble(6.66), SFDouble(21.44), SFDouble(1.87)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm'),
                                  name_ : SFString('LeftCollar_to_LeftUpArm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(6.66), SFDouble(21.44), SFDouble(1.87)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm')),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))],
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-11.96,0])])))))]),

                                HAnimJoint(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm'),
                                  name_ : SFString('LeftLowArm'),
                                  rotation_ : SFRotation([SFDouble(-0.998249192144246), SFDouble(0.0587758586859541), SFDouble(-0.00662939055192083), SFDouble(1.65994762916941)]),
                                  center_ : SFVec3f([SFDouble(6.66), SFDouble(9.48), SFDouble(1.87)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm'),
                                      name_ : SFString('LeftUpArm_to_LeftLowArm'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(6.66), SFDouble(9.48), SFDouble(1.87)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm')),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))],
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-9.93,0])])))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('BvhUniversityWisconsionExample1_LeftHand'),
                                      name_ : SFString('LeftHand'),
                                      rotation_ : SFRotation([SFDouble(0.404520441533964), SFDouble(0.00251538810905742), SFDouble(0.914525497293667), SFDouble(0.0133189030390886)]),
                                      center_ : SFVec3f([SFDouble(6.66), SFDouble(-0.45), SFDouble(1.87)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand'),
                                          name_ : SFString('LeftLowArm_to_LeftHand'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(6.66), SFDouble(-0.45), SFDouble(1.87)]),
                                              children_ : [
                                                HAnimSite(
                                                  DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip'),
                                                  name_ : SFString('LeftLowArm_to_LeftHand_tip'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(-7), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite LeftLowArm_to_LeftHand_tip')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape')),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,7,0]),SFVec3f([0,0,0])]))))]),

                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand')),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))])])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_RightCollar'),
                          name_ : SFString('RightCollar'),
                          rotation_ : SFRotation([SFDouble(-0.0717927567877157), SFDouble(-0.898736438505571), SFDouble(-0.432572091304025), SFDouble(0.383573753513759)]),
                          center_ : SFVec3f([SFDouble(-1.12), SFDouble(21.44), SFDouble(1.87)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_vl5_to_RightCollar'),
                              name_ : SFString('vl5_to_RightCollar'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-1.12), SFDouble(21.44), SFDouble(1.87)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar')),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))],
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([-6.07,0,0])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_RightUpArm'),
                              name_ : SFString('RightUpArm'),
                              rotation_ : SFRotation([SFDouble(-0.750052184733347), SFDouble(-0.545300751513553), SFDouble(-0.374257679380781), SFDouble(1.93524054510947)]),
                              center_ : SFVec3f([SFDouble(-7.19), SFDouble(21.44), SFDouble(1.87)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm'),
                                  name_ : SFString('RightCollar_to_RightUpArm'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-7.19), SFDouble(21.44), SFDouble(1.87)]),
                                      children_ : [
                                        TouchSensor(
                                          description_ : SFString('HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm')),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))],
                                      child_ : 
                                        Shape(
                                          geometry_ : 
                                            LineSet(
                                              vertexCount_ : MFInt32([SFInt32(2)]),
                                              color_ : 
                                                ColorRGBA(
                                                  USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-11.82,0])])))))]),

                                HAnimJoint(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowArm'),
                                  name_ : SFString('RightLowArm'),
                                  rotation_ : SFRotation([SFDouble(-0.942326628906139), SFDouble(0.260683574441484), SFDouble(0.209915693722034), SFDouble(1.36514284873355)]),
                                  center_ : SFVec3f([SFDouble(-7.19), SFDouble(9.62), SFDouble(1.87)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm'),
                                      name_ : SFString('RightUpArm_to_RightLowArm'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-7.19), SFDouble(9.62), SFDouble(1.87)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm')),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))],
                                          child_ : 
                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-10.65,0])])))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('BvhUniversityWisconsionExample1_RightHand'),
                                      name_ : SFString('RightHand'),
                                      rotation_ : SFRotation([SFDouble(0.487401172792782), SFDouble(0.00827736333346378), SFDouble(-0.87313892480885), SFDouble(0.0323338299925714)]),
                                      center_ : SFVec3f([SFDouble(-7.19), SFDouble(-1.03), SFDouble(1.87)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowArm_to_RightHand'),
                                          name_ : SFString('RightLowArm_to_RightHand'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-7.19), SFDouble(-1.03), SFDouble(1.87)]),
                                              children_ : [
                                                HAnimSite(
                                                  DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip'),
                                                  name_ : SFString('RightLowArm_to_RightHand_tip'),
                                                  translation_ : SFVec3f([SFDouble(0), SFDouble(-7), SFDouble(0)]),
                                                  children_ : [
                                                    TouchSensor(
                                                      description_ : SFString('HAnimSite RightLowArm_to_RightHand_tip')),

                                                    Shape(
                                                      USE_ : SFString('HAnimSiteShape')),

                                                    Shape(
                                                      geometry_ : 
                                                        LineSet(
                                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                                          color_ : 
                                                            ColorRGBA(
                                                              USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0,7,0]),SFVec3f([0,0,0])]))))]),

                                                TouchSensor(
                                                  description_ : SFString('HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand')),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))])])])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('BvhUniversityWisconsionExample1_LeftUpLeg'),
                      name_ : SFString('LeftUpLeg'),
                      rotation_ : SFRotation([SFDouble(0.798274116909833), SFDouble(-0.0905296906431976), SFDouble(0.595451769150005), SFDouble(0.374616063385567)]),
                      center_ : SFVec3f([SFDouble(3.91), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg'),
                          name_ : SFString('humanoid_root_to_LeftUpLeg'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(3.91), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg')),
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))],
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-18.34,0])])))))]),

                        HAnimJoint(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg'),
                          name_ : SFString('LeftLowLeg'),
                          rotation_ : SFRotation([SFDouble(0.969171949455709), SFDouble(0.159020234805176), SFDouble(0.188197495495361), SFDouble(1.02828103886506)]),
                          center_ : SFVec3f([SFDouble(3.91), SFDouble(-18.34), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg'),
                              name_ : SFString('LeftUpLeg_to_LeftLowLeg'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(3.91), SFDouble(-18.34), SFDouble(0)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg')),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))],
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-17.37,0])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_LeftFoot'),
                              name_ : SFString('LeftFoot'),
                              rotation_ : SFRotation([SFDouble(1.00000000000036), SFDouble(0), SFDouble(0), SFDouble(0.0199134632110525)]),
                              center_ : SFVec3f([SFDouble(3.91), SFDouble(-35.71), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot'),
                                  name_ : SFString('LeftLowLeg_to_LeftFoot'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(3.91), SFDouble(-35.71), SFDouble(0)]),
                                      children_ : [
                                        HAnimSite(
                                          DEF_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip'),
                                          name_ : SFString('LeftLowLeg_to_LeftFoot_tip'),
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-3.46), SFDouble(0)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite LeftLowLeg_to_LeftFoot_tip')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape')),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,3.46,0]),SFVec3f([0,0,0])]))))]),

                                        TouchSensor(
                                          description_ : SFString('HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot')),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))])])])])]),

                    HAnimJoint(
                      DEF_ : SFString('BvhUniversityWisconsionExample1_RightUpLeg'),
                      name_ : SFString('RightUpLeg'),
                      rotation_ : SFRotation([SFDouble(-0.529026768997627), SFDouble(-0.0781104813974245), SFDouble(-0.845002621522441), SFDouble(0.345959390966261)]),
                      center_ : SFVec3f([SFDouble(-3.91), SFDouble(0), SFDouble(0)]),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg'),
                          name_ : SFString('humanoid_root_to_RightUpLeg'),
                          children_ : [
                            Transform(
                              translation_ : SFVec3f([SFDouble(-3.91), SFDouble(0), SFDouble(0)]),
                              children_ : [
                                TouchSensor(
                                  description_ : SFString('HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg')),
                              child_ : 
                                Shape(
                                  USE_ : SFString('HAnimJointShape'))],
                              child_ : 
                                Shape(
                                  geometry_ : 
                                    LineSet(
                                      vertexCount_ : MFInt32([SFInt32(2)]),
                                      color_ : 
                                        ColorRGBA(
                                          USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-17.63,0])])))))]),

                        HAnimJoint(
                          DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg'),
                          name_ : SFString('RightLowLeg'),
                          rotation_ : SFRotation([SFDouble(0.978057447453843), SFDouble(-0.194999101930461), SFDouble(0.073341527979632), SFDouble(0.971415273794883)]),
                          center_ : SFVec3f([SFDouble(-3.91), SFDouble(-17.63), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg'),
                              name_ : SFString('RightUpLeg_to_RightLowLeg'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-3.91), SFDouble(-17.63), SFDouble(0)]),
                                  children_ : [
                                    TouchSensor(
                                      description_ : SFString('HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg')),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimJointShape'))],
                                  child_ : 
                                    Shape(
                                      geometry_ : 
                                        LineSet(
                                          vertexCount_ : MFInt32([SFInt32(2)]),
                                          color_ : 
                                            ColorRGBA(
                                              USE_ : SFString('HAnimSegmentLineColorRGBA')),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-17.14,0])])))))]),

                            HAnimJoint(
                              DEF_ : SFString('BvhUniversityWisconsionExample1_RightFoot'),
                              name_ : SFString('RightFoot'),
                              rotation_ : SFRotation([SFDouble(-1), SFDouble(0), SFDouble(0), SFDouble(0.446403006744384)]),
                              center_ : SFVec3f([SFDouble(-3.91), SFDouble(-34.77), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot'),
                                  name_ : SFString('RightLowLeg_to_RightFoot'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-3.91), SFDouble(-34.77), SFDouble(0)]),
                                      children_ : [
                                        HAnimSite(
                                          DEF_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip'),
                                          name_ : SFString('RightLowLeg_to_RightFoot_tip'),
                                          translation_ : SFVec3f([SFDouble(0), SFDouble(-3.75), SFDouble(0)]),
                                          children_ : [
                                            TouchSensor(
                                              description_ : SFString('HAnimSite RightLowLeg_to_RightFoot_tip')),

                                            Shape(
                                              USE_ : SFString('HAnimSiteShape')),

                                            Shape(
                                              geometry_ : 
                                                LineSet(
                                                  vertexCount_ : MFInt32([SFInt32(2)]),
                                                  color_ : 
                                                    ColorRGBA(
                                                      USE_ : SFString('HAnimSiteLineColorRGBA')),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0,3.75,0]),SFVec3f([0,0,0])]))))]),

                                        TouchSensor(
                                          description_ : SFString('HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot')),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))])])])])])]),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_vl5')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_Neck')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_skullbase')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftCollar')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftUpArm')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftHand')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightCollar')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightUpArm')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowArm')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightHand')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftUpLeg')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftFoot')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightUpLeg')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg')),

                HAnimJoint(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightFoot')),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_sacrum')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_l5')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_vl5_to_Neck')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_skull')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_vl5_to_LeftCollar')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_vl5_to_RightCollar')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowArm_to_RightHand')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg')),

                HAnimSegment(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot')),
              viewpoints_ : 
                HAnimSite(
                  DEF_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_view'),
                  name_ : SFString('humanoid_root_view'),
                  children_ : [
                    Viewpoint(
                      DEF_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_viewpoint'),
                      description_ : SFString('BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center'),
                      position_ : SFVec3f([SFDouble(0), SFDouble(0), SFDouble(80)]))])],
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_skull_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip')),
              viewpoints_ : 
                HAnimSite(
                  USE_ : SFString('BvhUniversityWisconsionExample1_humanoid_root_view'))),

            Group(
              DEF_ : SFString('BvhUniversityWisconsionExample1_MotionGroup'),
              children_ : [
                TimeSensor(
                  DEF_ : SFString('RealTimer'),
                  cycleInterval_ : 0.067,
                  loop_ : true),

                TimeSensor(
                  DEF_ : SFString('StepTimer'),
                  enabled_ : false,
                  cycleInterval_ : 2,
                  loop_ : true),

                ScalarInterpolator(
                  DEF_ : SFString('FrameStepper'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1), SFFloat(1)]),
                  keyValue_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(1)])),

                PositionInterpolator(
                  DEF_ : SFString('Interpolator0_humanoid_root'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFVec3f([SFVec3f([0.803,3.501,8.836]),SFVec3f([0.781,3.51,8.647])])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator1_humanoid_root'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.0118), SFRotation(-0.9911), SFRotation(-0.1325), SFRotation(2.8785), SFRotation(-0.0199), SFRotation(-0.993), SFRotation(-0.1163), SFRotation(2.9232)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator2_vl5'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.9093), SFRotation(-0.4082), SFRotation(0.0806), SFRotation(0.8073), SFRotation(0.9336), SFRotation(-0.3501), SFRotation(0.0768), SFRotation(0.824)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator3_Neck'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.9834), SFRotation(0.0677), SFRotation(0.1685), SFRotation(0.7761), SFRotation(0.9841), SFRotation(0.066), SFRotation(0.1649), SFRotation(0.7723)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator4_skullbase'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.9778), SFRotation(0.1629), SFRotation(-0.1317), SFRotation(0.736), SFRotation(-0.9794), SFRotation(0.1474), SFRotation(-0.1381), SFRotation(0.7342)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator5_LeftCollar'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.0626), SFRotation(0.7102), SFRotation(0.7012), SFRotation(0.2502), SFRotation(-0.0355), SFRotation(0.2109), SFRotation(0.9769), SFRotation(0.3411)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator6_LeftUpArm'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.1561), SFRotation(-0.2157), SFRotation(0.9639), SFRotation(1.7536), SFRotation(0.0022), SFRotation(-0.1597), SFRotation(0.9872), SFRotation(1.6521)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator7_LeftLowArm'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.9933), SFRotation(-0.0526), SFRotation(-0.103), SFRotation(1.6066), SFRotation(-0.9965), SFRotation(0.0822), SFRotation(0.0138), SFRotation(1.6744)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator8_LeftHand'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.0434), SFRotation(0.0003), SFRotation(0.9991), SFRotation(0.0121), SFRotation(0.4673), SFRotation(0.0029), SFRotation(0.8841), SFRotation(0.0138)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator9_RightCollar'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.0734), SFRotation(-0.5964), SFRotation(-0.7993), SFRotation(0.3057), SFRotation(-0.07), SFRotation(-0.9291), SFRotation(-0.3633), SFRotation(0.4091)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator10_RightUpArm'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.6801), SFRotation(-0.6074), SFRotation(-0.4106), SFRotation(2.0536), SFRotation(-0.765), SFRotation(-0.5303), SFRotation(-0.3654), SFRotation(1.9107)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator11_RightLowArm'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.9378), SFRotation(0.2739), SFRotation(0.2135), SFRotation(1.4058), SFRotation(-0.9433), SFRotation(0.2577), SFRotation(0.2091), SFRotation(1.3563)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator12_RightHand'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.4025), SFRotation(0.0061), SFRotation(-0.9154), SFRotation(0.0299), SFRotation(0.5037), SFRotation(0.0087), SFRotation(-0.8638), SFRotation(0.0329)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator13_LeftUpLeg'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.8595), SFRotation(-0.1039), SFRotation(0.5004), SFRotation(0.4748), SFRotation(0.7784), SFRotation(-0.0864), SFRotation(0.6217), SFRotation(0.3536)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator14_LeftLowLeg'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.9184), SFRotation(0.2378), SFRotation(0.3162), SFRotation(0.9291), SFRotation(0.9762), SFRotation(0.1432), SFRotation(0.1627), SFRotation(1.0525)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator15_LeftFoot'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.0199), SFRotation(1), SFRotation(0), SFRotation(0), SFRotation(0.0286)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator16_RightUpLeg'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-0.5548), SFRotation(-0.0795), SFRotation(-0.8282), SFRotation(0.3423), SFRotation(-0.5234), SFRotation(-0.0778), SFRotation(-0.8485), SFRotation(0.3468)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator17_RightLowLeg'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(0.9694), SFRotation(-0.234), SFRotation(0.0739), SFRotation(0.9755), SFRotation(0.9797), SFRotation(-0.1864), SFRotation(0.0732), SFRotation(0.9707)])),

                OrientationInterpolator(
                  DEF_ : SFString('Interpolator18_RightFoot'),
                  key_ : MFFloat([SFFloat(0), SFFloat(1)]),
                  keyValue_ : MFRotation([SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.418), SFRotation(-1), SFRotation(0), SFRotation(0), SFRotation(0.4526)]))]),

            ROUTE(
              fromNode_ : SFString('StepTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('FrameStepper'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator0_humanoid_root'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator0_humanoid_root'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator0_humanoid_root'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_humanoid_root'),
              toField_ : SFString('set_translation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator1_humanoid_root'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator1_humanoid_root'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator1_humanoid_root'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_humanoid_root'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator2_vl5'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator2_vl5'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator2_vl5'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_vl5'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator3_Neck'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator3_Neck'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator3_Neck'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_Neck'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator4_skullbase'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator4_skullbase'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator4_skullbase'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_skullbase'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator5_LeftCollar'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator5_LeftCollar'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator5_LeftCollar'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftCollar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator6_LeftUpArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator6_LeftUpArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator6_LeftUpArm'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftUpArm'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator7_LeftLowArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator7_LeftLowArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator7_LeftLowArm'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftLowArm'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator8_LeftHand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator8_LeftHand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator8_LeftHand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftHand'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator9_RightCollar'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator9_RightCollar'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator9_RightCollar'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightCollar'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator10_RightUpArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator10_RightUpArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator10_RightUpArm'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightUpArm'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator11_RightLowArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator11_RightLowArm'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator11_RightLowArm'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightLowArm'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator12_RightHand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator12_RightHand'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator12_RightHand'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightHand'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator13_LeftUpLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator13_LeftUpLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator13_LeftUpLeg'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftUpLeg'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator14_LeftLowLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator14_LeftLowLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator14_LeftLowLeg'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftLowLeg'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator15_LeftFoot'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator15_LeftFoot'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator15_LeftFoot'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_LeftFoot'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator16_RightUpLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator16_RightUpLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator16_RightUpLeg'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightUpLeg'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator17_RightLowLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator17_RightLowLeg'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator17_RightLowLeg'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightLowLeg'),
              toField_ : SFString('set_rotation')),

            ROUTE(
              fromNode_ : SFString('RealTimer'),
              fromField_ : SFString('fraction_changed'),
              toNode_ : SFString('Interpolator18_RightFoot'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('FrameStepper'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('Interpolator18_RightFoot'),
              toField_ : SFString('set_fraction')),

            ROUTE(
              fromNode_ : SFString('Interpolator18_RightFoot'),
              fromField_ : SFString('value_changed'),
              toNode_ : SFString('BvhUniversityWisconsionExample1_RightFoot'),
              toField_ : SFString('set_rotation'))]));
void main() { exit(0); }
