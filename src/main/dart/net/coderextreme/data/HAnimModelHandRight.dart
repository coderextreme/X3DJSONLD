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
              content_ : SFString('HAnimModelHandRight.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Right hand using high-fidelity definitions for HAnim version 2.0')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('Kwan-Hee YOO, Don Brutzman and Joe Williams')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('26 January 2015')),

            meta(
              name_ : SFString('modified'),
              content_ : SFString('23 December 2021')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2')),

            meta(
              name_ : SFString('Image'),
              content_ : SFString('HAnimModelHandRightSegmentVisualizationError.png')),

            meta(
              name_ : SFString('error'),
              content_ : SFString('not yet to scale, also relatively flat')),

            meta(
              name_ : SFString('warning'),
              content_ : SFString('TODO will X3D HAnim component add a new level to support LOA-4 functionality?')),

            meta(
              name_ : SFString('info'),
              content_ : SFString('TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/working-groups/humanoid-animation-HAnim')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html')),

            meta(
              name_ : SFString('subject'),
              content_ : SFString('X3D HAnim humanoid animation')),

            meta(
              name_ : SFString('TODO'),
              content_ : SFString('Integrate and confirm Segment/Joint names, Viewpoints.')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d')),

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
              title_ : SFString('HAnimModelHandRight.x3d')),

            HAnimHumanoid(
              name_ : SFString('Hand_Right'),
              DEF_ : SFString('hanim_Hand_Right'),
              loa_ : 4,
              version_ : SFString('2.0'),
              /*original HAnimHumanoid info='\"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams\"'*/
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'),
                      value_ : MFString([SFString("Kwan-Hee YOO, Don Brutzman and Joe Williams")]))),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  /*Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model*/
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('r_radiocarpal'),
                      DEF_ : SFString('hanim_r_radiocarpal'),
                      description_ : SFString('connection joint of hand to leg above'),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimSegment(
                          name_ : SFString('r_carpal'),
                          DEF_ : SFString('hanim_r_carpal'),
                          children_ : [
                            Transform(
                              child_ : 
                                Shape(
                                  DEF_ : SFString('HAnimJointShape'),
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.025),
                                  appearance_ : 
                                    Appearance(
                                      DEF_ : SFString('HAnimJointAppearanceBlue'),
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))))),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                IndexedLineSet(
                                  DEF_ : SFString('RCToMC12'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([-0.1,0.1,0])])))),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                IndexedLineSet(
                                  DEF_ : SFString('RCToMC3'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,0.07,0])])))),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                IndexedLineSet(
                                  DEF_ : SFString('RCToMC45'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0.1,0])]))))]),
                      /*MC1*/

                        HAnimJoint(
                          name_ : SFString('r_midcarpal_1'),
                          DEF_ : SFString('hanim_r_midcarpal_1'),
                          center_ : SFVec3f([SFDouble(-0.14), SFDouble(0.09), SFDouble(0)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_trapezium'),
                              DEF_ : SFString('hanim_r_trapezium'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.14), SFDouble(0.09), SFDouble(0)]),
                                  child_ : 
                                    Shape(
                                      DEF_ : SFString('HAnimNewJointShape'),
                                      geometry_ : 
                                        Sphere(
                                          radius_ : 0.025),
                                      appearance_ : 
                                        Appearance(
                                          DEF_ : SFString('HAnimJointAppearanceRed'),
                                          material_ : 
                                            Material(
                                              diffuseColor_ : SFColor([SFDouble(1), SFDouble(0), SFDouble(0)]))))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('MC12toCMC1'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.1,0.1,0]),SFVec3f([-0.2,0.15,0])]))))]),
                          /*thumb finger*/

                            HAnimJoint(
                              name_ : SFString('r_carpometacarpal_1'),
                              DEF_ : SFString('hanim_r_carpometacarpal_1'),
                              center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.15), SFDouble(0)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_metacarpal_1'),
                                  DEF_ : SFString('hanim_r_metacarpal_1'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.15), SFDouble(0)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('CMC1toMCP1xxx'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.2,0.15,0]),SFVec3f([-0.3,0.3,0])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_metacarpophalangeal_1'),
                                  DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                  center_ : SFVec3f([SFDouble(-0.3), SFDouble(0.3), SFDouble(0)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_carpal_proximal_phalanx_1'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_1'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.3), SFDouble(0.3), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedLineSet(
                                              DEF_ : SFString('MCP11toIP1'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.3,0.3,0]),SFVec3f([-0.35,0.4,0])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_carpal_interphalangeal_1'),
                                      DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                      center_ : SFVec3f([SFDouble(-0.35), SFDouble(0.4), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_carpal_distal_phalanx_1'),
                                          DEF_ : SFString('hanim_r_carpal_distal_phalanx_1'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.35), SFDouble(0.4), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  DEF_ : SFString('fingertip_r_carpal_interphalangeal_1'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.35,0.4,0]),SFVec3f([-0.36,0.45,0])]))))])])])])]),
                      /*MC2*/

                        HAnimJoint(
                          name_ : SFString('r_midcarpal_2'),
                          DEF_ : SFString('hanim_r_midcarpal_2'),
                          center_ : SFVec3f([SFDouble(-0.07), SFDouble(0.07), SFDouble(0)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_trapezoid'),
                              DEF_ : SFString('hanim_r_trapezoid'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(-0.07), SFDouble(0.07), SFDouble(0)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimNewJointShape'))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('MC12toCMC2'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([-0.1,0.1,0]),SFVec3f([-0.1,0.2,0])]))))]),
                          /*index finger*/

                            HAnimJoint(
                              name_ : SFString('r_carpometacarpal_2'),
                              DEF_ : SFString('hanim_r_carpometacarpal_2'),
                              center_ : SFVec3f([SFDouble(-0.1), SFDouble(0.2), SFDouble(0)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_metacarpal_2'),
                                  DEF_ : SFString('hanim_r_metacarpal_2'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.1), SFDouble(0.2), SFDouble(0)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('CMC2toMCP2'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.1,0.2,0]),SFVec3f([-0.15,0.5,0])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_metacarpophalangeal_2'),
                                  DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                  center_ : SFVec3f([SFDouble(-0.15), SFDouble(0.5), SFDouble(0)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_carpal_proximal_phalanx_2'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_2'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.15), SFDouble(0.5), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedLineSet(
                                              DEF_ : SFString('MCP2toPIP2'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.15,0.5,0]),SFVec3f([-0.2,0.7,0])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                      center_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_carpal_middle_phalanx_2'),
                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_2'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.2), SFDouble(0.7), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  DEF_ : SFString('PIP2toDIP2'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.2,0.7,0]),SFVec3f([-0.24,0.87,0])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                          center_ : SFVec3f([SFDouble(-0.24), SFDouble(0.87), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_carpal_distal_phalanx_2'),
                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.24), SFDouble(0.87), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      DEF_ : SFString('fingertip_r_carpal_distal_interphalangeal_2'),
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.24,0.87,0]),SFVec3f([-0.26,0.93,0])]))))])])])])])]),
                      /*MC3*/

                        HAnimJoint(
                          name_ : SFString('r_midcarpal_3'),
                          DEF_ : SFString('hanim_r_midcarpal_3'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(0.07), SFDouble(0)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_capitate'),
                              DEF_ : SFString('hanim_r_capitate'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(0.07), SFDouble(0)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimNewJointShape'))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('MC3toCMC3'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,0.07,0]),SFVec3f([0,0.2,0])]))))]),
                          /*Middle fingle*/

                            HAnimJoint(
                              name_ : SFString('r_carpometacarpal_3'),
                              DEF_ : SFString('hanim_r_carpometacarpal_3'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_metacarpal_3'),
                                  DEF_ : SFString('hanim_r_metacarpal_3'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(0.2), SFDouble(0)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('CMC3toMCP3'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,0.2,0]),SFVec3f([-0.03,0.5,0])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_metacarpophalangeal_3'),
                                  DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                  center_ : SFVec3f([SFDouble(-0.03), SFDouble(0.5), SFDouble(0)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_carpal_proximal_phalanx_3'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_3'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.03), SFDouble(0.5), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedLineSet(
                                              DEF_ : SFString('MCP3toPIP3'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.03,0.5,0]),SFVec3f([-0.05,0.75,0])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                      center_ : SFVec3f([SFDouble(-0.05), SFDouble(0.75), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_carpal_middle_phalanx_3'),
                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_3'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.05), SFDouble(0.75), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  DEF_ : SFString('PIP3toDIP3'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.05,0.75,0]),SFVec3f([-0.08,0.96,0])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                          center_ : SFVec3f([SFDouble(-0.08), SFDouble(0.96), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_carpal_distal_phalanx_3'),
                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.08), SFDouble(0.96), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      DEF_ : SFString('fingertip_r_carpal_distal_interphalangeal_3'),
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.08,0.96,0]),SFVec3f([-0.09,1.05,0])]))))])])])])])]),
                      /*MC4_5*/

                        HAnimJoint(
                          name_ : SFString('r_midcarpal_4_5'),
                          DEF_ : SFString('hanim_r_midcarpal_4_5'),
                          center_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimSegment(
                              name_ : SFString('r_hamate'),
                              DEF_ : SFString('hanim_r_hamate'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.1), SFDouble(0)]),
                                  child_ : 
                                    Shape(
                                      USE_ : SFString('HAnimNewJointShape'))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('MC45toCMC4'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.1,0.1,0]),SFVec3f([0.1,0.2,0])])))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('MC45toCMC5'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.1,0.1,0]),SFVec3f([0.15,0.17,0])]))))]),
                          /*ring finger*/

                            HAnimJoint(
                              name_ : SFString('r_carpometacarpal_4'),
                              DEF_ : SFString('hanim_r_carpometacarpal_4'),
                              center_ : SFVec3f([SFDouble(0.1), SFDouble(0.2), SFDouble(0)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_metacarpal_4'),
                                  DEF_ : SFString('hanim_r_metacarpal_4'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.2), SFDouble(0)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('CMC4toMCP4'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.1,0.2,0]),SFVec3f([0.1,0.47,0])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_metacarpophalangeal_4'),
                                  DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                  center_ : SFVec3f([SFDouble(0.1), SFDouble(0.47), SFDouble(0)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_carpal_proximal_phalanx_4'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_4'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.47), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedLineSet(
                                              DEF_ : SFString('MCP4toPIP4'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.1,0.47,0]),SFVec3f([0.1,0.7,0])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                      center_ : SFVec3f([SFDouble(0.1), SFDouble(0.7), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_carpal_middle_phalanx_4'),
                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_4'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.7), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  DEF_ : SFString('PIP4toDIP4'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.1,0.7,0]),SFVec3f([0.1,0.93,0])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                          center_ : SFVec3f([SFDouble(0.1), SFDouble(0.93), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_carpal_distal_phalanx_4'),
                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_4'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.1), SFDouble(0.93), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      DEF_ : SFString('fingertip_r_carpal_distal_interphalangeal_4'),
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.1,0.93,0]),SFVec3f([0.1,1,0])]))))])])])])]),
                          /*pinky finger*/

                            HAnimJoint(
                              name_ : SFString('r_carpometacarpal_5'),
                              DEF_ : SFString('hanim_r_carpometacarpal_5'),
                              center_ : SFVec3f([SFDouble(0.15), SFDouble(0.17), SFDouble(0)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimSegment(
                                  name_ : SFString('r_metacarpal_5'),
                                  DEF_ : SFString('hanim_r_metacarpal_5'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(0.17), SFDouble(0)]),
                                      child_ : 
                                        Shape(
                                          USE_ : SFString('HAnimJointShape'))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('CMC5toMCP5'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.15,0.17,0]),SFVec3f([0.2,0.4,0])]))))]),

                                HAnimJoint(
                                  name_ : SFString('r_metacarpophalangeal_5'),
                                  DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                  center_ : SFVec3f([SFDouble(0.2), SFDouble(0.4), SFDouble(0)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      name_ : SFString('r_carpal_proximal_phalanx_5'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_phalanx_5'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.4), SFDouble(0)]),
                                          child_ : 
                                            Shape(
                                              USE_ : SFString('HAnimJointShape'))),

                                        Shape(
                                          appearance_ : 
                                            Appearance(
                                              material_ : 
                                                Material(
                                                  emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                          geometry_ : 
                                            IndexedLineSet(
                                              DEF_ : SFString('MCP5toPIP5'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.2,0.4,0]),SFVec3f([0.23,0.63,0])]))))]),

                                    HAnimJoint(
                                      name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                      DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                      center_ : SFVec3f([SFDouble(0.23), SFDouble(0.63), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          name_ : SFString('r_carpal_middle_phalanx_5'),
                                          DEF_ : SFString('hanim_r_carpal_middle_phalanx_5'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.23), SFDouble(0.63), SFDouble(0)]),
                                              child_ : 
                                                Shape(
                                                  USE_ : SFString('HAnimJointShape'))),

                                            Shape(
                                              appearance_ : 
                                                Appearance(
                                                  material_ : 
                                                    Material(
                                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                              geometry_ : 
                                                IndexedLineSet(
                                                  DEF_ : SFString('PIP5toDIP5'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.23,0.63,0]),SFVec3f([0.25,0.79,0])]))))]),

                                        HAnimJoint(
                                          name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                          DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                          center_ : SFVec3f([SFDouble(0.25), SFDouble(0.79), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              name_ : SFString('r_carpal_distal_phalanx_5'),
                                              DEF_ : SFString('hanim_r_carpal_distal_phalanx_5'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.25), SFDouble(0.79), SFDouble(0)]),
                                                  child_ : 
                                                    Shape(
                                                      USE_ : SFString('HAnimJointShape'))),

                                                Shape(
                                                  appearance_ : 
                                                    Appearance(
                                                      material_ : 
                                                        Material(
                                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                                  geometry_ : 
                                                    IndexedLineSet(
                                                      DEF_ : SFString('fingertip_r_carpal_distal_interphalangeal_5'),
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([0.25,0.79,0]),SFVec3f([0.26,0.85,0])]))))])])])])])])])]),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal'))])]));
void main() { exit(0); }
