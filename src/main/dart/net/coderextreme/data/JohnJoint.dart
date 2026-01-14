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
              content_ : SFString('JohnJoint.x3d')),

            meta(
              name_ : SFString('identifier'),
              content_ : SFString('https://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnJoint.x3d')),

            meta(
              name_ : SFString('description'),
              content_ : SFString('An attempt at a standard LOA-4 skeleton')),

            meta(
              name_ : SFString('generator'),
              content_ : SFString('h6.pl')),

            meta(
              name_ : SFString('creator'),
              content_ : SFString('John Carlson')),

            meta(
              name_ : SFString('created'),
              content_ : SFString('12 January 2023')),

            meta(
              name_ : SFString('license'),
              content_ : SFString('../license.html'))]),
      Scene_ : 
        Scene(
          children_ : [
            Transform(
              /*DEF for markerfor XYZ axes*/
              child_ : 
                Shape(
                  DEF_ : SFString('AxisLinesShape'),
                  /*RGB lines showing XYZ axes*/
                  geometry_ : 
                    IndexedLineSet(
                      colorIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(2)]),
                      colorPerVertex_ : false,
                      coordIndex_ : MFInt32([SFInt32(0), SFInt32(1), SFInt32(-1), SFInt32(0), SFInt32(2), SFInt32(-1), SFInt32(0), SFInt32(3), SFInt32(-1)]),
                      coord_ : 
                        Coordinate(
                          point_ : MFVec3f([SFVec3f([0,0,0]),SFVec3f([0.1,0,0]),SFVec3f([0,0.1,0]),SFVec3f([0,0,0.1])])),
                      color_ : 
                        Color(
                          color_ : MFColor([SFColor(1), SFColor(0), SFColor(0), SFColor(0), SFColor(0.6), SFColor(0), SFColor(0), SFColor(0), SFColor(1)]))))),

            Group(
              /*DEFS for markers of skeleton joints, segments, and sites*/
              children_ : [
                Transform(
                  /*<Transform translation='0 2 0'> <Shape DEF='HAnimRootShape'> <Sphere radius='0.02' /> <Appearance> <Material DEF='HAnimRootMaterial' diffuseColor='0.8 0 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/
                  children_ : [
                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.1), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimJointShape'),
                          geometry_ : 
                            Sphere(
                              radius_ : 0.02),
                          appearance_ : 
                            Appearance(
                              material_ : 
                                Material(
                                  DEF_ : SFString('HAnimJointMaterial'),
                                  diffuseColor_ : SFColor([SFDouble(0), SFDouble(0), SFDouble(0.8)]),
                                  transparency_ : 0.3)))),

                    Transform(
                      translation_ : SFVec3f([SFDouble(0), SFDouble(2.05), SFDouble(0)]),
                      child_ : 
                        Shape(
                          DEF_ : SFString('HAnimSegmentLine'),
                          geometry_ : 
                            LineSet(
                              vertexCount_ : MFInt32([SFInt32(2)]),
                              color_ : 
                                ColorRGBA(
                                  DEF_ : SFString('HAnimSegmentLineColorRGBA'),
                                  color_ : MFColorRGBA([SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(1), SFColorRGBA(0), SFColorRGBA(0.1)])),
                              coord_ : 
                                Coordinate(
                                  point_ : MFVec3f([SFVec3f([-0.05,0,0]),SFVec3f([0.05,0,0])]))))),
                  /*<Transform translation='0 2.1 0'> <Shape DEF='HAnimSiteShape'> <IndexedFaceSet DEF='DiamondIFS' creaseAngle='0.5' solid='false' coordIndex='0 1 2 -1 0 2 3 -1 0 3 4 -1 0 4 1 -1 5 2 1 -1 5 3 2 -1 5 4 3 -1 5 1 4 -1'> <ColorRGBA DEF='HAnimSiteColorRGBA' color='1 1 0 1 1 1 0 0.1'/> <Coordinate point='0 0.01 0 -0.01 0 0 0 0 0.01 0.01 0 0 0 0 -0.01 0 -0.01 0'/> </IndexedFaceSet> <Appearance> <Material diffuseColor='1 1 0' transparency='0.3'/> </Appearance> </Shape> </Transform>*/])]),

            NavigationInfo(
              speed_ : 1.5),

            Viewpoint(
              description_ : SFString('default')),

            HAnimHumanoid(
              name_ : SFString('HAnim'),
              DEF_ : SFString('hanim_HAnim'),
              info_ : MFString([SFString("humanoidVersion=2.0")]),
              version_ : SFString('2.0'),
              joints_ : [
                HAnimJoint(
                  name_ : SFString('humanoid_root'),
                  DEF_ : SFString('hanim_humanoid_root'),
                  center_ : SFVec3f([SFDouble(0), SFDouble(0.824), SFDouble(0.0277)]),
                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                  children_ : [
                    HAnimJoint(
                      name_ : SFString('sacroiliac'),
                      DEF_ : SFString('hanim_sacroiliac'),
                      center_ : SFVec3f([SFDouble(0), SFDouble(0.9149), SFDouble(0.0016)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('l_hip'),
                          DEF_ : SFString('hanim_l_hip'),
                          center_ : SFVec3f([SFDouble(0.0961), SFDouble(0.9124), SFDouble(-0.0001)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('l_knee'),
                              DEF_ : SFString('hanim_l_knee'),
                              center_ : SFVec3f([SFDouble(0.104), SFDouble(0.4867), SFDouble(0.0308)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('l_talocrural'),
                                  DEF_ : SFString('hanim_l_talocrural'),
                                  center_ : SFVec3f([SFDouble(0.1101), SFDouble(0.0656), SFDouble(-0.0736)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('l_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_l_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_l_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('l_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_l_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('l_calcaneocuboid'),
                                      DEF_ : SFString('hanim_l_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('l_transversetarsal'),
                                          DEF_ : SFString('hanim_l_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('l_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_l_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('l_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_l_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('l_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('l_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_l_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                        HAnimJoint(
                          name_ : SFString('r_hip'),
                          DEF_ : SFString('hanim_r_hip'),
                          center_ : SFVec3f([SFDouble(-0.095), SFDouble(0.9171), SFDouble(0.0029)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('r_knee'),
                              DEF_ : SFString('hanim_r_knee'),
                              center_ : SFVec3f([SFDouble(-0.0867), SFDouble(0.4913), SFDouble(0.0318)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('r_talocrural'),
                                  DEF_ : SFString('hanim_r_talocrural'),
                                  center_ : SFVec3f([SFDouble(-0.0801), SFDouble(0.0712), SFDouble(-0.0766)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('r_talocalcaneonavicular'),
                                      DEF_ : SFString('hanim_r_talocalcaneonavicular'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_1'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_1'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_1'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_1'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_1'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_1'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_interphalangeal_1'),
                                                      DEF_ : SFString('hanim_r_tarsal_interphalangeal_1'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_2'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_2'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_2'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_2'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_2'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_2'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_2'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_2'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_2'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                        HAnimJoint(
                                          name_ : SFString('r_cuneonavicular_3'),
                                          DEF_ : SFString('hanim_r_cuneonavicular_3'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_3'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_3'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_3'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_3'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_3'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_3'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_3'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])]),

                                    HAnimJoint(
                                      name_ : SFString('r_calcaneocuboid'),
                                      DEF_ : SFString('hanim_r_calcaneocuboid'),
                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('r_transversetarsal'),
                                          DEF_ : SFString('hanim_r_transversetarsal'),
                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_4'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_4'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_4'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_4'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_4'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_4'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_4'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                            HAnimJoint(
                                              name_ : SFString('r_tarsometatarsal_5'),
                                              DEF_ : SFString('hanim_r_tarsometatarsal_5'),
                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('r_metatarsophalangeal_5'),
                                                  DEF_ : SFString('hanim_r_metatarsophalangeal_5'),
                                                  center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('r_tarsal_proximal_interphalangeal_5'),
                                                      DEF_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5'),
                                                      center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('r_tarsal_distal_interphalangeal_5'),
                                                          DEF_ : SFString('hanim_r_tarsal_distal_interphalangeal_5'),
                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])]),

                    HAnimJoint(
                      name_ : SFString('vl5'),
                      DEF_ : SFString('hanim_vl5'),
                      center_ : SFVec3f([SFDouble(0.0028), SFDouble(1.0568), SFDouble(-0.0776)]),
                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                      children_ : [
                        HAnimJoint(
                          name_ : SFString('vl4'),
                          DEF_ : SFString('hanim_vl4'),
                          center_ : SFVec3f([SFDouble(0.0035), SFDouble(1.0925), SFDouble(-0.0787)]),
                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                          children_ : [
                            HAnimJoint(
                              name_ : SFString('vl3'),
                              DEF_ : SFString('hanim_vl3'),
                              center_ : SFVec3f([SFDouble(0.0041), SFDouble(1.1276), SFDouble(-0.0796)]),
                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                              children_ : [
                                HAnimJoint(
                                  name_ : SFString('vl2'),
                                  DEF_ : SFString('hanim_vl2'),
                                  center_ : SFVec3f([SFDouble(0.0045), SFDouble(1.1546), SFDouble(-0.08)]),
                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                  children_ : [
                                    HAnimJoint(
                                      name_ : SFString('vl1'),
                                      DEF_ : SFString('hanim_vl1'),
                                      center_ : SFVec3f([SFDouble(0.0048), SFDouble(1.1912), SFDouble(-0.0805)]),
                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                      children_ : [
                                        HAnimJoint(
                                          name_ : SFString('vt12'),
                                          DEF_ : SFString('hanim_vt12'),
                                          center_ : SFVec3f([SFDouble(0.0051), SFDouble(1.2278), SFDouble(-0.0808)]),
                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                          children_ : [
                                            HAnimJoint(
                                              name_ : SFString('vt11'),
                                              DEF_ : SFString('hanim_vt11'),
                                              center_ : SFVec3f([SFDouble(0.0053), SFDouble(1.2679), SFDouble(-0.081)]),
                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                              children_ : [
                                                HAnimJoint(
                                                  name_ : SFString('vt10'),
                                                  DEF_ : SFString('hanim_vt10'),
                                                  center_ : SFVec3f([SFDouble(0.0056), SFDouble(1.2848), SFDouble(-0.0822)]),
                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                  children_ : [
                                                    HAnimJoint(
                                                      name_ : SFString('vt9'),
                                                      DEF_ : SFString('hanim_vt9'),
                                                      center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3126), SFDouble(-0.0838)]),
                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                      children_ : [
                                                        HAnimJoint(
                                                          name_ : SFString('vt8'),
                                                          DEF_ : SFString('hanim_vt8'),
                                                          center_ : SFVec3f([SFDouble(0.0057), SFDouble(1.3382), SFDouble(-0.0845)]),
                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                          children_ : [
                                                            HAnimJoint(
                                                              name_ : SFString('vt7'),
                                                              DEF_ : SFString('hanim_vt7'),
                                                              center_ : SFVec3f([SFDouble(0.0058), SFDouble(1.3625), SFDouble(-0.0833)]),
                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                              children_ : [
                                                                HAnimJoint(
                                                                  name_ : SFString('vt6'),
                                                                  DEF_ : SFString('hanim_vt6'),
                                                                  center_ : SFVec3f([SFDouble(0.0059), SFDouble(1.3866), SFDouble(-0.08)]),
                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                  children_ : [
                                                                    HAnimJoint(
                                                                      name_ : SFString('vt5'),
                                                                      DEF_ : SFString('hanim_vt5'),
                                                                      center_ : SFVec3f([SFDouble(0.006), SFDouble(1.4102), SFDouble(-0.0745)]),
                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                      children_ : [
                                                                        HAnimJoint(
                                                                          name_ : SFString('vt4'),
                                                                          DEF_ : SFString('hanim_vt4'),
                                                                          center_ : SFVec3f([SFDouble(0.0061), SFDouble(1.432), SFDouble(-0.0675)]),
                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                          children_ : [
                                                                            HAnimJoint(
                                                                              name_ : SFString('vt3'),
                                                                              DEF_ : SFString('hanim_vt3'),
                                                                              center_ : SFVec3f([SFDouble(0.0062), SFDouble(1.4583), SFDouble(-0.057)]),
                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                              children_ : [
                                                                                HAnimJoint(
                                                                                  name_ : SFString('vt2'),
                                                                                  DEF_ : SFString('hanim_vt2'),
                                                                                  center_ : SFVec3f([SFDouble(0.0063), SFDouble(1.4761), SFDouble(-0.0484)]),
                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                  children_ : [
                                                                                    HAnimJoint(
                                                                                      name_ : SFString('vt1'),
                                                                                      DEF_ : SFString('hanim_vt1'),
                                                                                      center_ : SFVec3f([SFDouble(0.0065), SFDouble(1.4951), SFDouble(-0.0387)]),
                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                      children_ : [
                                                                                        HAnimJoint(
                                                                                          name_ : SFString('vc7'),
                                                                                          DEF_ : SFString('hanim_vc7'),
                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5132), SFDouble(-0.0301)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('vc6'),
                                                                                              DEF_ : SFString('hanim_vc6'),
                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5357), SFDouble(-0.0143)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('vc5'),
                                                                                                  DEF_ : SFString('hanim_vc5'),
                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.552), SFDouble(-0.0082)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('vc4'),
                                                                                                      DEF_ : SFString('hanim_vc4'),
                                                                                                      center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5662), SFDouble(-0.0084)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('vc3'),
                                                                                                          DEF_ : SFString('hanim_vc3'),
                                                                                                          center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.58), SFDouble(-0.0103)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('vc2'),
                                                                                                              DEF_ : SFString('hanim_vc2'),
                                                                                                              center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.5928), SFDouble(-0.0103)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('vc1'),
                                                                                                                  DEF_ : SFString('hanim_vc1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.0066), SFDouble(1.6144), SFDouble(-0.0034)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('skullbase'),
                                                                                                                      DEF_ : SFString('hanim_skullbase'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.0044), SFDouble(1.6209), SFDouble(0.0236)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyelid_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyelid_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyeball_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyeball_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_l_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_eyebrow_joint'),
                                                                                                                          DEF_ : SFString('hanim_r_eyebrow_joint'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)])),

                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('temporomandibular'),
                                                                                                                          DEF_ : SFString('hanim_temporomandibular'),
                                                                                                                          center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('l_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_l_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(0.082), SFDouble(1.4488), SFDouble(-0.0353)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('l_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_l_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(0.0962), SFDouble(1.4269), SFDouble(-0.0424)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('l_shoulder'),
                                                                                                  DEF_ : SFString('hanim_l_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(0.2029), SFDouble(1.4376), SFDouble(-0.0387)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('l_elbow'),
                                                                                                      DEF_ : SFString('hanim_l_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(0.2014), SFDouble(1.1357), SFDouble(-0.0682)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('l_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_l_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(0.1984), SFDouble(0.8663), SFDouble(-0.0583)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1924), SFDouble(0.8472), SFDouble(-0.0534)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1951), SFDouble(0.8226), SFDouble(0.0246)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1955), SFDouble(0.8159), SFDouble(0.0464)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.8024), SFDouble(-0.028)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7815), SFDouble(-0.028)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2017), SFDouble(0.7363), SFDouble(-0.0248)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2028), SFDouble(0.7139), SFDouble(-0.0236)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.8029), SFDouble(-0.053)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1987), SFDouble(0.7818), SFDouble(-0.053)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.2013), SFDouble(0.7273), SFDouble(-0.0503)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.2026), SFDouble(0.7011), SFDouble(-0.0494)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('l_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_l_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.8019), SFDouble(-0.0794)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1956), SFDouble(0.7815), SFDouble(-0.0794)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1973), SFDouble(0.7287), SFDouble(-0.0777)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1983), SFDouble(0.7045), SFDouble(-0.0767)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('l_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_l_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.8066), SFDouble(-0.1036)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('l_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_l_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(0.1925), SFDouble(0.7866), SFDouble(-0.1036)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('l_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_l_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(0.1938), SFDouble(0.7452), SFDouble(-0.1024)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('l_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_l_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(0.1948), SFDouble(0.7277), SFDouble(-0.1017)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])]),

                                                                                        HAnimJoint(
                                                                                          name_ : SFString('r_sternoclavicular'),
                                                                                          DEF_ : SFString('hanim_r_sternoclavicular'),
                                                                                          center_ : SFVec3f([SFDouble(-0.0694), SFDouble(1.46), SFDouble(-0.033)]),
                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                          children_ : [
                                                                                            HAnimJoint(
                                                                                              name_ : SFString('r_acromioclavicular'),
                                                                                              DEF_ : SFString('hanim_r_acromioclavicular'),
                                                                                              center_ : SFVec3f([SFDouble(-0.0836), SFDouble(1.4281), SFDouble(-0.0401)]),
                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                              children_ : [
                                                                                                HAnimJoint(
                                                                                                  name_ : SFString('r_shoulder'),
                                                                                                  DEF_ : SFString('hanim_r_shoulder'),
                                                                                                  center_ : SFVec3f([SFDouble(-0.1907), SFDouble(1.4407), SFDouble(-0.0325)]),
                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                  children_ : [
                                                                                                    HAnimJoint(
                                                                                                      name_ : SFString('r_elbow'),
                                                                                                      DEF_ : SFString('hanim_r_elbow'),
                                                                                                      center_ : SFVec3f([SFDouble(-0.1949), SFDouble(1.1388), SFDouble(-0.062)]),
                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                      children_ : [
                                                                                                        HAnimJoint(
                                                                                                          name_ : SFString('r_radiocarpal'),
                                                                                                          DEF_ : SFString('hanim_r_radiocarpal'),
                                                                                                          center_ : SFVec3f([SFDouble(-0.1959), SFDouble(0.8694), SFDouble(-0.0521)]),
                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                          children_ : [
                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_1'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_1'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_1'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_1'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1899), SFDouble(0.8502), SFDouble(-0.0473)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_1'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_1'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1874), SFDouble(0.8256), SFDouble(0.0306)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_interphalangeal_1'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_interphalangeal_1'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1864), SFDouble(0.819), SFDouble(0.0506)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_2'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_2'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_2'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_2'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.8055), SFDouble(-0.0218)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_2'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_2'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1961), SFDouble(0.7846), SFDouble(-0.0218)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_2'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_2'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1954), SFDouble(0.7393), SFDouble(-0.0185)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_2'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_2'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1945), SFDouble(0.7169), SFDouble(-0.0173)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_3'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_3'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_3'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_3'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.806), SFDouble(-0.0468)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_3'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_3'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1972), SFDouble(0.7849), SFDouble(-0.0468)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_3'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_3'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.195), SFDouble(0.7304), SFDouble(-0.0441)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_3'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_3'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1939), SFDouble(0.7042), SFDouble(-0.0432)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])]),

                                                                                                            HAnimJoint(
                                                                                                              name_ : SFString('r_midcarpal_4_5'),
                                                                                                              DEF_ : SFString('hanim_r_midcarpal_4_5'),
                                                                                                              center_ : SFVec3f([SFDouble(0), SFDouble(1), SFDouble(0)]),
                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                              children_ : [
                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_4'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_4'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.8049), SFDouble(-0.0732)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_4'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_4'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1951), SFDouble(0.7845), SFDouble(-0.0732)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_4'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_4'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.192), SFDouble(0.7318), SFDouble(-0.0716)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_4'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_4'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.7077), SFDouble(-0.0706)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])]),

                                                                                                                HAnimJoint(
                                                                                                                  name_ : SFString('r_carpometacarpal_5'),
                                                                                                                  DEF_ : SFString('hanim_r_carpometacarpal_5'),
                                                                                                                  center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.8096), SFDouble(-0.0975)]),
                                                                                                                  ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                  children_ : [
                                                                                                                    HAnimJoint(
                                                                                                                      name_ : SFString('r_metacarpophalangeal_5'),
                                                                                                                      DEF_ : SFString('hanim_r_metacarpophalangeal_5'),
                                                                                                                      center_ : SFVec3f([SFDouble(-0.1926), SFDouble(0.7896), SFDouble(-0.0975)]),
                                                                                                                      ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                      children_ : [
                                                                                                                        HAnimJoint(
                                                                                                                          name_ : SFString('r_carpal_proximal_interphalangeal_5'),
                                                                                                                          DEF_ : SFString('hanim_r_carpal_proximal_interphalangeal_5'),
                                                                                                                          center_ : SFVec3f([SFDouble(-0.1902), SFDouble(0.7483), SFDouble(-0.0963)]),
                                                                                                                          ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                          children_ : [
                                                                                                                            HAnimJoint(
                                                                                                                              name_ : SFString('r_carpal_distal_interphalangeal_5'),
                                                                                                                              DEF_ : SFString('hanim_r_carpal_distal_interphalangeal_5'),
                                                                                                                              center_ : SFVec3f([SFDouble(-0.1908), SFDouble(0.754), SFDouble(-0.096)]),
                                                                                                                              ulimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]),
                                                                                                                              llimit_ : MFFloat([SFFloat(0), SFFloat(0), SFFloat(0)]))])])])])])])])])])])])])])])])])])])])])])])])])])])]),

                HAnimJoint(
                  USE_ : SFString('hanim_humanoid_root')),

                HAnimJoint(
                  USE_ : SFString('hanim_sacroiliac')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_tarsal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_hip')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_knee')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocrural')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_talocalcaneonavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_cuneonavicular_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_calcaneocuboid')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_transversetarsal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsometatarsal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metatarsophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_tarsal_distal_interphalangeal_5')),

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
                  USE_ : SFString('hanim_l_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyelid_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyeball_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_eyebrow_joint')),

                HAnimJoint(
                  USE_ : SFString('hanim_temporomandibular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_l_carpal_distal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_sternoclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_acromioclavicular')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_shoulder')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_elbow')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_radiocarpal')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_interphalangeal_1')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_2')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_3')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_midcarpal_4_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_4')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpometacarpal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_metacarpophalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_proximal_interphalangeal_5')),

                HAnimJoint(
                  USE_ : SFString('hanim_r_carpal_distal_interphalangeal_5'))])]));
void main() { exit(0); }
