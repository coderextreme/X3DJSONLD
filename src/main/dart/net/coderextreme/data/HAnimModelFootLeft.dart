// Copyright 2021 by John Carlson.  All rights reserved.
import 'dart:io';
import '../x3d.dart';
var X3D0 =  X3D(

      profile_ : SFString('Immersive'),
      version_ : SFString('4.0'),
      head_ : 
        head(
          meta_ : [
            meta(
              name_ : SFString('title'),
              content_ : SFString('HAnimModelFootLeft.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('Left foot, using high-fidelity definitions for HAnim version 2.0')),

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
              name_ : SFString('warning'),
              content_ : SFString('not yet to scale')),

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
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet')),

            meta(
              name_ : SFString('reference'),
              content_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints')),

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
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit')),
          component_ : 
            component(
              name_ : SFString('HAnim'),
              level_ : 1)]),
      Scene_ : 
        Scene(
          children_ : [
            WorldInfo(
              title_ : SFString('HAnimModelFootLeft.x3d')),

            HAnimHumanoid(
              DEF_ : SFString('hanim_Foot_Left'),
              version_ : SFString('2.0'),
              name_ : SFString('Foot_Left'),
              loa_ : 4,
              metadata_ : [
                MetadataSet(
                  name_ : SFString('HAnimHumanoid.info'),
                  reference_ : SFString('https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid'),
                  value_ : 
                    MetadataString(
                      name_ : SFString('authorName'))),
              joints_ : [
                HAnimJoint(
                  DEF_ : SFString('hanim_humanoid_root'),
                  name_ : SFString('humanoid_root'),
                  children_ : [
                    HAnimJoint(
                      DEF_ : SFString('hanim_l_talocrural'),
                      description_ : SFString('connection joint of foot to leg above'),
                      name_ : SFString('l_talocrural'),
                      children_ : [
                        HAnimSegment(
                          DEF_ : SFString('hanim_l_talus'),
                          name_ : SFString('l_talus'),
                          children_ : [
                            Transform(
                              child_ : 
                                Shape(
                                  DEF_ : SFString('HAnimJointShape'),
                                  appearance_ : 
                                    Appearance(
                                      DEF_ : SFString('HAnimJointAppearance'),
                                      material_ : 
                                        Material(
                                          diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(1)]))),
                                  geometry_ : 
                                    Sphere(
                                      radius_ : 0.025))),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                IndexedLineSet(
                                  DEF_ : SFString('TCtoTCN'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0,-0.3,0])])))),

                            Shape(
                              appearance_ : 
                                Appearance(
                                  material_ : 
                                    Material(
                                      emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                              geometry_ : 
                                IndexedLineSet(
                                  DEF_ : SFString('TCtoCC'),
                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                  coord_ : 
                                    Coordinate(
                                      point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.2,0.3,0])]))))]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                          name_ : SFString('l_talocalcaneonavicular'),
                          center_ : SFVec3f([SFDouble(0), SFDouble(-0.3), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_navicular'),
                              name_ : SFString('l_navicular'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0), SFDouble(-0.3), SFDouble(0)]),
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
                                      DEF_ : SFString('TCNtoCN1'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,-0.3,0]),SFVec3f([-0.1,-0.45,0])])))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('TCNtoCN2'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,-0.3,0]),SFVec3f([0,-0.45,0])])))),

                                Shape(
                                  appearance_ : 
                                    Appearance(
                                      material_ : 
                                        Material(
                                          emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                  geometry_ : 
                                    IndexedLineSet(
                                      DEF_ : SFString('TCNtoCN3'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0,-0.3,0]),SFVec3f([0.1,-0.4,0])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_cuneonavicular_1'),
                              name_ : SFString('l_cuneonavicular_1'),
                              center_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.45), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_cuneiform_1'),
                                  name_ : SFString('l_cuneiform_1'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.45), SFDouble(0)]),
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
                                          DEF_ : SFString('CN1toTMT1'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([-0.1,-0.45,0]),SFVec3f([-0.1,-0.6,0])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                  name_ : SFString('l_tarsometatarsal_1'),
                                  center_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.6), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_metatarsal_1'),
                                      name_ : SFString('l_metatarsal_1'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.6), SFDouble(0)]),
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
                                              DEF_ : SFString('TMT1toMTP1'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([-0.1,-0.6,0]),SFVec3f([-0.1,-0.9,0])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                      name_ : SFString('l_metatarsophalangeal_1'),
                                      center_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.9), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_1'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_1'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(-0.1), SFDouble(-0.9), SFDouble(0)]),
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
                                                  DEF_ : SFString('MTP1toIP1'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([-0.1,-0.9,0]),SFVec3f([-0.1,-1.05,0])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'),
                                          name_ : SFString('l_tarsal_interphalangeal_1'),
                                          center_ : SFVec3f([SFDouble(-0.1), SFDouble(-1.05), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_distal_phalanx_1'),
                                              name_ : SFString('l_tarsal_distal_phalanx_1'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(-0.1), SFDouble(-1.05), SFDouble(0)]),
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
                                                      DEF_ : SFString('tiptoe_l_tarsal_distal_interphalangeal_1'),
                                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                      coord_ : 
                                                        Coordinate(
                                                          point_ : MFVec3f([SFVec3f([-0.1,-1.05,0]),SFVec3f([-0.1,-1.1,0])]))))])])])])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_cuneonavicular_2'),
                              name_ : SFString('l_cuneonavicular_2'),
                              center_ : SFVec3f([SFDouble(0), SFDouble(-0.45), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_cuneiform_2'),
                                  name_ : SFString('l_cuneiform_2'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0), SFDouble(-0.45), SFDouble(0)]),
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
                                          DEF_ : SFString('CN2toTMT2'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0,-0.45,0]),SFVec3f([0.05,-0.6,0])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                  name_ : SFString('l_tarsometatarsal_2'),
                                  center_ : SFVec3f([SFDouble(0.05), SFDouble(-0.6), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_metatarsal_2'),
                                      name_ : SFString('l_metatarsal_2'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.05), SFDouble(-0.6), SFDouble(0)]),
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
                                              DEF_ : SFString('TMT2toMTP2'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.05,-0.6,0]),SFVec3f([0.05,-0.9,0])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                      name_ : SFString('l_metatarsophalangeal_2'),
                                      center_ : SFVec3f([SFDouble(0.05), SFDouble(-0.9), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_2'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_2'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.05), SFDouble(-0.9), SFDouble(0)]),
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
                                                  DEF_ : SFString('MTP2toPIP2'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.05,-0.9,0]),SFVec3f([0.05,-1.05,0])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_1'),
                                          name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                          center_ : SFVec3f([SFDouble(0.05), SFDouble(-1.05), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_1'),
                                              name_ : SFString('l_tarsal_middle_phalanx_2'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.05), SFDouble(-1.05), SFDouble(0)]),
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
                                                          point_ : MFVec3f([SFVec3f([0.05,-1.05,0]),SFVec3f([0.05,-1.12,0])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_1'),
                                              name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                              center_ : SFVec3f([SFDouble(0.05), SFDouble(-1.12), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_2'),
                                                  name_ : SFString('l_tarsal_distal_phalanx_2'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.05), SFDouble(-1.12), SFDouble(0)]),
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
                                                          DEF_ : SFString('tiptoe_l_tarsal_distal_phalanx_1'),
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.05,-1.12,0]),SFVec3f([0.05,-1.16,0])]))))])])])])])]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_cuneonavicular_3'),
                              name_ : SFString('l_cuneonavicular_3'),
                              center_ : SFVec3f([SFDouble(0.1), SFDouble(-0.4), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_cuneiform_3'),
                                  name_ : SFString('l_cuneiform_3'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.1), SFDouble(-0.4), SFDouble(0)]),
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
                                          DEF_ : SFString('CN3toTMT3'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.1,-0.4,0]),SFVec3f([0.15,-0.6,0])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                  name_ : SFString('l_tarsometatarsal_3'),
                                  center_ : SFVec3f([SFDouble(0.15), SFDouble(-0.6), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_metatarsal_3'),
                                      name_ : SFString('l_metatarsal_3'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.15), SFDouble(-0.6), SFDouble(0)]),
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
                                              DEF_ : SFString('TMT3toMTP3'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.15,-0.6,0]),SFVec3f([0.15,-0.9,0])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                      name_ : SFString('l_metatarsophalangeal_3'),
                                      center_ : SFVec3f([SFDouble(0.15), SFDouble(-0.9), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_3'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_3'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.15), SFDouble(-0.9), SFDouble(0)]),
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
                                                  DEF_ : SFString('MTP3toPIP3'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.15,-0.9,0]),SFVec3f([0.15,-1.05,0])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                          name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                          center_ : SFVec3f([SFDouble(0.15), SFDouble(-1.05), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_2'),
                                              name_ : SFString('l_tarsal_middle_phalanx_3'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.15), SFDouble(-1.05), SFDouble(0)]),
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
                                                          point_ : MFVec3f([SFVec3f([0.15,-1.05,0]),SFVec3f([0.15,-1.13,0])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                              name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                              center_ : SFVec3f([SFDouble(0.15), SFDouble(-1.13), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_3'),
                                                  name_ : SFString('l_tarsal_distal_phalanx_3'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.15), SFDouble(-1.13), SFDouble(0)]),
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
                                                          DEF_ : SFString('tiptoe_l_tarsal_distal_interphalangeal_2'),
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.15,-1.13,0]),SFVec3f([0.15,-1.16,0])]))))])])])])])])]),

                        HAnimJoint(
                          DEF_ : SFString('hanim_l_calcaneocuboid'),
                          name_ : SFString('l_calcaneocuboid'),
                          center_ : SFVec3f([SFDouble(0.2), SFDouble(0.3), SFDouble(0)]),
                          children_ : [
                            HAnimSegment(
                              DEF_ : SFString('hanim_l_calcaneus'),
                              name_ : SFString('l_calcaneus'),
                              children_ : [
                                Transform(
                                  translation_ : SFVec3f([SFDouble(0.2), SFDouble(0.3), SFDouble(0)]),
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
                                      DEF_ : SFString('CCtoTT'),
                                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                      coord_ : 
                                        Coordinate(
                                          point_ : MFVec3f([SFVec3f([0.2,0.3,0]),SFVec3f([0.21,-0.3,0])]))))]),

                            HAnimJoint(
                              DEF_ : SFString('hanim_l_transversetarsal'),
                              name_ : SFString('l_transversetarsal'),
                              center_ : SFVec3f([SFDouble(0.21), SFDouble(-0.3), SFDouble(0)]),
                              children_ : [
                                HAnimSegment(
                                  DEF_ : SFString('hanim_l_cuboid'),
                                  name_ : SFString('l_cuboid'),
                                  children_ : [
                                    Transform(
                                      translation_ : SFVec3f([SFDouble(0.21), SFDouble(-0.3), SFDouble(0)]),
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
                                          DEF_ : SFString('TTtoTMT4'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.21,-0.3,0]),SFVec3f([0.25,-0.58,0])])))),

                                    Shape(
                                      appearance_ : 
                                        Appearance(
                                          material_ : 
                                            Material(
                                              emissiveColor_ : SFColor([SFDouble(1), SFDouble(1), SFDouble(1)]))),
                                      geometry_ : 
                                        IndexedLineSet(
                                          DEF_ : SFString('TTtoTMT5'),
                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                          coord_ : 
                                            Coordinate(
                                              point_ : MFVec3f([SFVec3f([0.21,-0.3,0]),SFVec3f([0.33,-0.52,0])]))))]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                  name_ : SFString('l_tarsometatarsal_4'),
                                  center_ : SFVec3f([SFDouble(0.25), SFDouble(-0.58), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_metatarsal_4'),
                                      name_ : SFString('l_metatarsal_4'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.25), SFDouble(-0.58), SFDouble(0)]),
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
                                              DEF_ : SFString('TMT4toMTP4'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.25,-0.58,0]),SFVec3f([0.25,-0.87,0])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                      name_ : SFString('l_metatarsophalangeal_4'),
                                      center_ : SFVec3f([SFDouble(0.25), SFDouble(-0.87), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_4'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_4'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.25), SFDouble(-0.87), SFDouble(0)]),
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
                                                  DEF_ : SFString('MTP4toPIP4'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.25,-0.87,0]),SFVec3f([0.25,-1,0])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                          name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                          center_ : SFVec3f([SFDouble(0.25), SFDouble(-1), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_3'),
                                              name_ : SFString('l_tarsal_middle_phalanx_4'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.25), SFDouble(-1), SFDouble(0)]),
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
                                                          point_ : MFVec3f([SFVec3f([0.25,-1,0]),SFVec3f([0.25,-1.1,0])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                              name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                              center_ : SFVec3f([SFDouble(0.25), SFDouble(-1.1), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_4'),
                                                  name_ : SFString('l_tarsal_distal_phalanx_4'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.25), SFDouble(-1.1), SFDouble(0)]),
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
                                                          DEF_ : SFString('tiptoe_l_tarsal_distal_interphalangeal_3'),
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.25,-1.1,0]),SFVec3f([0.25,-1.15,0])]))))])])])])]),

                                HAnimJoint(
                                  DEF_ : SFString('hanim_l_tarsometatarsal_5'),
                                  name_ : SFString('l_tarsometatarsal_5'),
                                  center_ : SFVec3f([SFDouble(0.33), SFDouble(-0.52), SFDouble(0)]),
                                  children_ : [
                                    HAnimSegment(
                                      DEF_ : SFString('hanim_l_metatarsal_5'),
                                      name_ : SFString('l_metatarsal_5'),
                                      children_ : [
                                        Transform(
                                          translation_ : SFVec3f([SFDouble(0.33), SFDouble(-0.52), SFDouble(0)]),
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
                                              DEF_ : SFString('TMT5toMTP5'),
                                              coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                              coord_ : 
                                                Coordinate(
                                                  point_ : MFVec3f([SFVec3f([0.33,-0.52,0]),SFVec3f([0.34,-0.8,0])]))))]),

                                    HAnimJoint(
                                      DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                      name_ : SFString('l_metatarsophalangeal_5'),
                                      center_ : SFVec3f([SFDouble(0.34), SFDouble(-0.8), SFDouble(0)]),
                                      children_ : [
                                        HAnimSegment(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_phalanx_5'),
                                          name_ : SFString('l_tarsal_proximal_phalanx_5'),
                                          children_ : [
                                            Transform(
                                              translation_ : SFVec3f([SFDouble(0.34), SFDouble(-0.8), SFDouble(0)]),
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
                                                  DEF_ : SFString('MTP5toPIP5'),
                                                  coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                  coord_ : 
                                                    Coordinate(
                                                      point_ : MFVec3f([SFVec3f([0.34,-0.8,0]),SFVec3f([0.34,-0.95,0])]))))]),

                                        HAnimJoint(
                                          DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                          name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                          center_ : SFVec3f([SFDouble(0.34), SFDouble(-0.95), SFDouble(0)]),
                                          children_ : [
                                            HAnimSegment(
                                              DEF_ : SFString('hanim_l_tarsal_middle_phalanx_4'),
                                              name_ : SFString('l_tarsal_middle_phalanx_5'),
                                              children_ : [
                                                Transform(
                                                  translation_ : SFVec3f([SFDouble(0.34), SFDouble(-0.95), SFDouble(0)]),
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
                                                          point_ : MFVec3f([SFVec3f([0.34,-0.95,0]),SFVec3f([0.34,-1.05,0])]))))]),

                                            HAnimJoint(
                                              DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                              name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                              center_ : SFVec3f([SFDouble(0.34), SFDouble(-1.05), SFDouble(0)]),
                                              children_ : [
                                                HAnimSegment(
                                                  DEF_ : SFString('hanim_l_tarsal_distal_phalanx_5'),
                                                  name_ : SFString('l_tarsal_distal_phalanx_5'),
                                                  children_ : [
                                                    Transform(
                                                      translation_ : SFVec3f([SFDouble(0.34), SFDouble(-1.05), SFDouble(0)]),
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
                                                          DEF_ : SFString('tiptoe_l_tarsal_distal_interphalangeal_4'),
                                                          coordIndex_ : MFInt32([SFInt32(0), SFInt32(1)]),
                                                          coord_ : 
                                                            Coordinate(
                                                              point_ : MFVec3f([SFVec3f([0.34,-1.05,0]),SFVec3f([0.34,-1.08,0])]))))])])])])])])])])]),
              segments_ : [
                HAnimSegment(
                  USE_ : SFString('hanim_l_calcaneus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuboid')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_cuneiform_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_metatarsal_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_navicular')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_talus')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_distal_phalanx_5')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_middle_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_1')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_2')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_3')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_4')),

                HAnimSegment(
                  USE_ : SFString('hanim_l_tarsal_proximal_phalanx_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_transversetarsal'))])]));
void main() { exit(0); }
